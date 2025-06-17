/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pearaujo <pearaujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 19:07:50 by pearaujo          #+#    #+#             */
/*   Updated: 2025/06/13 17:40:31 by pearaujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	origem[] = "Ao infinito e alem!";
// 	char	destino[50];
// 	unsigned n = 20;

// 	printf("\nAntes: \nOrigem  '%s'\nDestino '%s'\n", origem, destino);
// 	ft_strncpy(destino, origem, n);
// 	printf("\nDepois: \nOrigem '%s'\nDestino '%s'\n", origem, destino);
// }
