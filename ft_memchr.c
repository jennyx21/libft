/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtruckse <jtruckse@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 20:45:26 by jtruckse          #+#    #+#             */
/*   Updated: 2025/10/22 21:26:27 by jtruckse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)&str[i]);
		i++;
	}
	return (0);
}
// int main(void)
// {
//     const char *text = "abbbbb";
//     char buchstabe = 'a';

//     printf("or_strchr: <%s>\n", strchr(text, buchstabe));
//     printf("ft_strchr: <%s>\n", ft_strchr(text, buchstabe));

//     return 0;
// }