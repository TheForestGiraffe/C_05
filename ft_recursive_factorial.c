/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecavalc <pecavalc@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 19:30:25 by pecavalc          #+#    #+#             */
/*   Updated: 2025/04/15 12:49:22 by pecavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	nb = nb * ft_recursive_factorial(nb - 1);
	return (nb);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("-2!: %i\n", ft_recursive_factorial(-2));
	printf("0!: %i\n", ft_recursive_factorial(0));
	printf("1!: %i\n", ft_recursive_factorial(1));
	printf("4!: %i\n", ft_recursive_factorial(4));
	printf("9!: %i\n", ft_recursive_factorial(9));
	return (0);
}
*/
