/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pearaujo <pearaujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 18:01:42 by pearaujo          #+#    #+#             */
/*   Updated: 2025/06/13 17:36:58 by pearaujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

//#include <stdio.h>
//#include <unistd.h>

// int	main(void)
// {
// 	char	origem[] = "Ao infinito e alem!";
// 	char	destino[40];

// 	printf("\nOrigem '%s'\nDestino '%s'\n", origem, destino);
// 	ft_strcpy(destino, origem);
// 	printf("\nOrigem '%s'\nDestino '%s'\n", origem, destino);
// }
