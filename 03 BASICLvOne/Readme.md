## Introduction to C++ programming

# Data Type are of 2 types

    .     Size of the data
    .     Type of data

        .   Integer data type stores 4 bytes
        .   Data types are:
                            .   Built-in or Primitive datatypes
                            .   Derived datatypes
                            .   User Defined datatypes
                                .   Built-in datatypes:
                                                        .   integer
                                                            .   Signed integer(+ve/-ve numbers can be stored) => Can store upto 2^n -> 2^n-1 -1
                                                            .   unsigned integer(can store 0 to any +ve numbers) => Can store upto 2^n-1
                                                        .   floating
                                                        .   void
                                                        .   double
                                                        .   float
                                                        .   boolean(bool) [Takes the smallest space which is 1 byte 0000000001]
                                .   Derived datatypes
                                                        .   Arrays
                                                        .   Pointers
                                                        .   References
                                .   User-defined datatypes
                                                        .   Structures
                                                        .   Union
                                                        .   Classes
                                                        .   Enumarations

# Ternary Operator
###         Syntax:
                condition ? expression_if_true : expression_if_false;

# Bitwise Operators
###         Explaination
                        Bitwise operators in C++ perform operations on the individual bits of integers. Here's a breakdown of the bitwise operators:

                                            1. AND (&): Performs a logical AND operation between two integers, bit by bit.

                                            Example: 5 & 3 = 1 (00000101 & 00000011 = 00000001)

                                            1. OR (|): Performs a logical OR operation between two integers, bit by bit.

                                            Example: 5 | 3 = 7 (00000101 | 00000011 = 00000111)

                                            1. XOR (^): Performs a logical XOR (exclusive OR) operation between two integers, bit by bit.

                                            Example: 5 ^ 3 = 6 (00000101 ^ 00000011 = 00000110)

                                            1. NOT (~): Flips the bits of an integer (i.e., 0 becomes 1 and 1 becomes 0).

                                            Example: ~5 = -6 (00000101 → 11111010)

                                            1. Left Shift (<<): Shifts the bits of an integer to the left, filling with zeros on the right.

                                            Example: 5 << 2 = 20 (00000101 → 00010100)

                                            1. Right Shift (>>): Shifts the bits of an integer to the right, filling with zeros on the left (for unsigned integers) or with the sign bit (for signed integers).

                                            Example: 20 >> 2 = 5 (00010100 → 00000101)

                                            Remember that bitwise operators only work with integer types (int, char, long, etc.) and not with floating-point numbers or strings.

                                            Here are some use cases for bitwise operators:

                                            - Setting, clearing, or toggling individual bits
                                            - Checking if a bit is set or clear
                                            - Performing bit-level arithmetic
                                            - Optimizing algorithms using bit manipulation

