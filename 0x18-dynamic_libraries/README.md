## learnt about :0x18. C - Dynamic libraries
## 0x18. C - Dynamic libraries

This repository contains my solutions to the assignments of the 0x18. C - Dynamic libraries project at ALX School.

### Files

| Filename | Description |
| -------- | ----------- |
| [libholberton.so](./libholberton.so) | Dynamic library containing various functions |
| [holberton.h](./holberton.h) | Header file for the dynamic library |
| [1-create_dynamic_lib.sh](./1-create_dynamic_lib.sh) | Bash script to create a dynamic library from C files |
| [100-operations.so](./100-operations.so) | Dynamic library containing mathematical operations |
| [101-make_me_win.sh](./101-make_me_win.sh) | Bash script to inject code into a program to make it win the `gm` command |

### Requirements

- Ubuntu 20.04 LTS
- GCC 9.3.0

### How to Use

1. Clone this repository:

    ```bash
    git clone https://github.com/defranbah/alx-low_level_programming.git
    ```

2. Compile the C files:

    ```bash
    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -fPIC -c *.c
    ```

3. Create the dynamic library:

    ```bash
    gcc -shared -o libholberton.so *.o
    ```

4. Use the dynamic library in your C programs:

    ```bash
    gcc -L. -lholberton -o my_program my_program.c
    ```

### Author

Kevin Ochola 