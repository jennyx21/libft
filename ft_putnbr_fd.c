/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtruckse <jtruckse@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 22:50:05 by jtruckse          #+#    #+#             */
/*   Updated: 2025/10/29 22:57:26 by jtruckse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*digit;
	int		i;

	i = 0;
	digit = ft_itoa(n);
	while (digit)
	{
		write(fd, &digit[i], 1);
		i++;
	}
}
