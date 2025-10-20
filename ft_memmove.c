#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char *s;
	unsigned char *d;

  if (dest == src || n == 0)
    return (dest);
  if (!dest && !src)
    return (NULL);

	s = (const unsigned char *)src;
	d = (unsigned char *)dest;

	if (d > s && d < n + s)
	{
	while (n--)
		d[n] = s[n];
	}
	else
	{
		ft_memcpy(dest, src, n);
	}
  return (dest);
}
/*
#include <stdio.h>
int main()
{
    int src[4] = {5,4,3,2};
    int dest[4];

    if(ft_memmove(dest,src,sizeof *src) == memmove(dest, src, sizeof *src))
		printf("%s","PASSED");
	else
		printf("%s", "FAILED");
    
    return(0);
}*/
