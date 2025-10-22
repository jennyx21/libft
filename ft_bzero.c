/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtruckse <jtruckse@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:21:56 by jtruckse          #+#    #+#             */
/*   Updated: 2025/10/22 21:22:21 by jtruckse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i ;
	char	*ptr ;

	i = 0;
	ptr = (char *) s;
	while (i < n)
	{
		ptr [i] = '\0';
		i++;
	}
}

// int	main(void)

// {
// 	unsigned char Str[] = "hallo welt";

// 	ft_bezero(&Str, 3);
// 	printf("%s\n", Str);
// 	return (0);
// }
