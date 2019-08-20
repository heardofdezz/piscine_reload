/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maloua-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 13:12:29 by maloua-h          #+#    #+#             */
/*   Updated: 2018/12/12 18:53:06 by maloua-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#define BUF_SIZE 5000

void	c(char c)
{
	write(1, &c, 1);
}

void	write_(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		c(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	char	*filename;
	char	buf[BUF_SIZE];
	int		ret;
	int		fd;

	filename = argv[1];
	fd = open(filename, O_RDONLY);
	if (argc > 2)
	{
		write_("Too many arguments.\n");
		return (0);
	}
	if (argc < 2)
	{
		write_("File name missing.\n");
		return (0);
	}
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		write_(buf);
	}
	close(fd);
	return (0);
}
