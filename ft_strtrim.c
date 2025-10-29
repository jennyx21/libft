/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtruckse <jtruckse@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 19:03:28 by jtruckse          #+#    #+#             */
/*   Updated: 2025/10/29 19:06:29 by jtruckse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*goalstr;

	start = 0;
	end = ft_strlen(s1);
	if (!s1)
		return (NULL);
	if (!set)
		return (NULL);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	goalstr = ft_substr(s1, start, end - start);
	return (goalstr);
}
// alternative
// return (ft_substr(s1, start, end - start));

// int	main(void)
// {
// 	char	*trimm;
// 	trimm = ft_strtrim("abcabc test abcabc", "bca ");
// 	printf("%s\n", trimm);
// }

// the goal of ft_strtrim is to remove a
// defined set of chars from the beginning and the end.
// ------
// standard check if s1 or set is empty
// initialize start and end
// use strchr to check current index of s1 against full set string,
// and that s1 index is not NULL, increment if true
// , now you have pos of after front trim
// do the same with end in reverse, and check that end is above 0,
// else you access memory out-of-bound, decrement if true
// , add
// add one to include last character as
// the loop breaks after the last char has been decremented
// , create a substr with your positions and return it.
// substr takes the string, the start position of the trimmed string,
// and the end position, which you get by subtracting start from end

// s1: The string to be trimmed.
// set: The reference set of characters to trim.
// Return value: The trimmed string.
// NULL if the allocation fails.
// External functs.: malloc
// Allocates (with malloc(3)) and returns a copy of
// ’s1’ with the characters specified in ’set’ removed
// from the beginning and the end of the string. */