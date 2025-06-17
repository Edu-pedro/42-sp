/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pearaujo <pearaujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 18:15:12 by pearaujo          #+#    #+#             */
/*   Updated: 2025/06/10 15:57:06 by pearaujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	tpr;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			tpr = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tpr;
			i = 0;
		}
		else
		{
			i++;
		}
	}
}

// int	main(void)
// {
// 	int	tab[] = {5, 3, 8, 1, 2, 8, 9};
// 	int	i;

// 	i = 0;
// 	printf("Numeros em ordem original:");
// 	while (i < 7)
// 	{
// 		printf("%d ", tab[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	i = 0;
// 	ft_sort_int_tab(tab, 5);
// 	printf("numeros apos a função ser chamada:");
// 	while (i < 7)
// 	{
// 		printf("%d ", tab[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	return (0);
// }
