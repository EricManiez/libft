#include "libft.h"

int ft_isupper(int c)
{
	int i = 65;
	while (i <= 90)
	{
		if (i == c)
		{
			return 1;
		}
		else
		{
			i++;
		}
	}
	return 0;
}

