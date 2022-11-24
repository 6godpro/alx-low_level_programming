# **C - Functions, nested loops**

In this project, I learned about nested loops, header files, and variable scope in C while practicing declaring and defining my own functions.

## **Test** :heavy_check_mark:
  * [test](https://github.com/6godpro/alx-low_level_programming/tree/main/0x02-functions_nested_loops/test): Folder of test files, created by [me](https://github.com/6godpro).
  
## **_Putchar.c** :scroll:
  * [_putchar.c](https://github.com/6godpro/alx-low_level_programming/blob/main/0x02-functions_nested_loops/_putchar.c): C function that writes a single character to `stdout`.
  
## **Header** File :file_folder:
  * [main.h](https://github.com/6godpro/alx-low_level_programming/blob/main/0x02-functions_nested_loops/main.h): contains prototypes for all functions written in this project.

|      **File**           |               **Prototype**           |
--------------------------|----------------------------------------
`1-alphabet.c`          	| `void print_alphabet(void);`
`2-print_alphabet_x10.c`  |	`void print_alphabet_x10(void);`
`3-islower.c`             | `int _islower(int c);`
`4-isalpha.c`             | `int _isalpha(int c);`
`5-sign.c`                | `int print_sign(int n);`
`6-abs.c`                 | `int _abs(int);`
`7-print_last_digi.c`     | `int print_last_digit(int);`
`8-24_hours.c`	          | `void jack_bauer(void);`
`9-times_table.c`         | `void times_table(void);`
`10-add.c`	              | `int add(int, int);`
`11-print_to_98.c`        | `void print_to_98(int n);`
`100-times_table.c`       | `void print_times_table(int n);`
  
## Tasks :page_with_curl:

* **0. _putchar**
  * [0-putchar.c](https://github.com/6godpro/alx-low_level_programming/blob/main/0x02-functions_nested_loops/0-putchar.c): C function that prints _putchar, followed by a new line.

* **1. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game**
  * [1-alphabet.c](https://github.com/6godpro/alx-low_level_programming/blob/main/0x02-functions_nested_loops/1-alphabet.c): C function that prints the alphabet, in lowercase, followed by a new line.

* **2. 10 x alphabet**
  * [2-print_alphabet_x10.c](https://github.com/6godpro/alx-low_level_programming/blob/main/0x02-functions_nested_loops/2-print_alphabet_x10.c): C function that prints 10 times the alphabet, in lowercase, followed by a new line.

* **3. islower**
  * [3-islower.c](https://github.com/6godpro/alx-low_level_programming/blob/main/0x02-functions_nested_loops/3-islower.c): C function that checks for lowercase character.

* **4. isalpha**
  * [4-isalpha.c](https://github.com/6godpro/alx-low_level_programming/blob/main/0x02-functions_nested_loops/4-isalpha.c): C function that checks for alphabetic character.
    * Prototype: int_isalpha(int c)
    * Returns 1 if c is a letter, lowercase or uppercase
    * Returns 0 otherwise


* **5. Sign**
  * [5-sign.c](https://github.com/6godpro/alx-low_level_programming/blob/main/0x02-functions_nested_loops/5-sign.c): C function that prints the sign of a number.
     * Returns 1 and prints + if n is greater than zero
     * Returns 0 and prints 0 if n is zero
     * Returns -1 and prints - if n is less than zero

* **6. There is no such thing as absolute value in this world. You can only estimate what a thing is worth to you**
  * [6-abs.c](https://github.com/6godpro/alx-low_level_programming/blob/main/0x02-functions_nested_loops/6-abs.c): C function that computes the absolute value of an integer.


* **7. There are only 3 colors, 10 digits, and 7 notes; it's what we do with them that's Important** 
  * [7-print_last_digit.c](https://github.com/6godpro/alx-low_level_programming/blob/main/0x02-functions_nested_loops/7-last_digit): function that prints the last digit of a number.

* **8. I'm federal agent Jack Bauer, and today is the longest day of my life**
  * [8-24_hours.c](https://github.com/6godpro/alx-low_level_programming/blob/main/0x02-functions_nested_loops/8-24_hours.c): C function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.

* **9. Learn your times table**
  * [9-times_table.c](https://github.com/6godpro/alx-low_level_programming/blob/main/0x02-functions_nested_loops/9-times_table.c): C function that prints the 9 times table, starting with 0.

* **10. a + b**
  * [10-add.c](https://github.com/6godpro/alx-low_level_programming/blob/main/0x02-functions_nested_loops/10-add.c): C function that adds two integers and returns the result.

* **11. 98 Battery street, the OG**
  * [11-print_to_98.c](https://github.com/6godpro/alx-low_level_programming/blob/main/0x02-functions_nested_loops/11-print_to_98.c): C function that prints all natural numbers from n to 98 followed by a new line.
    * Numbers must be separated by comma, followed by a space.
    * Numbers should be printed in order.
    * The first printed number should be the number passed to your function.
    * The last printed number should be 98.


* **12. The World looks like a multiplication-table, or a mathematical equation, which, turn it how you will, balances itself**
  * [100-times_table.c](https://github.com/6godpro/alx-low_level_programming/blob/main/0x02-functions_nested_loops/100-times_table.c): C function that prints the n times table, starting with 0.
      * If n is greater than 15 or less than 0 the function should not print anything.


* **13. Nature made the natural numbers; All else is the work of women**
  * [101-natural.c](https://github.com/6godpro/alx-low_level_programming/blob/main/0x02-functions_nested_loops/101-natural.c): C program that computes and prints the sum of all the multiples of 3 or 5 below 1024 (excluded), followed by a new line.


* **14. In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead, I wrote a program that would steal passwords of students. My teacher gave me an A**
  * [102-fibonacci.c](https://github.com/6godpro/alx-low_level_programming/blob/main/0x02-functions_nested_loops/102-fibonacci.c): C program that prints the first 50 Fibonacci numbers, starting with 1 and 2, followed by a new line.
      * The numbers must be separated by a comma followed by a space.


* **15. Even Liber Abbaci**
  * [103-fibonacci.c](https://github.com/6godpro/alx-low_level_programming/blob/main/0x02-functions_nested_loops/103-fibonacci.c): C program that prints the first 50 Fibonacci numbers, starting with 1 and 2, separated by a comma and followed by a new line.


* **16. In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead, I wrote a program that would steal passwords of students. My teacher gave me an A+**
  * [104-fibonacci.c](): C program that finds and prints the first 98 Fibonacci numbers, starting with 1 and 2, separated by a comma and followed by a new line
      * The numbers should be separated by comma, followed by a space
      * You are allowed to use the standard library
      * You are not allowed to use any other library (You can’t use GMP etc...)
      * You are not allowed to usel long long, malloc, pointers, arrays/tables, or structure
      * You are not allowed to hard code any Fibonacci number (except for 1 and 2)
