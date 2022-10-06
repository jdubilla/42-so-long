/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 23:43:26 by jdubilla          #+#    #+#             */
/*   Updated: 2022/02/28 13:59:18 by jdubilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"
#include <stdlib.h>
#include <mlx.h>
#include <fcntl.h>
#include <unistd.h>

void	init_liste_map(char *path_map, t_data *format_map, t_liste *liste_map)
{
	int		fd;
	char	*line;
	int		index_line;

	liste_map = init();
	fd = open(path_map, O_RDONLY);
	if (fd == -1)
		error(1);
	index_line = 0;
	while (1 < 2)
	{
		line = get_next_line(fd);
		if (line == NULL)
			break ;
		read_line(liste_map, line, index_line);
		free(line);
		index_line++;
	}
	close(fd);
	init_win(liste_map, format_map);
}

t_liste	*init(void)
{
	t_liste		*liste ;
	t_element	*element;

	liste = malloc(sizeof(*liste));
	element = malloc(sizeof(*element));
	if (liste == NULL || element == NULL)
		exit(EXIT_FAILURE);
	element->lettre = '\0';
	element->x = 0;
	element->y = 0;
	element->suivant = NULL;
	liste->premier = element;
	return (liste);
}

void	insertion(t_liste *liste, char c, int x, int y)
{
	t_element	*nv_elem;

	nv_elem = malloc(sizeof(*nv_elem));
	if (liste == NULL || nv_elem == NULL)
		exit(EXIT_FAILURE);
	nv_elem->lettre = c;
	nv_elem->x = x;
	nv_elem->y = y;
	nv_elem->suivant = liste->premier;
	liste->premier = nv_elem;
}

void	free_liste(t_liste *liste)
{
	t_element	*asuppr;

	if (liste == NULL)
		exit(EXIT_FAILURE);
	asuppr = liste->premier;
	while (liste->premier != NULL)
	{
		asuppr = liste->premier;
		liste->premier = liste->premier->suivant;
		free (asuppr);
	}
	free(liste);
}
