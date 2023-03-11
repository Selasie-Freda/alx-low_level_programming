#include <stdio.h>

void print_number(int n);
void print_number(int n)
{
    if (n < 0)
    {
	    putchar('-');
	    if (n < -9)
		    print_number(n / -10);
	    putchar('0' - n % 10);
    }
    else
    {
	    if (n > 9)
		    print_number(n / 10);
	    putchar(n % 10 + '0');
    }
}

int main(void)
{
    print_number(98);
    putchar('\n');
    print_number(402);
    putchar('\n');
    print_number(0);
    putchar('\n');
    print_number(-54);
    putchar('\n');
    return (0);
}

