/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtruckse <jtruckse@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 22:50:05 by jtruckse          #+#    #+#             */
/*   Updated: 2025/10/30 00:04:47 by jtruckse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*digit;
	int		i;

	i = 0;
	digit = ft_itoa(n);
	while (digit[i])
	{
		write(fd, &digit[i], 1);
		i++;
	}
}

// need to do it without itoa (not allowed to allocate)
// either get it in two while loops
// or do recursion with number / 10 and number % 10