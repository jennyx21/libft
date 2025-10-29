/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtruckse <jtruckse@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 21:09:54 by jtruckse          #+#    #+#             */
/*   Updated: 2025/10/29 19:05:13 by jtruckse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(const char *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

int	word_len(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char	**word_mallocation(char const *s, char c, char **result)
{
	int	i;
	int	j;
	int	wordlen;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
		{
			wordlen = word_len(&s[i], c);
			result[j] = ft_substr(s, i, wordlen);
			if (!result[j])
			{
				while (j > 0)
					free(result[--j]);
				return (free(result), NULL);
			}
			i = i + wordlen - 1;
			j++;
		}
		++i;
	}
	result[j] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	int		words;
	char	**result;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	result = malloc((words + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	result = word_mallocation(s, c, result);
	return (result);
}

// int	main(void)
// {
// 	char	*s1;
// 	char	**result;
// 	int		i;

// 	s1 = "this is a test string";
// 	// char *s2 = "";
// 	// char *s3 = "\0";
// 	// char *s4 = "     different test    ";
// 	// char *s5 = "    two      words     ";
// 	result = ft_split(s1, " ");
// 	i = 0;
// 	while (result[i])
// 	{
// 		printf("%s\n", result[i]);
// 		i++;
// 	}
// }

/*

char	**result;

->{0}[w][o][r][d][1][\0]
{1}[w][o][r][d][2][\0]
{2}[w][o][r][d][3][\0]
{3} [\0]

result[0][0] -> w == (char)
result[0][1] -> o

result[0] -> string anfang == (char *)


*/