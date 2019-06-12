#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

/*
 * ** Pour compiler :
 * **        -> gcc -g -Wall -Wextra -Werror -I./libft/includes/libft.h libft/libft.a -o gnl get_next_line.c main.c
 * ** Pour testesr un fichier :
 * **        -> ./gnl nom_du_fichier
 * ** Pour tester les multiples fd : 
 * **        -> ./gnl gnlh2g2_1.txt gnlh2g2_2.txt 1>/dev/null affiche gnlh2g2_2.txt
 * **        -> ./gnl gnlh2g2_1.txt gnlh2g2_2.txt 2>/dev/null affiche gnlh2g2_1.txt
 * */

int        main(int argc, char **argv)
{
	int        fd;
//	int        mfd;
	char    *line;
//	int        ret;
	int        i;
//	int		n = 0;

/*	if (argc == 2)
	{
		if (access(argv[1], F_OK) == 0)
		{
			i = 0;
			fd = open(argv[1], O_RDONLY);
			while ((ret = get_next_line(fd, &line)) == 1 && n++ < 10)
			{
				i++;
				ft_putstr("\033[31;01mfd : 1, line >\033[00m\t");
				ft_putendl(line);
			}
			close(fd);
		}
	}
	if (argc >= 3)
	{
		if (access(argv[1], F_OK) == 0)
		{
			i = 0;
			fd = open(argv[1], O_RDONLY);
			while ((ret = get_next_line(fd, &line)) == 1)
			{
				i++;
				ft_putstr_fd("\033[31;01mfd : 1, line >\033[00m\t", 1);
				ft_putendl_fd(line, 1);
			}
			close(fd);
			i = 0;
			mfd = open(argv[2], O_RDONLY);
			while ((ret = get_next_line(mfd, &line)) == 1)
			{
				i++;
				ft_putstr_fd("\033[32;01mfd : 2, line >\033[00m\t", 2);
				ft_putendl_fd(line, 2);
			}
			close(mfd);
		}
	}*/
	i = 1;
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		while (get_next_line(fd, &line) > 0)
		{
			ft_putendl(line);
			free(line);
		}
		i++;
		close(fd);
	}
	return (0);
}
