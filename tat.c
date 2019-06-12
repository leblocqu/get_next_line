/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tat.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leblocqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 14:36:11 by leblocqu          #+#    #+#             */
/*   Updated: 2019/06/10 14:58:35 by leblocqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static char *str;
char buff[BUFFSIZE +1]
-> checkerror fd ? read ? line ?
-> lire (BUFFSIZE) jusqu'a un '\n'
	->while ret = read(fd, buff, buff_size) + ft_strchr(buff, '\n') \n ?
		buff[ret] = '\0'
		ft_strjoin(str, buff)
-> retour 1 :
	ret != 0 || !str
-> sinon retour 0

la maison
le baton

