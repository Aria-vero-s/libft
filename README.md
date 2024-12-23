# Libft

## Table of Contents
- [Introduction](#introduction)
- [Objectives](#objectives)
- [Features](#features)
  - [Part 1: Libc Functions](#part-1)
- [Requirements](#requirements)
- [Usage](#usage)
- [Installation](#installation)
- [Testing](#testing)

---

## Introduction

Libft is the first project at école 42. It involves creating a custom C library containing a collection of essential functions. This library serves as a toolbox for future projects, by providing reusable code.

---

## Objectives

The main goals of this project include:
- Deepening understanding of standard C library functions by re-implementing them from scratch.
- Writing clean, efficient, and maintainable code following the 42 Norm.
- Building a static library that can be used in future projects.

---

## Features

### Part 1:
The following functions from the standard C library were re-implemented, each prefixed with `ft_`:
- Memory Functions: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memccpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`
- String Functions: `ft_strlen`, `ft_strdup`, `ft_strcpy`, `ft_strncpy`, `ft_strcat`, `ft_strncat`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strstr`, `ft_strnstr`, `ft_strcmp`, `ft_strncmp`
- Conversion Functions: `ft_atoi`
- Character Checks: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
- Character Conversion: `ft_toupper`, `ft_tolower`

---

## Requirements

- The project adheres to the 42 Norm.
- Compilation flags: `-Wall -Wextra -Werror`
- No global variables.
- Only the following standard functions are allowed: `malloc`, `free`, `write`.
- Static library file: `libft.a`.

---

## Usage

### Installation
1. Clone the repository:
   ```bash
   git clone https://github.com/Aria-vero-s/libft
   ```
2. Navigate to the project directory:
   ```bash
   cd libft
   ```
3. Compile the library:
   ```bash
   make
   ```

### Integration
To use `libft` in your project, include the `libft.h` header file and link the compiled library:
```c
#include "libft.h"
```

Compile your project with:
```bash
gcc -Wall -Wextra -Werror -L. main.c -lft
```

---

## Testing

Custom test programs were written to validate the functionality of each implemented function.

---
