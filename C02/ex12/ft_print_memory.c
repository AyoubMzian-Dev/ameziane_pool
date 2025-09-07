/* don't forget the headers hear */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_hex_address(void *addr)
{
	unsigned long	address;
	char	*hex;
	int	i;
	char	buffer[16];

	hex = "0123456789abcdef";
	address = (unsigned long)addr;
	i = 15;
	while (i >= 0)
	{
		buffer[i] = hex[address % 16];
		address /= 16;
		i--;
	}
	i = 0;
	while (i < 16)
	{
		ft_putchar(buffer[i]);
		i++;
	}
	ft_putchar(':');
	ft_putchar(' ');
}

void	print_hex_content(void *addr, unsigned int size)
{
	unsigned char	*bytes;
	char	*hex;
	unsigned int	i;

	hex = "0123456789abcdef";
	bytes = (unsigned char *)addr;
	i = 0;
	while (i < 16)
	{
		if (i < size)
		{
			ft_putchar(hex[bytes[i] / 16]);
			ft_putchar(hex[bytes[i] % 16]);
		}
		else
		{
			ft_putchar(' ');
			ft_putchar(' ');
		}
		if (i % 2 == 1)
			ft_putchar(' ');
		i++;
	}
}

void	print_printable_content(void *addr, unsigned int size)
{
	unsigned char	*bytes;
	unsigned int	i;

	bytes = (unsigned char *)addr;
	i = 0;
	while (i < size && i < 16)
	{
		if (bytes[i] >= 32 && bytes[i] <= 126)
			ft_putchar(bytes[i]);
		else
			ft_putchar('.');
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned int	remaining;

	if (size == 0)
		return (addr);
	i = 0;
	while (i < size)
	{
		remaining = size - i;
		if (remaining > 16)
			remaining = 16;
		print_hex_address((char *)addr + i);
		print_hex_content((char *)addr + i, remaining);
		print_printable_content((char *)addr + i, remaining);
		ft_putchar('\n');
		i += 16;
	}
	return (addr);
}