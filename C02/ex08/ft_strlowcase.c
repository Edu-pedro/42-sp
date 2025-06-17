/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pearaujo <pearaujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 17:43:31 by pearaujo          #+#    #+#             */
/*   Updated: 2025/06/13 17:55:35 by pearaujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	p;

	p = 0;
	while (str[p] != '\0')
	{
		if (str[p] >= 'A' && str[p] <= 'Z')
			str[p] += 32;
		p++;
	}
	return (str);
}

// #include <stdio.h>

// int	main()
// {
// 	char str1[] = "AAAAbbbbCCCC";
// 	char str2[] = "1235AAAAaa";
// 	char str3[] = "123Abc";

// 	printf("%s\n", ft_strlowcase(str1));
// 	printf("%s\n", ft_strlowcase(str2));
// 	printf("%s\n", ft_strlowcase(str3));

// 	return (0);
// }
