/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtruckse <jtruckse@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 16:39:29 by jtruckse          #+#    #+#             */
/*   Updated: 2025/10/15 16:55:54 by jtruckse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptrsrc;
	unsigned char	*ptrdest;
	size_t			i;

	ptrsrc = (unsigned char *)src;
	ptrdest = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		if (ptrsrc < ptrdest)
		{
			ptrdest[n] = ptrsrc[n];
			n--;
		}
		else
		{
			ptrdest[i] = ptrsrc[i];
			i++;
		}
	}
	return (dest);
}

int main(void)
{
	char ft_strsrc[]= "1234567890";
	char st_strsrc[]= "1234567890";
	// const char strdest[] = "hello wald?";
	size_t n = 3;
	printf("%s\n",  ft_strsrc);
	ft_memmove(ft_strsrc + 3, ft_strsrc + 3, n);
	printf("%s\n", ft_strsrc);
	memmove(st_strsrc + 3, st_strsrc + 3, n);
	printf("%s\n", st_strsrc);
	return (0);
}