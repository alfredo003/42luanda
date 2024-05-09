/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achivela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 17:22:45 by achivela          #+#    #+#             */
/*   Updated: 2024/05/09 17:22:50 by achivela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int	main(int argc, char *argv[])
{
	int	fd;
	char	buffer[1024];
	int	bytes_read;

	if (argc != 2)
	{
		if (argc < 2)
			write(2, "File name missing.\n", 19);
		else
			write(2, "Too many arguments.\n", 20);
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		write(2, "Cannot read file.\n", 17);
		return (1);
	}
	bytes_read = read(fd, buffer, 1024);
	while ((bytes_read) > 0)
	{
		write(1, buffer, bytes_read);
	}
	close(fd);
	return (0);
}
