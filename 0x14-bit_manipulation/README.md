# 0x14. C - Bit manipulation Tasks
## 0. 0 a function that converts a binary number to an unsigned int.
* Prototype: unsigned int binary_to_uint(const char *b);
* where b is pointing to a string of 0 and 1 chars
* Return: the converted number, or 0 i
## 1. 1 a function that prints the binary representation of a number.
* Prototype: void print_binary(unsigned long int n);
* Format: see example
* You are not allowed to use arrays
* You are not allowed to use malloc
* You are not allowed to use the % or / operators
## 2. 10  a function that returns the value of a bit at a given index.
* Prototype: int get_bit(unsigned long int n, unsigned int index);
* where index is the index, starting from 0 of the bit you want to get
* Returns: the value of the bit at index index or -1 if an error occured
## 3. 11 a function that sets the value of a bit to 1 at a given index.
* Prototype: int set_bit(unsigned long int *n, unsigned int index);
* where index is the index, starting from 0 of the bit you want to set
* Returns: 1 if it worked, or -1 if an error occurred
## 4. 100  a function that sets the value of a bit to 0 at a given index.
* Prototype: int clear_bit(unsigned long int *n, unsigned int index);
* where index is the index, starting from 0 of the bit you want to set
* Returns: 1 if it worked, or -1 if an error occurred
## 5. 101  a function that returns the number of bits you would need to flip to get from one number to another.
* Prototype: unsigned int flip_bits(unsigned long int n, unsigned long int m);
* You are not allowed to use the % or / operators
## 6. Endianness-a function that checks the endianness.
* Prototype: int get_endianness(void);
* Returns: 0 if big endian, 1 if little endian
## 7. Crackme3-the password for this program.
* Save the password in the file 101-password
* Your file should contain the exact password, no new line, no extra space
