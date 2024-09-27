# Libft

This project is a fundamental part of the School 42 curriculum, where we implement our own C library containing recreated standard C library functions and additional useful utilities.

## Project Overview

Libft aims to build a custom C library with reimplemented libc functions and extra helper functions that will be used in future 42 projects. Key features include:

- Basic libc function implementations (e.g. memcpy, memmove, strlen)
- Additional utility functions 
- Memory management tools
- Data structures like dynamic arrays and linked lists
- String manipulation functions
- Custom printf implementation

## Usage

To use this library in your 42 projects:

1. Compile the library:
```
make
```

2. Include the header in your C files:
```c
#include "libft.h"
```

Compile your project with the library:
```text
gcc -L. -lft your_file.c
````
Norme Compliance
- This project adheres to the 42 Norm coding standards:
- Functions limited to 25 lines
- Variables declared at the top of functions
- No more than 5 function definitions per file
## Note: 
As per 42 guidelines, this README and project are for educational purposes only. Do not copy or submit as your own work.
