/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astrelov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/26 11:56:25 by astrelov          #+#    #+#             */
/*   Updated: 2017/10/26 17:24:19 by astrelov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	ft_print_file(int fd)
{
	char	temp;

	while (read(fd, &temp, 1) != '\0')
		write(1, &temp, 1);
}

int		main(int argc, char **argv)
{
	int		fd;

	if (argc < 2)
		write(2, "File name missing.\n", 19);
	if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		ft_print_file(fd);
	}
	return (0);
}
