/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecavalc <pecavalc@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 19:43:02 by pecavalc          #+#    #+#             */
/*   Updated: 2025/04/15 12:58:54 by pecavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power -1));
}
/*
#include <stdio.h>
int	main(void)
{
	printf("2^3: %i\n", ft_recursive_power(2,3));
	printf("-2^4: %i\n", ft_recursive_power(-2,4));
	printf("-2^3: %i\n", ft_recursive_power(-2,3));
	printf("-1^0: %i\n", ft_recursive_power(-1,0));
	printf("0^0: %i\n", ft_recursive_power(0,0));
	printf("0^1: %i\n", ft_recursive_power(0,1));
	printf("1^0: %i\n", ft_recursive_power(1,0));
	printf("2^-2: %i\n", ft_recursive_power(2,-2));
	return (0);
}
*/
