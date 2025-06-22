/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecavalc <pecavalc@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 19:01:25 by pecavalc          #+#    #+#             */
/*   Updated: 2025/04/13 19:13:39 by pecavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	factorial = nb;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (nb > 1)
	{
		factorial = factorial * (nb - 1);
		nb--;
	}
	return (factorial);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("-2!: %i\n", ft_iterative_factorial(-2));
	printf("0!: %i\n", ft_iterative_factorial(0));
	printf("1!: %i\n", ft_iterative_factorial(1));
	printf("4!: %i\n", ft_iterative_factorial(4));
	printf("9!: %i\n", ft_iterative_factorial(9));
	return (0);
}
*/