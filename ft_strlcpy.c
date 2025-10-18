/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtruckse <jtruckse@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 11:25:25 by jtruckse          #+#    #+#             */
/*   Updated: 2025/10/17 15:42:04 by jtruckse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t			i;
	size_t			src_len;
	const char		*ptrsrc;
	unsigned char	*ptrdest;

	i = 0;
	src_len = 0;
	ptrsrc = src;
	ptrdest = (unsigned char *)dest;
	while (ptrsrc[src_len] != '\0')
		src_len++;
	if (size > 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			ptrdest[i] = ptrsrc[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_len);
}

// int main(void)
// {
// 	char strsrc[]= "hallo ";
// 	char strdest[]= "was geht ";
// 	 size_t n = 3; //sizeof(strdest);
// 	printf("%s\n%s\n", strsrc, strdest);
// 	ft_strlcpy(strdest, strsrc, n);
// 	size_t len = ft_strlcpy(strdest, strsrc, n);
// 	printf("src length: %zu\n", len);
// 	printf("%s\n%s\n", strsrc, strdest);
// }
