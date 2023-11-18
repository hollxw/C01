#include <unistd.h>

void	ecrit(char c)
{
	write(1, &c, 1);
}


int ft_strlen(char *str)
{
	int i;	

	i = 0;
	while (str[i] != 0)
		i++;
	return(i);
}


int main()
{
	int x;

	x = ft_strlen("bah voyons !");
	if ( x < 10)
		ecrit(x + 48);
	else
	{
		ecrit((x / 10) + 48);
		ecrit((x % 10) + 48);	
	}
	return (0);
}
