/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pearaujo <pearaujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 18:31:56 by pearaujo          #+#    #+#             */
/*   Updated: 2025/06/17 10:30:30 by pearaujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>

// char	*ft_strstr(char *str, char *to_find);

// int	main(void)
// {
// 	char	texto[] = "Esse é um teste de exemplo.";
// 	char	busca[] = "um t";
// 	char	*resultado;

// 	resultado = ft_strstr(texto, busca);

// 	if (resultado)
// 		printf("Encontrado: %s\n", resultado);
// 	else
// 	printf("Substring não encontrada.\n");

// 	return 0;
// }
