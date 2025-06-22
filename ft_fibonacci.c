/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecavalc <pecavalc@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 22:37:51 by pecavalc          #+#    #+#             */
/*   Updated: 2025/04/14 22:40:41 by pecavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
#include <stdio.h>
int main(void)
{
    printf("Index -243 returns -1? %d\n", ft_fibonacci(-243));
    printf("Index 0 returns 0? %d\n", ft_fibonacci(0));
    printf("Index 1 returns 1? %d\n", ft_fibonacci(1));
    printf("Index 2 returns 1? %d\n", ft_fibonacci(2));
    printf("Index 7 returns 13? %d\n", ft_fibonacci(7));
    printf("Index 32 returns 2.178.309? %d\n", ft_fibonacci(32));
    return (0);
}
*/
