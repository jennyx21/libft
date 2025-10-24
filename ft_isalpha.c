/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtruckse <jtruckse@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 14:52:39 by jtruckse          #+#    #+#             */
/*   Updated: 2025/10/24 20:01:19 by jtruckse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

// int	main(void)
// {
// 	char	*str;
// 	int		i;

// 	str = "this is a 123123string";
// 	i = 0;
// 	while (str[i])
// 	{
// 		printf("%d - %c\n", ft_isalpha(str[i]), str[i]);
// 		i++;
// 	}
// }
