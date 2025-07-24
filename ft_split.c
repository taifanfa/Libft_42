/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorais- <tmorais-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 11:39:30 by tmorais-          #+#    #+#             */
/*   Updated: 2025/07/24 12:02:07 by tmorais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_word_count(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

static char	**ft_free_result(char **result, size_t count)
{
	while (count > 0)
	{
		count--;
		free(result[count]);
	}
	free(result);
	return (NULL);
}

static char	*ft_word_dup(const char *s, char c)
{
	size_t	len;
	char	*word;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	ft_strlcpy(word, s, len + 1);
	return (word);
}

static char	**ft_split_words(char **result, const char *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			result[j] = ft_word_dup(&s[i], c);
			if (!result[j])
				return (ft_free_result(result, j));
			j++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	result[j] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	words;

	if (!s)
		return (NULL);
	words = ft_word_count(s, c);
	result = (char **)malloc(sizeof(char *) * (words + 1));
	if (!result)
		return (NULL);
	return (ft_split_words(result, s, c));
}

/*#include <stdio.h>

int	main(void)
{
	char	**res = ft_split("separate words and turn into array", ' ');
	int		i;

	i = 0;
	while (res && res[i])
	{
		printf("Word %d: %s\n", i, res[i]);
		free(res[i]);
		i++;
	}
	free(res);
	return (0);
}*/
