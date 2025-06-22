/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecavalc <pecavalc@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 23:23:32 by pecavalc          #+#    #+#             */
/*   Updated: 2025/04/15 23:20:33 by pecavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	x;

	if (nb <= 1)
		return (0);
	x = 2;
	while (x * x <= nb)
	{
		if (nb % x == 0)
			return (0);
		x++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("nb = 0, expected result: 0. Result: %i\n", ft_is_prime(0));
	printf("nb = 1, expected result: 0. Result: %i\n", ft_is_prime(1));
	printf("nb = 7, expected result: 1. Result: %i\n", ft_is_prime(7));
	printf("nb = 23, expected result: 1. Result: %i\n", ft_is_prime(23));
	return (0);
}
*/
