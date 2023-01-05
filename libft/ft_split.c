/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcart <vcart@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 10:57:46 by vcart             #+#    #+#             */
/*   Updated: 2023/01/05 11:22:04 by vcart            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c);

int	count_words(char *str, char sep)
{
	int	i;
	int	count;
	int	is_valid;

	i = 0;
	count = 0;
	while (str[i])
	{
		is_valid = 0;
		while (str[i] && sep == str[i])
			i++;
		while (str[i] && sep != str[i])
		{
			is_valid = 1;
			i++;
		}
		if ((sep == str[i] || str[i] == 0) && is_valid)
			count++;
	}
	return (count);
}

static int	get_word_size(char *str, int word_nb, char sep)
{
	int		i;
	int		count_word;
	int		count_l;

	i = 0;
	count_word = 0;
	count_l = 0;
	while (str[i] && count_word < word_nb)
	{
		while (str[i] && sep == str[i])
			i++;
		while (str[i] && sep != str[i])
		{
			if (count_word == word_nb - 1)
				count_l++;
			i++;
		}
		if (sep == str[i] || str[i] == 0)
			count_word++;
	}
	return (count_l);
}

static void	error_free(char **str_tab, int j)
{
	int	i;

	i = 0;
	while (i < j)
	{
		free(str_tab[i]);
		i++;
	}
	free(str_tab);
}

static char	*get_word(char *str, int word_nb, char sep, int i)
{
	int		j;
	int		count;
	char	*buffer;

	j = 0;
	count = 0;
	buffer = malloc(sizeof(char) * get_word_size(str, word_nb, sep) + 1);
	if (!(buffer))
		return (NULL);
	while (str[i] && count < word_nb)
	{
		while (str[i] && sep == str[i])
			i++;
		while (str[i] && sep != str[i])
		{
			if (count == word_nb - 1)
				buffer[j++] = str[i];
			i++;
		}
		if ((sep == str[i] || str[i] == 0))
			count++;
	}
	buffer[j] = 0;
	return (buffer);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		words_nb;
	int		i;

	if (s)
	{
		i = 0;
		words_nb = count_words((char *)s, c);
		result = malloc(sizeof(char *) * (words_nb + 2));
		if (!result)
			return (NULL);
		while (i < words_nb)
		{
			result[i] = get_word((char *)s, i + 1, c, 0);
			if (!result[i])
			{
				error_free(result, i);
				return (NULL);
			}
			i++;
		}
		result[i] = NULL;
		return (result);
	}
	return (NULL);
}
