/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glopes-a <glopes-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 14:19:04 by glopes-a          #+#    #+#             */
/*   Updated: 2025/10/27 02:12:53 by glopes-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *s, size_t n);

int	count_words(const char *s, char c)
{
	int	i;
	int	start;
	int	words;

	words = 0;
	start = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && start == 0)
		{
			start = 1;
			words++;
		}
		else if (s[i] == c && start == 1)
			start = 0;
		i++;
	}
	return (words);
}

int	word_len(const char *s, char c)
{
	int	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}
void	free_list(char **list_words,int j)
{
	while (--j >= 0)
		free(list_words[j]);
	free(list_words);
}

void	fill_list(char **list_words, const char *s, char c)
{
	int	i;
	int	len;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (!s[i])
			break ;
		if (s[i] != c)
		{
			len = word_len(&s[i], c);
			list_words[j] = (char *)malloc(len + 1);
			if (!list_words[j])
				free_list(list_words, j);
			ft_strlcpy(list_words[j], &s[i], len + 1);
			i += len;
			j++;
		}
	}
	list_words[j] = NULL;
}
char	**ft_split(char const *s, char c)
{
	char	**list_words;

	if (!s)
		return (NULL);
	list_words = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!list_words)
		return (NULL);
	fill_list(list_words, s, c);
	return (list_words);
}
