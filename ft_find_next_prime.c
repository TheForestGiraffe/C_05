/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecavalc <pecavalc@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 23:23:32 by pecavalc          #+#    #+#             */
/*   Updated: 2025/04/15 00:30:56 by pecavalc         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) != 1)
		nb++;
	return (nb);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("nb = -10, expected re: 2. Result: %i\n", ft_find_next_prime(-10));
	printf("nb = 0, expected result: 2. Result: %i\n", ft_find_next_prime(0));
	printf("nb = 3, expected result: 3. Result: %i\n", ft_find_next_prime(3));
	printf("nb = 4, expected result: 5. Result: %i\n", ft_find_next_prime(4));
	printf("nb = 20, expected res: 23. Result: %i\n", ft_find_next_prime(20));
	return (0);
}
*/
