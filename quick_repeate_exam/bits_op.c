#include <stdio.h>
#include <unistd.h>
// unsigned char reverse_bits(unsigned char octet)
// {
// 	unsigned char result = 0;
// 	int i = 0;

// 	while (i < 8)
// 	{
// 		result <<= 1; // освобождаем место для след бита
// 		result |= (octet & 1);
// 		octet >>= 1;
// 		i++;
// 	}
// 	return (result);
// }

unsigned char reverse_bits(unsigned char octet)
{
	unsigned char res = 0;
	int i = 0;
	while (i < 8)
	{
		res = res * 2 + (octet % 2);
		octet = octet / 2;
		i++;
	}
	write (1, &res, 1);
}

int main()
{
	unsigned char ch = 'b';
	printf("%c\n", reverse_bits(ch));
}