/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leblocqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 13:26:23 by leblocqu          #+#    #+#             */
/*   Updated: 2019/06/10 15:32:42 by leblocqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(const int fd, char **line)
{
	int				ret;
	char			buff[BUFF_SIZE + 1];
	static char		*str;
	int				i;
	char			*tmp;

	i = 0;
	ret = 0;
	tmp = NULL;
	buff[0] = '\0';
	if (line == NULL || fd < 0 || read(fd, 0, 0) < 0)
		return (-1);
	if (!(str))
		str = ft_strnew(0);
	while (!(ft_strchr(buff, '\n')) && (ret == read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[ret] = '\0';
		str = ft_strjoin_free(str, buff, 1);
	}
	if (ret == 0 && (str == NULL || str[0] == '\0'))
		return (0);
	while (str && str[i] && str[i] != '\n')
		i++;
	if (str && str[i] == '\n')
	{
		*line = ft_strsub(str, 0, i);
		tmp = str;
		str = ft_strdup(tmp + i + 1);
		ft_strdel(&tmp);
		if (str[0] == '\0')
			ft_strdel(&str);
	}
	else if (str && str[i] == '\0')
	{
		*line = ft_strdup(str);
		ft_strdel(&str);
	}
	return (1);
}
