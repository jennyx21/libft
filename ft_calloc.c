/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtruckse <jtruckse@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 16:44:57 by jtruckse          #+#    #+#             */
/*   Updated: 2025/10/27 15:23:47 by jtruckse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	int		*i;
	size_t	total;

	total = nmemb * size;
	i = malloc(total);
	if (!i)
		return (NULL);
	ft_bzero(i, total);
	return (i);
}
// int	main(void)
// {
// 	int	*arr;
// 	int	i;

// 	arr = ft_calloc(5, sizeof(int));
// 	i = 0;
// 	while (i < 5)
// 	{
// 		printf("%d ", arr[i]);
// 		i++;
// 	}
// 	printf("\n");
// }
