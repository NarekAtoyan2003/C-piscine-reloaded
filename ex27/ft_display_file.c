/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naatoyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:10:33 by naatoyan          #+#    #+#             */
/*   Updated: 2024/01/11 16:56:21 by naatoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	display_file(int fd)
{
	size_t	read_bytes;
	char	buffer[1025];

	read_bytes = read(fd, buffer, 1024);
	while (read_bytes > 0)
	{
		write(1, buffer, read_bytes);
		read_bytes = read(fd, buffer, 1024);
	}
}

int	main(int argc, char **argv)
{
	int	fd;

	if (argc != 2)
	{
		if (argc == 1)
			write(2, "File name missing.\n", 19);
		else
			write(2, "Too many arguments.\n", 20);
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		write(2, "Cannot read file.\n", 18);
		return (0);
	}
	display_file(fd);
	close(fd);
	return (0);
}
