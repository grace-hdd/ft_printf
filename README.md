# ft_printf

A custom implementation of the C standard library function `printf()` as part of the 42 School curriculum.

## 📋 Table of Contents

- [About](#about)
- [Features](#features)
- [Compilation](#compilation)
- [Usage](#usage)
- [Supported Conversions](#supported-conversions)
- [Bonus Features](#bonus-features)
- [Testing](#testing)
- [Resources](#resources)

## 📖 About

`ft_printf` is a project that recreates the behavior of the C standard library function `printf()`. This project is part of the 42 School curriculum and aims to deepen understanding of variadic functions, type handling, and formatted output in C.

The goal is to implement a function with the following prototype:
```c
int ft_printf(const char *format, ...);
```

This function should mimic the original `printf()` behavior, handling various format specifiers and returning the number of characters printed.

## ✨ Features

- **Variadic Function Implementation**: Handle variable number of arguments
- **Format String Parsing**: Parse and interpret format specifiers
- **Type Conversion**: Convert and format different data types for output
- **Return Value**: Return the total number of characters printed
- **Buffer Management**: Efficient output handling

## 🔧 Compilation

To compile the library, use the provided Makefile:

```bash
make        # Compile the library
make clean  # Remove object files
make fclean # Remove object files and library
make re     # Recompile the library
```

This will create a `libftprintf.a` static library that can be linked with your programs.

To use the library in your program:
```bash
gcc -Wall -Wextra -Werror your_program.c libftprintf.a -o your_program
```

## 🚀 Usage

Include the header file in your program:

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, %s!\n", "World");
    ft_printf("Number: %d\n", 42);
    ft_printf("Hex: %x\n", 255);
    return (0);
}
```

## 🔤 Supported Conversions

The mandatory conversions that should be implemented:

| Specifier | Description |
|-----------|-------------|
| `%c` | Print a single character |
| `%s` | Print a string |
| `%p` | Print a pointer address in hexadecimal |
| `%d` | Print a decimal (base 10) number |
| `%i` | Print an integer in base 10 |
| `%u` | Print an unsigned decimal number |
| `%x` | Print a number in hexadecimal (lowercase) |
| `%X` | Print a number in hexadecimal (uppercase) |
| `%%` | Print a percent sign |

## 🌟 Bonus Features

Additional features that can be implemented for bonus points:

- **Flags**: `-`, `0`, `.`, `#`, ` ` (space), `+`
- **Width**: Minimum field width
- **Precision**: Precision for numbers and strings
- **Combinations**: Any combination of the above

Examples:
```c
ft_printf("%-10s", "left");      // Left-aligned string
ft_printf("%010d", 42);          // Zero-padded number
ft_printf("%.3s", "hello");      // Precision for strings
ft_printf("%#x", 42);            // Alternate form (0x prefix)
ft_printf("% d", 42);            // Space before positive numbers
ft_printf("%+d", 42);            // Plus sign for positive numbers
```

## 🧪 Testing

### Manual Testing

Create a test file to compare your `ft_printf` with the standard `printf`:

```c
#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
    int ret1, ret2;
    
    ret1 = printf("printf: %d\n", 42);
    ret2 = ft_printf("ft_printf: %d\n", 42);
    printf("Return values: %d vs %d\n", ret1, ret2);
    
    return (0);
}
```

### Automated Testing

Consider using testing frameworks or test suites available for ft_printf:
- [42 File Checker](https://github.com/jgigault/42FileChecker)
- [ft_printf Unit Tests](https://github.com/Tripouille/printfTester)
- Create your own comprehensive test suite

### Test Cases to Consider

- Edge cases: NULL pointers, empty strings
- Boundary values: INT_MAX, INT_MIN, 0
- Multiple conversions in a single format string
- Special characters and escape sequences
- Different number bases (decimal, hexadecimal)
- Pointer addresses
- Return value accuracy

## 📚 Resources

### Understanding printf
- [printf man page](https://man7.org/linux/man-pages/man3/printf.3.html)
- [Variadic Functions in C](https://en.cppreference.com/w/c/variadic)

### 42 School Resources
- [42 Subjects](https://github.com/Binary-Hackers/42_Subjects)
- [42 School Projects](https://github.com/agavrel/42_project_links)

### Additional Learning
- Format specifiers and their behavior
- stdarg.h and variadic macros
- Buffer management techniques
- Type conversions and casting

## 📝 Project Structure

A typical ft_printf project structure:
```
ft_printf/
├── Makefile
├── ft_printf.h
├── ft_printf.c
├── ft_printf_utils.c
├── ft_conversion_handlers.c
└── README.md
```

## ⚖️ License

This project is part of the 42 School curriculum. Feel free to use and learn from it, but please adhere to your school's academic integrity policies.

## 👤 Author

Created as part of the 42 School curriculum.

---

**Note**: This is an educational project. The implementation should be done independently to maximize learning outcomes.