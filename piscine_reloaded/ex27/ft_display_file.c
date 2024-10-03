/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:31:04 by taomalbe          #+#    #+#             */
/*   Updated: 2024/10/03 11:31:04 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display.h"

void	ft_display_file(char *name)
{
	int		fd;
	int		sz;
	char	buffer[8192];

	fd = open(name, O_RDONLY);
	if (fd == -1)
		return ;
	sz = read(fd, buffer, sizeof(buffer));
	if (sz == -1)
		return ;
	buffer[sz] = '\0';
	ft_putstr(buffer);
	close(fd);
}

int	main(int ac, char *av[])
{
	if (ac == 1)
		return (ft_errors(0));
	else if (ac == 2)
		ft_display_file(av[1]);
	else if (ac > 2)
		return (ft_errors(1));
}
