## Custom printf Implementation

## Overview

ft_printf is a bespoke implementation of the standard printf function found in the C library (libc). This single-function library, libftprintf.a, has been crafted to mirror the behavior of the original printf, offering a comprehensive set of format specifiers and conversions.

## Important Note

This project forms part of the curriculum, aiming to deepen your comprehension of the `printf` function. Adherence to the outlined guidelines is crucial for a successful evaluation.

## Submission Guidelines

- **Directory Structure:** Your repository should contain the following files at the root:
  - `Makefile`
  - `*.h` (header files)
  - `*.c` (source files)

- **Makefile Targets:**
  - `all`: Compile the library.
  - `clean`: Remove object files.
  - `fclean`: Remove object files and the library.
  - `re`: Rebuild the library.

- **External Functions:**
  - `malloc`
  - `free`
  - `write`
  - `va_start`
  - `va_arg`
  - `va_copy`
  - `va_end`

- **Libft Authorization:** You're allowed to utilize functions from the `libft` library.

## Function Definition

```c
int ft_printf(const char *format, ...);
```

## Specifics

- **Buffer Management:** Skip implementing the buffer management of the original `printf`.

- **Supported Conversions:**
  - `%c`: Print a single character.
  - `%s`: Print a string.
  - `%p`: Print a void pointer in hexadecimal format.
  - `%d`: Print a decimal number.
  - `%i`: Print an integer in base 10.
  - `%u`: Print an unsigned decimal number.
  - `%x`: Print a number in hexadecimal (lowercase).
  - `%X`: Print a number in hexadecimal (uppercase).
  - `%%`: Print a percent sign.

- **Comparison:** Your implementation will be assessed against the behavior of the original `printf`.

- **Library Creation:** Utilize the `ar` command to construct your library; refrain from using `libtool`.


## Example Usage

```c
#include "libftprintf.h"

int main() {
    ft_printf("Greetings, %s! The answer is %d.\n", "universe", 42);
    return 0;
}
