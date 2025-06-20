/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbercaco <gbercaco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 15:43:08 by gbercaco          #+#    #+#             */
/*   Updated: 2025/06/15 18:13:08 by carzampi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	is_numeric(char *str)
{
	int	i;

	i = 0;
	if (!str[i])
		return (0);
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

void	ft_msg_error(void)
{
	write(1, "Error\n", 6);
}

void	ft_msg_dict_error(void)
{
	write(1, "Dict Error\n", 11);
}

char	*ft_dict_file(int argc, char *argv[])
{
	char	*filename;

	if (argc == 2)
		filename = "numbers.dict";
	else
		filename = argv[1];
	return (filename);
}

int	ft_check_dict(char *filename)
{
	int	is_open;

	is_open = open(filename, O_RDONLY);
	if (is_open < 0)
		return (0);
	close(is_open);
	return (1);
}
