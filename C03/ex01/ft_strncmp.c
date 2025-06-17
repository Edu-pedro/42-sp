/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pearaujo <pearaujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 10:01:32 by pearaujo          #+#    #+#             */
/*   Updated: 2025/06/17 11:20:23 by pearaujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	p;

	p = 0;
	while (p < n && s1[p] && s2[p] && s1[p] == s2[p])
	{
		p++;
	}
	if (p == n)
	{
		return (0);
	}
	return ((unsigned int)s1[p] - (unsigned int)s2[p]);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char *a = "abcdef";
// 	char *b = "abcxyz";

// 	int	n1;
// 	int	n2;

// 	n1 = ft_strncmp(a, b, 3);
// 	n2 = ft_strncmp(a, b, 4);

//     printf("Comparando os 3 primeiros digitos %s - %s: %d\n", a, b, n1);
//     printf("Comparando os 4 primeiros digitos %s - %s: %d\n", a, b, n2);

// 	return 0;
// }
