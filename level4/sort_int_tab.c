#include <stdio.h>

int	swap(int **tab, int i1, int i2)
{
	int temp = (*tab)[i1];
	(*tab)[i1] = (*tab)[i2];
	(*tab)[i2] = temp;
}

void sort_int_tab(int *tab, int size)
{
	int i = 0;
	int j;

	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				int temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
	i = 0;
	while (i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
}

int main(int n, char **args)
{
	int tab[6] = {1, 4, 9, -100, 5, 1};
	sort_int_tab(tab, 6);
}