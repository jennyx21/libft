/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtruckse <jtruckse@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:39:29 by jtruckse          #+#    #+#             */
/*   Updated: 2025/10/17 16:57:06 by jtruckse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*ptr;
	char	*ptr2;

	i = 0;
	ptr = (unsigned char *)src;
	ptr2 = (unsigned char *)dest;
	while (i < n)
	{
		ptr2[i] = ptr[i];
		i++;
	}
	return (dest);
}

// int main(void)
// {
// 	unsigned char str[64]= "hallo welt";
// 	const char str2[] = "wie gehts es dir?";
// 	size_t n = strlen(str2);
// 	printf("%s\n%s\n",  str, (const char *)str2);
// 	ft_memcpy(str, str2, n);
// 	printf("%s\n%s\n", str, str2);
// 	return (0);
// }