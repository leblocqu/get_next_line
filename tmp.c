/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leblocqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 09:22:16 by leblocqu          #+#    #+#             */
/*   Updated: 2019/06/10 14:58:40 by leblocqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_error(int fd, char **str, char **line)
{
	if (fd == -1 || line == NULL || BUFF_SIZE <= 0)
		return (-1);
	if (!*str)
	{
		if (!(*str = (char*)malloc(sizeof(char) * (BUFF_SIZE + 1))))
			return (-1);
	}
	return (0);
}

char	*read_all(char *str, int fd)
{
	int		ret;
	char	buff[BUFF_SIZE + 1];

	while ((ret = read(fd, buff, BUFF_SIZE)) > 0)
	{
		str = ft_strjoin(str, buff);
		buff[ret] = '\0';
	}
	return (str);
}

int		get_next_line(const int fd, char **line)
{
	static char	*str;
	int			i;

	if (get_error(fd, &str, line) == -1)
		return (-1);
	str = read_all(str, fd);
	i = 0;
	if (str[i])
	{
		while (str[i] != '\n' && str[i])
			i++;
		if (i == 0)
		{
			(*line) = ft_strdup("");
			str = &str[i + 1];
		}
		else
		{
			(*line) = ft_strsub(str, 0, i);
			str = &str[i + 1];
		}
		return (1);
	}
	else
		(*line) = ft_strdup("");
	return (0);
}
