/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtruckse <jtruckse@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 11:25:25 by jtruckse          #+#    #+#             */
/*   Updated: 2025/10/16 19:11:44 by jtruckse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

// size_t	ft_strlcpy(char *dest, const char *src, size_t size)
// {
// 	size_t			i;
// 	size_t 			src_len;
// 	const char		*ptr;
// 	unsigned char	*ptr2;

// 	i = 0;
// 	src_len = 0;
// 	ptr = src;
// 	ptr2 = (unsigned char *)dest;
// 	while (i < size - 1 && ptr[i] != '\0')
// 	{
// 	ptr2[i] = ptr[i];
// 	i++;
// 	}
// 	if(size > 0)
// 	{
// 		dest[i] = '\0';
// 	}
// 	while(ptr[src_len != '\0'])
// 	return (dest);
// }

// int main(void)
// {
// 	char ft_strsrc[]= "hallo ";
// 	char st_strsrc[]= "was geht ";
// 	size_t n = 4;
// 	// const char strdest[] = "hello wald?";
// 	printf("%s\n%s\n", ft_strsrc, st_strsrc);
// 	ft_strlcpy(ft_strsrc, st_strsrc, n);
// 	printf("%s\n%s\n", ft_strsrc, st_strsrc, n);
// }
