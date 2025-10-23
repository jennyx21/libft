/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtruckse <jtruckse@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 13:01:02 by jtruckse          #+#    #+#             */
/*   Updated: 2025/10/23 16:44:37 by jtruckse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[0] == 0)
		return ((char *)big);
	while (big[i])
	{
		j = 0;
		while (little[j] == big[i + j] && i + j < len)
		{
			j++;
			if (little[j] == '\0')
				return ((char *)big + i);
		}
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	const char	*big = "Hello there, this is a simple test string.";
// 	const char	*little = "simple";
// 	size_t		len;
// 	char		*result_ft;

// 	len = 30;
// 	result_ft = ft_strnstr(big, little, len);
// 	printf("ft_strnstr found: \"%s\"\n", result_ft);
// }
