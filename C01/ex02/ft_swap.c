/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pearaujo <pearaujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 14:33:19 by pearaujo          #+#    #+#             */
/*   Updated: 2025/06/07 15:54:19 by pearaujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	x;

	x = *a;
	*a = *b;
	*b = x;
}

// int	main(void)
// {
// 	int	c;
// 	int	d;

// 	c = 10;
// 	d = 20;
// 	printf("Valores de c e d antes da função %d %d\n", c, d);
// 	ft_swap(&c, &d);
// 	printf("Valores de c e d depois da função %d %d\n", c, d);
// }
