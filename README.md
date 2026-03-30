# ft_printf

A complete reimplementation of the standard C `printf()` function. This project focuses on handling variable argument lists using `va_list` and converting various data types to their string representations.

## Supported Format Specifiers

- **`%d`** - Signed decimal integers. Prints negative numbers with a minus sign.
- **`%i`** - Same as `%d`.
- **`%u`** - Unsigned decimal integers. Only prints the absolute value without sign.
- **`%x`** - Hexadecimal representation in lowercase (0-9, a-f).
- **`%X`** - Hexadecimal representation in uppercase (0-9, A-F).
- **`%s`** - Character strings (null-terminated). Prints "(null)" if the pointer is NULL.
- **`%c`** - Single character. If the value is 0, prints the null character.
- **`%p`** - Memory addresses in hexadecimal format with `0x` prefix. Uses lowercase hex digits.
- **`%%`** - Literal percent character. Used to print a `%` without interpreting the next character as a format specifier.

## How It Works

The function parses the format string character by character, looking for `%` symbols. When found, it checks the next character to determine which conversion function to call. The appropriate handler function is invoked with the corresponding argument from the variable argument list, which outputs the formatted result and returns the number of characters printed.

The total character count is accumulated and returned at the end. If any error occurs during processing, the function returns -1.

## Example Usage

```c
#include "ft_printf.h"

ft_printf("Hello %s!\n", "World");                    // Hello World!
ft_printf("Number: %d, Hex: %x\n", 255, 255);        // Number: 255, Hex: ff
ft_printf("Address: %p, Unsigned: %u\n", &x, -5);    // Address: 0x7ffd..., Unsigned: 4294967291
ft_printf("Percent: %%\n");                           // Percent: %
```

## Key Features

- Handles all specified format conversions correctly
- Properly manages variable-length argument lists
- Returns the number of characters printed (just like the real `printf`)
- Error handling for NULL strings
- Support for both signed and unsigned integer types
