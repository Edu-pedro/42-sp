/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pearaujo <pearaujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 16:16:19 by pearaujo          #+#    #+#             */
/*   Updated: 2025/06/09 15:05:58 by pearaujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

// int	main(void)
// {
// 	int	div;
// 	int	mod;

// 	div = 80;
// 	mod = 6;
// 	ft_ultimate_div_mod (&div, &mod);
// 	printf ("Valores de div é %d e de mod é %d \n", div, mod);
// }
