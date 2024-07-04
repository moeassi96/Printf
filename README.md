# ft_printf

Libft is a C library consisting of various custom implementations of standard C library functions and additional utility functions.

## Table of Contents
1. [Overview](#Overview)
2. [Description](#Description)
3. [Usage](#usage)
    - [Prerequisites](#prerequisites)
    - [Installation](#installation)
    - [Compiling](#compiling)
4. [Formatting](#Formatting)
5. [Examples](#Examples)
    - [Basic](#Basic)
    - [Flags](#Flags)
   

## Overview

ft_printf is a custom implementation of the printf function from the C standard library (libc). This project aimed at re-creating the functionality of printf.

## Description

The ft_printf function mimics the behavior of printf and supports various format specifiers (%c, %s, %p, %d, %i, %u, %x, %X, %%). It handles conversions and formatting without the buffer management found in the original printf function.

Additionally, ft_printf includes advanced features:

Flags: -, 0, .<br>
Field Minimum Width<br>
Extended Flags: #, +, space<br>

These enhancements provide greater control over output formatting and cater to various formatting needs beyond the standard printf capabilities.

## Usage

### Prerequisites

- GCC (GNU Compiler Collection)
- Make

### Installation

Clone the repository from GitHub:

```bash
git clone git@github.com:moeassi96/ft_printf.git
```

### Compiling

To compile the library, navigate to the cloned directory and use Make:

```bash
cd ft_printf/
make
```

## Formatting

<h3> %<span style="color: wight;">[Flag]</span><span style="color: green;">[width]</span><span style="color: red;">[precision]</span><span style="color: orange;">[specifier]</span> </h3>



## Examples

### Basic

```c
#include "libftprintf.h"

int main() {
    ft_printf("Hello, %s!\n", "world");  // Basic string output
    ft_printf("The number is %d\n", 10); // Basic integer output
    ft_printf("The character is %c\n", 'a'); // Basic character output
    return 0;
}
```

### Flags

```c
#include "libftprintf.h"

int main() {
    int num = 12345;
    ft_printf("%10d\n", num);         // Width: 10, right-aligned
    ft_printf("%-10d\n", num);        // Width: 10, left-aligned
    ft_printf("%05d\n", num);         // Width: 5, padded with zeros
    ft_printf("%.3s\n", "Hello");     // Precision: 3, string truncated
    ft_printf("%.4d\n", num);         // Precision: 4, zero-padded number
    return 0;
}
```