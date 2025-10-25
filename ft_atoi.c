/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtruckse <jtruckse@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 16:53:55 by jtruckse          #+#    #+#             */
/*   Updated: 2025/10/25 16:40:16 by jtruckse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	sum;

	i = 0;
	sign = 1;
	sum = 0;
	while (nptr[i] > 0 && nptr[i] <= 32)
		i++;
	if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	if (nptr[i] == '+')
		i++;
	while (ft_isdigit((unsigned char)nptr[i]))
	{
		sum = sum * 10 + (nptr[i] - '0');
		i++;
	}
	return (sign * sum);
}

// int	main(void)
// {
// 	int	i;

// 	const char *tests[] = {"42",
// 							"   42",
// 							"   -42",
// 							"+42",
// 							"0042",
// 							"0",
// 							"-0",
// 							"  +000123",
// 							"2147483647",      // INT_MAX
// 							"-2147483648",     // INT_MIN
// 							"2147483648",      // overflow positiv
// 							"-2147483649",     // overflow negativ
// 							"  \t\n\r\v\f123", // Whitespaces
// 							"123abc",
// 							"abc123",
// 							"",
// 							"    ",
// 							NULL};
// 	i = 0;
// 	while (tests[i])
// 	{
// 		printf("Test %2d: \"%s\"\n", i + 1, tests[i]);
// 		printf("  ft_atoi: %d\n", ft_atoi(tests[i]));
// 		printf("  atoi   : %d\n\n", atoi(tests[i]));
// 		i++;
// 	}
// 	return (0);
// }
