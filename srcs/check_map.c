/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 02:09:18 by jdubilla          #+#    #+#             */
/*   Updated: 2022/02/28 13:59:14 by jdubilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"
#include "../libft/libft.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

static int	check_wall(char *line, int len, int nbrline, int *ptrerreur)
{
	int	i;

	i = 0;
	if (nbrline == 1)
	{
		while (i < len)
		{
			if (line[i] != '1')
				*ptrerreur = -2;
			i++;
		}
	}
	while (i < len)
	{
		if (line[i] != '1')
			break ;
		i++;
		if (i == len)
			return (1);
	}
	if (line[0] != '1' || line[len - 1] != '1')
		*ptrerreur = -2;
	return (0);
}

static int	check_len(t_data *format_map, char *line, int *ptrerreur)
{
	int	len;

	if (format_map->nbrline == 1)
		format_map->lenline = ft_strlen(line);
	len = ft_strlen(line);
	if (len != format_map->lenline)
		*ptrerreur = -1;
	return (len);
}

static void	check_items(t_data *format_map, char *line)
{
	int	i;

	i = 0;
	while (line[i])
	{
		if (line[i] == 'P')
			format_map->depart++;
		else if (line[i] == 'E')
			format_map->sortie++;
		else if (line[i] == 'C')
			format_map->items++;
		i++;
	}
}

static void	check_format_map(t_data *format_map, int fd)
{
	char	*line;
	int		len;
	int		wall;
	int		erreur;
	int		*ptrerreur;

	wall = 0;
	erreur = 0;
	ptrerreur = &erreur;
	while (1 < 2)
	{
		line = get_next_line(fd);
		if (line == NULL)
			break ;
		format_map->nbrline++;
		len = check_len(format_map, line, ptrerreur);
		wall = check_wall(line, len, format_map->nbrline, ptrerreur);
		check_items(format_map, line);
		free(line);
	}
	if (wall != 1)
		erreur = -2;
	check_error(format_map, erreur);
}

int	check_map(char *path_map, t_data *format_map)
{
	int		fd;

	fd = open(path_map, O_RDONLY);
	if (fd == -1)
		error(1);
	init_struct(format_map);
	check_name(path_map);
	check_format_map(format_map, fd);
	close(fd);
	return (0);
}
