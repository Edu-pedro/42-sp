/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pearaujo <pearaujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 15:10:57 by pearaujo          #+#    #+#             */
/*   Updated: 2025/06/09 14:58:54 by pearaujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int	main(void)
// {
// 	int	c;
// 	int	d;
// 	int	*div;
// 	int	*mod;

// 	c = 55;
// 	d = 7;
// 	div = &c;
// 	mod = &d;
// 	printf("\nValores de c = %d e d = %d serão usados em div e mod!\n\n", c, d);
// 	ft_div_mod(c, d, div, mod);
// 	printf("\nResultados de div é %d e de mod é %d! \n\n", c, d);
// }
