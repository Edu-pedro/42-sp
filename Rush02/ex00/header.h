/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbercaco <gbercaco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 15:55:00 by gbercaco          #+#    #+#             */
/*   Updated: 2025/06/14 15:47:11 by gbercaco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

int		is_numeric(char *str);
void	ft_msg_error(void);
void	ft_msg_dict_error(void);
char	*ft_dict_file(int argc, char **argv);
int		ft_check_dict(char *filename);

#endif
