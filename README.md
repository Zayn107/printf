# ft_printf

## Introduction

The **ft_printf** project is part of the 42 curriculum and aims to reimplement the standard **printf()** function from the C standard library. This project enhances understanding of **variadic functions**, **formatted output**, and **buffer management**.

## Objectives

- Implement a function that mimics `printf()`.
- Handle **variadic arguments** using `va_list`.
- Support multiple format specifiers.
- Manage **buffered output** efficiently.

## Function Prototype

```c
int ft_printf(const char *format, ...);
```

### Required Format Specifiers:
- `%c` → Print a single character.
- `%s` → Print a string.
- `%p` → Print a pointer address.
- `%d` / `%i` → Print an integer.
- `%u` → Print an unsigned integer.
- `%x` / `%X` → Print a hexadecimal number (lower/uppercase).
- `%%` → Print a percent sign.

## Implementation Details

- The program is written in **C**.
- Uses `va_list`, `va_start`, `va_arg`, and `va_end` to handle variadic arguments.
- Implements conversion specifiers with proper formatting.
- Handles edge cases such as **NULL strings** and **negative numbers**.

## Compilation & Usage

### Compilation

```bash
gcc -Wall -Wextra -Werror ft_printf.c -o ft_printf
```

### Usage Example

```c
#include "ft_printf.h"

int main()
{
    ft_printf("Hello, %s! Your score is %d.\n", "Alice", 42);
    return 0;
}
```

### Expected Output

```bash
Hello, Alice! Your score is 42.
```

## Possible Enhancements

- Implement **buffered output** for performance optimization.
- Support additional format specifiers such as **floating-point numbers**.
- Improve **error handling** and **precision control**.

## Resources

- [Variadic Functions in C](https://en.cppreference.com/w/c/variadic)
- [Printf Format Specifiers](https://man7.org/linux/man-pages/man3/printf.3.html)

## Author

This project was completed as part of the **42 School** curriculum.

---

### Disclaimer

This project is for educational purposes only and follows the **42 project guidelines**.
