/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leblocqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 09:22:51 by leblocqu          #+#    #+#             */
/*   Updated: 2019/06/10 12:36:16 by leblocqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 4

# include <stdlib.h>
# include <stdio.h>
# include "libft/libft.h"
# include <unistd.h>
# include <fcntl.h>

int		get_next_line(const int fd, char **line);

#endif
