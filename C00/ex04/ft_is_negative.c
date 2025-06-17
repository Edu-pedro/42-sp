/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pearaujo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 19:14:01 by pearaujo          #+#    #+#             */
/*   Updated: 2025/05/31 11:09:17 by pearaujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n)
{
	int	neg;
	int	pos;

	neg = 78;
	pos = 80;
	if (n < 0)
	{
		write(1, &neg, 1);
	}
	else
	{
		write(1, &pos, 1);
	}
}

/*int	main(void)
{
	ft_is_negative(-5);
	ft_is_negative(0);
	ft_is_negative(5);
	return (0);
}*/
