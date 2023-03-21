/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joestrad <joestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 11:48:21 by joestrad          #+#    #+#             */
/*   Updated: 2022/11/30 15:41:41 by joestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_space(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	else
		return (0);
}

int	ft_word_count(char *str)
{
	int	index;
	int	word_count;

	index = 0;
	word_count = 0;
	while (str[index] != '\0')
	{
		while (str[index] != '\0' && ft_is_space(str[index]))
			index++;
		if (!ft_is_space(str[index]))
			word_count++;
		while (str[index] != '\0' && !ft_is_space(str[index]))
			index++;
	}
	return (word_count);
}

char	*ft_get_word(char *str, int start, int end)
{
	char	*word;
	int		index;

	word = (char *) malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	index = 0;
	while (index < (end - start))
	{
		word[index] = str[start + index];
		index++;
	}
	word[index] = '\0';
	return (word);
}

char	**ft_split(char *str)
{
	char	**strings;
	int		n_words;
	int		index_str;
	int		start;
	int		end;

	n_words = ft_word_count(str);
	strings = (char **) malloc((n_words + 1) * sizeof(char *));
	if (!strings)
		return (NULL);
	index_str = 0;
	n_words = 0;
	while (str[index_str] != '\0')
	{
		while (str[index_str] != '\0' && ft_is_space(str[index_str]))
			index_str++;
		start = index_str;
		while (str[index_str] != '\0' && !ft_is_space(str[index_str]))
			index_str++;
		end = index_str;
		strings[n_words] = ft_get_word(str, start, end);
		n_words++;
	}
	strings[n_words] = NULL;
	return (strings);
}
