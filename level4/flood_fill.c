#include <stdio.h>



#include <stdlib.h>
#include <stdio.h>
#include "flood_fill.h"

int	ft_strcmp(char *s1, char *s2)
{
	int i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int my_strstr_index(const char *haystack, const char *needle, int start) {
    if (!needle[0]) return 0;  // Пустая подстрока всегда найдена в начале
	while (haystack[start] != '\0')
	{
		int j = 0;
		while (needle[j] != '\0' && haystack[start + j] == needle[j]) {
            j++;
        }

        // Если дошли до конца подстроки, возвращаем индекс
        if (needle[j] == '\0') {
            return start;
        }
		start++;
	}

    return -1;  // Подстрока не найдена
}

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char*	copy_str(char *dest, int start, int end, char *to_change)
{
	char *result = (char *)malloc(ft_strlen(dest) - (end - start) + ft_strlen(to_change) + 1);
	if (!result)
		return (NULL);
	int i = 0;
	int j = 0;
	while (i < start && dest[i] != '\0')
	{
		result[i] = dest[i];
		i++;
	}
	while (to_change[j] != '\0')
	{
		result[i] = to_change[j];
		i++;
		j++;
	}
	while(dest[end] != '\0')
	{
		result[i] = dest[end];
		i++;
		end++;
	}
	result[i] = '\0';
	return (result);
}

void flood_fill_plus(char **tab, t_point size, t_point begin, char *syym, char *to_change)
{
	int i = 0;
	int i2 = 0;
	int x = 0;
	int y = 0;

	while (y < size.y && y < begin.y)
	{
		x = 0;
		while (x < size.x && x < begin.x)
		{
			i2 = my_strstr_index((tab)[y], syym, x);
			if (i2 == -1)
				break;
			tab[y] = copy_str(tab[y], i2, i2 + ft_strlen(syym), to_change);
			x++;
		}
		// return ;
		y++;
	}
}

void flood_fill(char **tab, t_point size, t_point begin, char syym, char to_change)
{
    int x = 0;
	int y;
	if (!syym || !to_change)
		return ;

	while (y < size.y)
	{
		if (y == begin.y)
			return ;
		x = 0;
		while (x < size.x)
		{
			if (x == begin.x)
				break ;
			if (tab[y][x] == syym)
			{
				tab[y][x] = to_change;
			}
			x++;
		}
		y++;
	}
}

char** make_area(char** zone, t_point size)
{
    char** new;

    new = malloc(sizeof(char*) * size.y);
    for (int i = 0; i < size.y; ++i)
    {
        new[i] = malloc(size.x + 1);
        for (int j = 0; j < size.x; ++j)
            new[i][j] = zone[i][j];
        new[i][size.x] = '\0';
    }

    return new;
}

int main(void)
{
    t_point size = {8, 5};
    char *zone[] = {
        "11111111",
        "10001001",
        "10010001",
        "10110001",
        "11100001",
    };

    char**  area = make_area(zone, size);
    for (int i = 0; i < size.y; ++i)
        printf("%s\n", area[i]);
    printf("\n");

    t_point begin = {7, 5};
    // flood_fill(area, size, begin, '1', 'F');
	flood_fill_plus(area, size, begin, "00", "gh");
	for (int i = 0; i < size.y; ++i)
        printf("%s\n", area[i]);
    printf("\n");
    return 0;
}
