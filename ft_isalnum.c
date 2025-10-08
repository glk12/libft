#include "libft.h"

int	ft_isalnum(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') ||
			(c >= '0' && c <= '9'));
}

#include <ctype.h>
#include <stdio.h>

int	main()
{
	char chars[] = {'a','V','7','{'};

	for(int i = 0; i <= 3; i++)
		printf("isalnum: %d \n ft_isalnum: %d\n",isalnum(chars[i]),ft_isalnum(chars[i]));
}
