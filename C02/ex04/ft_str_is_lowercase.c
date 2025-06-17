/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pearaujo <pearaujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 15:46:35 by pearaujo          #+#    #+#             */
/*   Updated: 2025/06/13 16:25:56 by pearaujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (*str < 'a' || *str > 'z')
			return (0);
		str++;
	}
	return (1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_str_is_lowercase("abcde"));
// 	printf("%d\n", ft_str_is_lowercase(""));
// 	printf("%d\n", ft_str_is_lowercase("123abc"));
// 	return (0);
// }
