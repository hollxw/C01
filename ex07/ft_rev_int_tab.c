#include <unistd.h>
#include <stdio.h>

void	ecrit(char c)
{
	write(1, &c, 1);
}


void ft_rev_int_tab(int *tab, int size)
{
	int i;
	int swap;

	i = 0;
	while (i < size/2)
	{
		swap = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = swap;
		i++;
	}

}


int main()
{
	int tab[4] = {0, 1, 2, 3};
	int size;

	size = 4;

	ft_rev_int_tab(tab, size);
	printf("%d, %d, %d, %d", tab[0], tab[1], tab[2], tab [3]); 
	return (0);
}

