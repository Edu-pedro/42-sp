/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pearaujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 13:32:46 by pearaujo          #+#    #+#             */
/*   Updated: 2025/06/02 14:59:06 by pearaujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c, char d, char t)
{
	write (1, &c, 1);
	write (1, &d, 1);
	write (1, &t, 1);
}

void	ft_print_comb(void)
{
	char	um;
	char	dois;
	char	tres;

	um = '0';
	while (um <= '7')
	{
		dois = um + 1;
		while (dois <= '8')
		{
			tres = dois + 1;
			while (tres <= '9')
			{
				ft_putchar(um, dois, tres);
				if (!(um == '7' && dois == '8' && tres == '9'))
				{
					write(1, ", ", 2);
				}
				tres++;
			}
			dois++;
		}
		um++;
	}
}

// int	main(void)
// {
// 	ft_print_comb();
// }
