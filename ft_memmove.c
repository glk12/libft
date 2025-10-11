#include "libft.h"
void	ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char *s;
	unsigned char *d;

	s = (const unsigned char *)src;
	d = (unsigned char *)dest;

	while(n--)
		*d++ = *s++;
