/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-a <glopes-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 20:50:00 by glopes-a          #+#    #+#             */
/*   Updated: 2025/10/25 12:58:17 by glopes-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define _DEFAULT_SOURCE
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define GREEN "\033[0;32m"
#define RED "\033[0;31m"
#define BLUE "\033[0;34m"
#define RESET "\033[0m"

int	main(void)
{
	printf(BLUE "ft_isalpha: " RESET);
	if (isalpha('h') != 0 && ft_isalpha('h') != 0)
		printf(GREEN "1- PASSED " RESET);
	else
		printf(RED "1- FAILED " RESET);
	if (isalpha('1') == ft_isalpha('1'))
		printf(GREEN "2- PASSED\n" RESET);
	else
		printf(RED "2- FAILED\n" RESET);

	printf(BLUE "ft_isdigit: " RESET);
	if (isdigit('1') != 0 && ft_isdigit('1') != 0)
		printf(GREEN "1- PASSED " RESET);
	else
		printf(RED "1- FAILED " RESET);
	if (isdigit('a') == ft_isdigit('a'))
		printf(GREEN "2- PASSED\n" RESET);
	else
		printf(RED "2- FAILED\n" RESET);

	printf(BLUE "ft_isalnum: " RESET);
	if (isalnum('a') != 0 && ft_isalnum('a') != 0)
		printf(GREEN "1- PASSED " RESET);
	else
		printf(RED "1- FAILED " RESET);
	if (isalnum('{') == ft_isalnum('{'))
		printf(GREEN "2- PASSED\n" RESET);
	else
		printf(RED "2- FAILED\n" RESET);

	printf(BLUE "ft_isascii: " RESET);
	if (isascii('a') == ft_isascii('a'))
		printf(GREEN "1- PASSED " RESET);
	else
		printf(RED "1- FAILED " RESET);
	if (isascii(255) == ft_isascii(255))
		printf(GREEN "2- PASSED\n" RESET);
	else
		printf(RED "2- FAILED\n" RESET);

	printf(BLUE "ft_isprint: " RESET);
	if (isprint('a') != 0 && ft_isprint('a') != 0)
		printf(GREEN "1- PASSED " RESET);
	else
		printf(RED "1- FAILED " RESET);
	if (isprint(127) == ft_isprint(127))
		printf(GREEN "2- PASSED\n" RESET);
	else
		printf(RED "2- FAILED\n" RESET);

	printf(BLUE "ft_strlen: " RESET);
	if (ft_strlen("Hello") == strlen("Hello"))
		printf(GREEN "1- PASSED " RESET);
	else
		printf(RED "1- FAILED " RESET);
	if (ft_strlen("") == strlen(""))
		printf(GREEN "2- PASSED\n" RESET);
	else
		printf(RED "2- FAILED\n" RESET);

	printf(BLUE "ft_memset: " RESET);
	int arr[6] = {4,5,6};
	ft_memset(arr, 'A', sizeof(arr));
	if (arr[0] == 1094795585 && arr[1] == 1094795585)
		printf(GREEN "1- PASSED\n" RESET);
	else
		printf(RED "1- FAILED\n" RESET);


	printf(BLUE "ft_bzero: " RESET);
	char s[] = "Hello";
	ft_bzero(s, 5);
	if (s[0] == 0 && s[4] == 0)
		printf(GREEN "1- PASSED\n" RESET);
	else
		printf(RED "1- FAILED\n" RESET);

	printf(BLUE "ft_memcpy: " RESET);
	char dest[12] = "World World";
	ft_memcpy(dest, "Hello", 5);
	if (dest[0] == 'H' && dest[4] == 'o')
		printf(GREEN "1- PASSED\n" RESET);
	else
		printf(RED "1- FAILED\n" RESET);

	printf(BLUE "ft_memmove: " RESET);
	int src2[4] = {5,4,3,2};
	int dest2[4];
	ft_memmove(dest2, src2, sizeof(int));
	if (dest2[0] == 5)
		printf(GREEN "1- PASSED\n" RESET);
	else
		printf(RED "1- FAILED\n" RESET);

	printf(BLUE "ft_strlcpy: " RESET);
	char s4[5] = "";
	ft_strlcpy(s4, "778899", 5);
	if (s4[0] == '7' && s4[3] == '8')
		printf(GREEN "1- PASSED\n" RESET);
	else
		printf(RED "1- FAILED\n" RESET);

	printf(BLUE "ft_strlcat: " RESET);
	char buf[10] = "Hello";
	ft_strlcat(buf, "World", 10);
	if (buf[5] == 'W')
		printf(GREEN "1- PASSED\n" RESET);
	else
		printf(RED "1- FAILED\n" RESET);

	printf(BLUE "ft_strchr: " RESET);
	char *c = ft_strchr("Hello", 'l');
	if (c && *c == 'l')
		printf(GREEN "1- PASSED\n" RESET);
	else
		printf(RED "1- FAILED\n" RESET);

	printf(BLUE "ft_strrchr: " RESET);
	char *c9 = ft_strrchr("Hello", 'l');
	if (c9 && c9[1] == 'o')
		printf(GREEN "1- PASSED\n" RESET);
	else
		printf(RED "1- FAILED\n" RESET);

	printf(BLUE "ft_strncmp: " RESET);
	if (ft_strncmp("abc", "abc", 3) == 0)
		printf(GREEN "1- PASSED " RESET);
	else
		printf(RED "1- FAILED " RESET);
	if (ft_strncmp("abc", "abd", 3) < 0)
		printf(GREEN "2- PASSED\n" RESET);
	else
		printf(RED "2- FAILED\n" RESET);

	printf(BLUE "ft_memchr: " RESET);
	char *res = ft_memchr("teste", 't', 5);
	if (res && *res == 't')
		printf(GREEN "1- PASSED\n" RESET);
	else
		printf(RED "1- FAILED\n" RESET);

	printf(BLUE "ft_memcmp: " RESET);
	if (ft_memcmp("abc", "abc", 3) == 0)
		printf(GREEN "1- PASSED " RESET);
	else
		printf(RED "1- FAILED " RESET);
	if (ft_memcmp("abc", "abd", 3) < 0)
		printf(GREEN "2- PASSED\n" RESET);
	else
		printf(RED "2- FAILED\n" RESET);

	printf(BLUE "ft_strnstr: " RESET);
	char *result = ft_strnstr("aaabcabcd", "abcd", 9);
	if (result && result[0] == 'a' && result[1] == 'b')
		printf(GREEN "1- PASSED\n" RESET);
	else
		printf(RED "1- FAILED\n" RESET);


	printf(BLUE "ft_calloc");
	int	is = 1;
	int	*ptr = ft_calloc(5, sizeof(int));
	for (size_t i = 0; i < 5; i++)
	{
		if (ptr[i] != 0)
			is = 0;
	}
	if (is == 1)
		printf(GREEN "1- PASSED\n" RESET);
	else
		printf(RED "1- FAILED\n" RESET);

	printf(BLUE "ft_strdup: " RESET);
	char *sdup = "Hello";
	char *dup = ft_strdup(sdup);
	if (strcmp(sdup, dup) == 0)
		printf(GREEN "1- PASSED\n" RESET);
	else
		printf(RED "1- FAILED\n" RESET);

	printf(BLUE "ft_substr: " RESET);
	char *sfull = "Hello World";
	char *sub = ft_substr(sfull, 2, 11);
	if (sub[0] == sfull[2])
		printf(GREEN "1- PASSED\n" RESET);
	else
		printf(RED "1- FAILED\n" RESET);

	printf(BLUE "ft_strjoin: " RESET);
	char *join;
	join = ft_strjoin("Hello", "World");
	if (strcmp(join, "HelloWorld") == 0)
		printf(GREEN "1- PASSED " RESET);
	else
		printf(RED "1- FAILED " RESET);
	free(join);
	join = ft_strjoin("", "abc");
	if (strcmp(join, "abc") == 0)
		printf(GREEN "2- PASSED " RESET);
	else
		printf(RED "2- FAILED " RESET);
	free(join);
	join = ft_strjoin("abc", "");
	if (strcmp(join, "abc") == 0)
		printf(GREEN "3- PASSED\n" RESET);
	else
		printf(RED "3- FAILED\n" RESET);


	printf(BLUE,"ft_strtrim");
	char *test = "test";
	strtrim(test,"e");
	printf(strtrim);
	return (0);
}
