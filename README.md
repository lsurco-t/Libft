# Libft - Hive Helsinki
## Project Overview
**Libft** is a personal library that provides implementations of essential C standard library functions and other useful utility functions. 
This project aims to develop a deep understanding of C, memory management, and low-level system operations. It is part of the curriculum at Hive Helsinki.
## Features
This project includes implementations of several commonly used functions in C. The library provides functionalities such as string manipulation, memory operations, and file handling, designed to mimic standard library functions.

The following functions are implemented:

- **String manipulation:** ft_strlen, ft_strdup, ft_strchr, ft_strrchr, ft_strcmp, ft_strjoin, ft_substr, ft_strtrim, etc.
- **Memory operations:** ft_memset, ft_memcpy, ft_bzero, ft_memmove, ft_calloc, ft_memchr, ft_memcmp
- **Conversion functions:** ft_itoa, ft_atoi, ft_itoa, etc.
- **File operations:** ft_putchar_fd, ft_putstr_fd, ft_putendl_fd, ft_putnbr_fd, etc.

For a full list, check the **src_1** and **src_2** directories.

## How to Use
Compile the library: Run the following command to build the libft.a static library: **make**

To remove the object files generated during compilation, run: **make clean**

To remove both object files and the compiled library (libft.a), use: **make fclean**

To clean, recompile the library, and build it again: **make re**

After compiling the library, you can run the tests to validate your implementations: **make tests**

## Authors:
- lsurco-t
- Hive Helsinki
