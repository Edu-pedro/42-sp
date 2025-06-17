/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pearaujo <pearaujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 16:28:08 by pearaujo          #+#    #+#             */
/*   Updated: 2025/06/10 15:54:57 by pearaujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	f;
	int	tpr;

	i = 0;
	f = size -1;
	while (i < f)
	{
		tpr = tab[i];
		tab[i] = tab[f];
		tab[f] = tpr;
		i++;
		f--;
	}
}

// int	main(void)
// {
// 	int	teste[4] = {1, 2, 3, 4};
// 	int	i;

// 	i = 0;
// 	ft_rev_int_tab(teste, 4);
// 	while (i < 4)
// 	{
// 		printf("%d", teste[i]);
// 		i++;
// 	}
// }
