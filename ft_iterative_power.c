/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecavalc <pecavalc@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 19:43:02 by pecavalc          #+#    #+#             */
/*   Updated: 2025/04/14 12:29:34 by pecavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = 1;
	result = nb;
	while (i < power)
	{
		result *= nb;
		i++;
	}
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%i\n", ft_iterative_power(2,3));
	printf("%i\n", ft_iterative_power(-1,4));
	printf("%i\n", ft_iterative_power(-1,0));
	printf("%i\n", ft_iterative_power(0,0));
	printf("%i\n", ft_iterative_power(0,1));
	printf("%i\n", ft_iterative_power(1,0));
	printf("%i\n", ft_iterative_power(2,2));
	return (0);
}
*/
