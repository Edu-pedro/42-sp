/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pearaujo <pearaujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 19:14:31 by pearaujo          #+#    #+#             */
/*   Updated: 2025/06/17 19:36:05 by pearaujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	c;
	int	s;
	int	res;

	c = 0;
	s = 1;
	res = 0;
	while ((str[c] >= '\t' && str[c] <= '\r') || str[c] == ' ')
		c++;
	while (str[c] == '+' || str[c] == '-')
	{
		if (str[c] == '-')
			s *= -1;
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		res = (str[c] - '0') + (res * 10);
		c++;
	}
	return (res * s);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	teste;
// 	int	teste1;

// 	teste = ft_atoi("  +4224");
// 	teste1 = ft_atoi("  --++-5555");
// 	printf("Valor dos testes: %d\n", teste);
// 	printf("Valor do teste1: %d\n", teste1);
// 	return (0);
// }
