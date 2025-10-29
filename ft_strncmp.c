/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtruckse <jtruckse@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 17:29:16 by jtruckse          #+#    #+#             */
/*   Updated: 2025/10/29 19:06:01 by jtruckse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

// int main(void)
// {
//     const char *text = "abc\0\0\0";
//     const char *buchstabe = "abc\01234";
// 	size_t vergleich = 8;

//     printf("or_strncmp: <%d>\n", strncmp(text, buchstabe, vergleich));
//     printf("ft_strncmp: <%d>\n", ft_strncmp(text, buchstabe, vergleich ));

//     return (0);
// }