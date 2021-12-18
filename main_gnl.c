/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_gnl.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpoder <rpoder@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 14:39:37 by rpoder            #+#    #+#             */
/*   Updated: 2021/12/18 15:00:50 by rpoder           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "get_next_line.h"

int	main(int argc, char **argv)
{
	int				fd;
	char			*ret;
	size_t			count_line;
	(void)			argc;

	fd = open(argv[1], O_RDONLY);
	//fd = 0;
	count_line = 1;
	while ((ret = get_next_line(fd)) > 0)
	{
		printf("%zu - %s", count_line, ret);
		free(ret);
		count_line++;
	}
	printf("----------------------------\n");
	printf("Nombre de lignes lues : %zu \n\n", count_line - 1);
	return (0);
}
