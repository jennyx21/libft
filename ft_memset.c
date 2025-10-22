/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtruckse <jtruckse@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 11:29:43 by jtruckse          #+#    #+#             */
/*   Updated: 2025/10/22 21:24:20 by jtruckse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i ;
	char	*ptr ;

	i = 0;
	ptr = (char *) s;
	while (i < n)
	{
		ptr [i] = c;
		i++;
	}
	return (s);
}

// int	main(void)

// {
// 	unsigned char Str[] = "hallo welt";

// 	ft_memset(&Str,'#', 5);
// 	printf("%s\n", Str);
// 	return (0);
// }
