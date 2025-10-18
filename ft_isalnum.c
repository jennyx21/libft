/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtruckse <jtruckse@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 14:52:39 by jtruckse          #+#    #+#             */
/*   Updated: 2025/10/17 15:28:58 by jtruckse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {	
// 	int i = 'a';
// 	printf("%i\n", ft_isalnum(i));
// }
