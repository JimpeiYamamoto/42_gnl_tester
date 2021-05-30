/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yjimpei <yjimpei@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 15:54:47 by yjimpei           #+#    #+#             */
/*   Updated: 2021/05/30 20:16:16 by yjimpei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../get_next_line.h"
#include "../get_next_line_bonus.h"
#include "stdio.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int	main(int argc, char **argv)
{
	int	fd;
	int	r;
	char	*get_line;
	int		i;

	(void)argc;
	fd = open(argv[1], O_RDONLY);
	r = 1;
	i = 0;
	while (r == 1)
	{
		//printf("----get_next_line----\n");
		r = get_next_line(fd, &get_line);
		printf("-----return=%d-----\n", r);
		if (r == -1)
			break;
		printf("%s", get_line);
		free(get_line);
		i++;
	}
	close(fd);
	printf("\n--------------------------\n");
	system("leaks gnl");
	return (0);
}
