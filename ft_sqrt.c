/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecavalc <pecavalc@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 22:42:13 by pecavalc          #+#    #+#             */
/*   Updated: 2025/04/14 23:25:09 by pecavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	x;

	if (nb <= 0)
		return (0);
	x = 1;
	while (x * x <= nb)
	{
		if (x * x == nb)
			return (x);
		x++;
	}
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
	printf("Is sqrt of -5 (negative number), 0? %i\n", ft_sqrt(-5));
	printf("Is sqrt of 0, 0? %i\n", ft_sqrt(0));
	printf("Is sqrt of 16, 4? %i\n", ft_sqrt(16));
	printf("Is sqrt of 324, 18? %i\n", ft_sqrt(324));
	printf("For 15 (sqrt irrational number), 0 returned? %i\n", ft_sqrt(15));
	return (0);
}
*/
