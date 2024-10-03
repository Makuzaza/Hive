/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makuznet <makuznet@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:26:22 by makuznet          #+#    #+#             */
/*   Updated: 2024/09/24 16:15:13 by makuznet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_charset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	count;

	count = 0;
	while (*str)
	{
		if (!is_charset(*str, charset))
		{
			count++;
			while (*str && !is_charset(*str, charset))
				str++;
		}
		else
			str++;
	}
	return (count);
}

char	*malloc_word(char *str, char *charset)
{
	char	*word;
	int		len;
	int		i;

	len = 0;
	while (str[len] && !is_charset(str[len], charset))
		len++;
	word = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	while (*str && !is_charset(*str, charset))
	{
		word[i] = *str;
		i++;
		str++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		words;
	int		i;

	words = count_words(str, charset);
	tab = (char **)malloc(sizeof(char *) * (words + 1));
	i = 0;
	while (*str)
	{
		if (!is_charset(*str, charset))
		{
			tab[i] = malloc_word(str, charset);
			i++;
			while (*str && !is_charset(*str, charset))
				str++;
		}
		else
			str++;
	}
	tab[i] = 0;
	return (tab);
}

// #include <stdio.h>

// int	main(void)

// {
// 	char *str = "Hello, World! This is a test string.";
// 	char **tab = ft_split(str, " ,!");
// 	int i = 0;
// 	while (tab[i])
// 	{
// 		printf("%s\n", tab[i]);
// 		i++;
// 	}

// 	return (0);
// }
