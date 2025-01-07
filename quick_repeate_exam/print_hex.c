#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	print_hex(int n)
{
	char buffer[] = "0123456789abcdef";

	if (n >= 16)
	{
		print_hex(n / 16);
	}
	write (1, &buffer[n % 16], 1);
}

int main()
{
	print_hex(56781);	
}