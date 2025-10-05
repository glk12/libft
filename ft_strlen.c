#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	n;

	n = 0;

	while(*s++)
		n++;

	return (n);
}
/*
#include <string.h>

int	main ()
{
	char *s1 = "Hello";
	char *s2 = "";

	if (ft_strlen(s1) == strlen(s1))
		write(1,"PASSED\n",7);
	else
		write(1,"FAILED\n",7);
	
	if (ft_strlen(s2) == strlen(s2))
		write(1,"PASSED",6);
	else
		write(1,"FAILED",6);
}
*/
