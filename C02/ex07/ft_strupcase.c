/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pearaujo <pearaujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 16:46:37 by pearaujo          #+#    #+#             */
/*   Updated: 2025/06/13 17:56:35 by pearaujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	p;

	p = 0;
	while (str[p] != '\0')
	{
		if (str[p] >= 'a' && str[p] <= 'z')
			str[p] -= 32;
		p++;
	}
	return (str);
}

// #include <stdio.h>

// int	main()
// {
// 	char str1[] = "aaaabbbbCCCC";
// 	char str2[] = "12354aaaa";
// 	char str3[] = "123Abc";

// 	printf("%s\n", ft_strupcase(str1));
// 	printf("%s\n", ft_strupcase(str2));
// 	printf("%s\n", ft_strupcase(str3));

// 	return (0);
// }
