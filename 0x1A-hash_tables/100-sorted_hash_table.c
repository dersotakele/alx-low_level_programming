#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 *  * shash_table_create - Function creates a sorted hash table.
 *   * @size: The size of new sorted hash_table.
 *    *
 *     * Return: On failed execution - NULL.
 *      *         On successful execution - a pointer to the new sorted hash table.
 *       */
shash_table_t *shash_table_create(unsigned long int size)
{
		shash_table_t *hat;
			unsigned long int index;

				hat = malloc(sizeof(shash_table_t));
					if (hat == NULL)
								return (NULL);

						hat->size = size;
							hat->array = malloc(sizeof(shash_node_t *) * size);
								if (hat->array == NULL)
											return (NULL);
									for (index = 0; index < size; index++)
												hat->array[index] = NULL;
										hat->shead = NULL;
											hat->stail = NULL;

												return (hat);
}

/**
 *  * shash_table_set - Function adds an element to a sorted hash table.
 *   * @ht: The pointer to the sorted hash table.
 *    * @key: The key to add - key cannot be an empty string.
 *     * @value: The value paired with key.
 *      *
 *       * Return: On successful execution - 0.
 *        *         On failed execution - 1.
 *         */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
		shash_node_t *new, *tmp;
			char *value_copy;
				unsigned long int index;

					if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
								return (0);

						value_copy = strdup(value);
							if (value_copy == NULL)
										return (0);

								index = key_index((const unsigned char *)key, ht->size);
									tmp = ht->shead;
										while (tmp)
												{
															if (strcmp(tmp->key, key) == 0)
																		{
																						free(tmp->value);
																									tmp->value = value_copy;
																												return (1);
																														}
																	tmp = tmp->snext;
																		}

											new = malloc(sizeof(shash_node_t));
												if (new == NULL)
														{
																	free(value_copy);
																			return (0);
																				}
													new->key = strdup(key);
														if (new->key == NULL)
																{
																			free(value_copy);
																					free(new);
																							return (0);
																								}
															new->value = value_copy;
																new->next = ht->array[index];
																	ht->array[index] = new;

																		if (ht->shead == NULL)
																				{
																							new->sprev = NULL;
																									new->snext = NULL;
																											ht->shead = new;
																													ht->stail = new;
																														}
																			else if (strcmp(ht->shead->key, key) > 0)
																					{
																								new->sprev = NULL;
																										new->snext = ht->shead;
																												ht->shead->sprev = new;
																														ht->shead = new;
																															}
																				else
																						{
																									tmp = ht->shead;
																											while (tmp->snext != NULL && strcmp(tmp->snext->key, key) < 0)
																															tmp = tmp->snext;
																													new->sprev = tmp;
																															new->snext = tmp->snext;
																																	if (tmp->snext == NULL)
																																					ht->stail = new;
																																			else
																																							tmp->snext->sprev = new;
																																					tmp->snext = new;
																																						}

																					return (1);
}

/**
 *  * shash_table_get - Function retrieve the value associated with
 *   *                   a key in a sorted hash table.
 *    * @ht: The pointer to the sorted hash table.
 *     * @key: The key in th sorted hash_table to get the value of.
 *      *
 *       * Return: On failed matching - NULL.
 *        *         On successful matching - the value associated with key in ht.
 *         */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
		shash_node_t *node;
			unsigned long int index;

				if (ht == NULL || key == NULL || *key == '\0')
							return (NULL);

					index = key_index((const unsigned char *)key, ht->size);
						if (index >= ht->size)
									return (NULL);

							node = ht->shead;
								while (node != NULL && strcmp(node->key, key) != 0)
											node = node->snext;

									return ((node == NULL) ? NULL : node->value);
}

/**
 *  * shash_table_print - Function prints a sorted hash table in order.
 *   * @ht: The pointer to the sorted hash table.
 *    */
void shash_table_print(const shash_table_t *ht)
{
		shash_node_t *node;

			if (ht == NULL)
						return;

				node = ht->shead;
					printf("{");
						while (node != NULL)
								{
											printf("'%s': '%s'", node->key, node->value);
													node = node->snext;
															if (node != NULL)
																			printf(", ");
																}
							printf("}\n");
}

/**
 *  * shash_table_print_rev - Function prints sorted hash_table in reverse order.
 *   * @ht: The pointer to the sorted hash table to print.
 *    */
void shash_table_print_rev(const shash_table_t *ht)
{
		shash_node_t *node;

			if (ht == NULL)
						return;

				node = ht->stail;
					printf("{");
						while (node != NULL)
								{
											printf("'%s': '%s'", node->key, node->value);
													node = node->sprev;
															if (node != NULL)
																			printf(", ");
																}
							printf("}\n");
}

/**
 *  * shash_table_delete - Function deletes a sorted hash table.
 *   * @ht: The pointer to the sorted hash table.
 *    */
void shash_table_delete(shash_table_t *ht)
{
		shash_table_t *head = ht;
			shash_node_t *node, *tmp;

				if (ht == NULL)
							return;

					node = ht->shead;
						while (node)
								{
											tmp = node->snext;
													free(node->key);
															free(node->value);
																	free(node);
																			node = tmp;
																				}

							free(head->array);
								free(head);
}
