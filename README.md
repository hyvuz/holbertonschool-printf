# holbertonschool-printf
A repository for Holberton's project (_printf function)

# Custom _printf Implementation

## Overview
This project is a custom implementation of the standard `printf` function in C. It provides basic formatted output functionality similar to the standard `printf`, supporting various format specifiers.

## Features
- Handles format specifiers such as `%c`, `%s`, `%d`, `%i`, and `%%`.
- Outputs formatted text to the standard output.
- Custom `_putchar` function used for character output.

## Installation
To use this `_printf` function in your project:

1. Clone the repository:
   ```bash
   git clone <repository_url>
   cd <repository_name>
   ```
2. Compile the project:
   ```bash
   gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o my_printf
   ```
3. Include the header file in your source code:
   ```c
   #include "main.h"
   ```

## Usage
Use `_printf` just like the standard `printf`:

```c
#include "main.h"

int main(void)
{
    _printf("Hello, %s!\n", "World");
    _printf("The number is: %d\n", 42);
    return (0);
}
```

### Supported Format Specifiers
| Specifier | Description |
|-----------|-------------|
| `%c`      | Prints a single character |
| `%s`      | Prints a string |
| `%d, %i`  | Prints a signed integer |
| `%%`      | Prints a percent sign |

## Limitations
- Does not support floating-point numbers (`%f` or `%e`).
- Does not support width, precision, or flag modifiers.
- Limited error handling for incorrect format specifiers.

## Manual Page
A manual page is available. To view it:
```bash
man ./man_3_printf
```

## Authors
Custom implementation by User.

## License
This project is open-source and free to use.

