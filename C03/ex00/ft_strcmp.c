/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pearaujo <pearaujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 10:01:25 by pearaujo          #+#    #+#             */
/*   Updated: 2025/06/17 10:01:49 by pearaujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0') && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*a = "Pedro";
// 	char	*b = "pedro";
// 	char	*c = "Pedro";

// 	printf("nomes para comparar \"%s\", \"%s\", \"%s\":\n", a, b, c);

// 	int n1;
// 	int n2;

// 	n1 = ft_strcmp(a, b);
// 	n2 = ft_strcmp(a, c);
// 	printf("(\"%s\", \"%s\") = %d\n", a, b, n1);
// 	printf("(\"%s\", \"%s\") = %d\n", a, c, n2);
// }
