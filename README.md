# libft

## Description
The `libft` project is a custom C library created to provide a collection of useful functions for various tasks. These functions are designed to mimic standard C library functions while also offering additional functionality and optimizations.

## Features
- Contains a wide range of functions including string manipulation, memory management, and list manipulation.
- Each function is thoroughly tested to ensure reliability and efficiency.
- Optimized implementations for improved performance.
- Well-documented code for easy understanding and integration into other projects.

## Getting Started
To get started with using `libft` in your project, follow these steps:

1. Clone the repository to your local machine:
git clone https://github.com/wzakkabi/libft.git

3. Compile the library by running:  make

4. Link the compiled library (`libft.a`) to your project's build process.

5. Include the `libft.h` header file in your source code to access the library's functions.

## Usage
Here's an example demonstrating the usage of a function from `libft`:

```c
#include "libft.h"
#include <stdio.h>

int main() {
 char *str = "Hello, world!";
 int length = ft_strlen(str);
 printf("Length of the string: %d\n", length);
 return 0;
}
```

## Credits
The libft project was created by [walid zakkabi]. Special thanks to [(https://www.1337.ma/en/) and (https://www.42network.org)] for their contributions and support.

## Contact
If you have any questions, suggestions, or issues regarding libft, feel free to contact [wzakkabi@gmail.com] or open an issue on the GitHub repository.
