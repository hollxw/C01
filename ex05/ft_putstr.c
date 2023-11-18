#include <unistd.h>


void	ft_putstr(char *str)
{
	while (*str != 0)
	{
		write(1,str,1);
		str++;
	}
}

int main()
{
	ft_putstr("oui t'es qui");
	return (0);
}
