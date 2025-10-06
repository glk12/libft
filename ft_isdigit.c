#include "libft.h"

int	ft_isdigit(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

#include <ctype.h>

int	main()
{
	char c1 = '1';
	int c2 = 3;
	int c3 = 'a';
	char c4 = 3;

	if (isdigit(c1) == ft_isdigit(c1))
		write(1,"PASSED\n",7);
	else
		write(1,"FAILED\n",7);

	if (isdigit(c2) == ft_isdigit(c2))
		write(1,"PASSED\n",7);
	else
		write(1,"FAILED\n",7);
	if (isdigit(c3) == ft_isdigit(c3))
		write(1,"PASSED\n",7);
	else
		write(1,"FAILED\n",7);
	if (isdigit(c4) == ft_isdigit(c4))
		write(1,"PASSED",7);
	else
		write(1,"FAILED",7);
}

