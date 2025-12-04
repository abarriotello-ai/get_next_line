/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrio <abarrio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 20:03:41 by abarrio           #+#    #+#             */
/*   Updated: 2025/12/04 20:19:46 by abarrio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// int	main(int ac, char **av)
// {
// 	char	*line;
// 	int		fd1;
// 	int		fd2;

// 	fd1 = open(av[1], O_RDONLY);
// 	fd2 = open(av[2], O_RDONLY);
// 	get_next_line(fd1, &line);
// 	printf("%s\n", line);
// 	get_next_line(fd1, &line);
// 	printf("%s\n", line);
// 	get_next_line(fd2, &line);
// 	printf("%s\n", line);
// 	get_next_line(fd2, &line);
// 	printf("%s\n", line);
// 	get_next_line(fd1, &line);
// 	printf("%s\n", line);
// 	get_next_line(fd2, &line);
// 	printf("%s\n", line);
// 	get_next_line(fd1, &line);
// 	printf("%s\n", line);
// 	get_next_line(fd2, &line);
// 	printf("%s\n", line);
// 	return (0);
// }

int	main(void)
{
    int     fd;
    char    *line;

    fd = open("archivo.txt", O_RDONLY);
    if (fd < 0)
        return (1);

    line = get_next_line(fd);
    while (line)
    {
        printf("%s", line);
        free(line);
        line = get_next_line(fd);
    }
    close(fd);
    return (0);
}