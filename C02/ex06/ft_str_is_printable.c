/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pearaujo <pearaujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 16:32:26 by pearaujo          #+#    #+#             */
/*   Updated: 2025/06/13 16:45:22 by pearaujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str < 32 || *str > 126)
			return (0);
		str++;
	}
	return (1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_str_is_printable("ABC"));
// 	printf("%d\n", ft_str_is_printable("\n"));
// 	printf("%d\n", ft_str_is_printable("123 Abc"));
// 	return (0);
// }
