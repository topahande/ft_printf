# ft_printf

Reimplementation of the original printf function for the following conversions:

- %c Prints a single character.
- %s Prints a string.
- %p The void * pointer argument has to be printed in hexadecimal format.
- %d Prints a decimal (base 10) number.
- %i Prints an integer in base 10.
- %u Prints an unsigned decimal (base 10) number.
- %x Prints a number in hexadecimal (base 16) lowercase format.
- %X Prints a number in hexadecimal (base 16) uppercase format.
- %% Prints a percent sign.

Running
``
make
``
builds the library libftprintf.a in the root repository, which then enables to use the function ft_printf() in a similar way with the original printf() function.
