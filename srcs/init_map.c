/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 00:47:39 by jdubilla          #+#    #+#             */
/*   Updated: 2022/02/27 04:45:04 by jdubilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"
#include <mlx.h>
#include <stdlib.h>

void	read_line(t_liste *liste_map, char *line, int index_line)
{
	int	i;

	i = 0;
	while (line[i])
	{
		insertion(liste_map, line[i], i, index_line);
		i++;
	}
}

void	init_map(t_liste *liste_map, t_data *format_map, t_img img, t_win win)
{
	t_element	*actuel;
	int			x;
	int			y;

	actuel = liste_map->premier;
	while (actuel != NULL)
	{
		x = actuel->x * SIZE;
		y = actuel->y * SIZE;
		if (actuel->lettre == '0')
			mlx_put_image_to_window(win.mlx, win.win, img.grass, x, y);
		else if (actuel->lettre == '1' && (actuel->x == 0 || actuel->y == 0
				|| actuel->x == format_map->lenline - 1
				|| actuel->y == format_map->nbrline - 1))
			mlx_put_image_to_window(win.mlx, win.win, img.wall, x, y);
		else if (actuel->lettre == '1')
			mlx_put_image_to_window(win.mlx, win.win, img.bush, x, y);
		else if (actuel->lettre == 'C')
			mlx_put_image_to_window(win.mlx, win.win, img.chess, x, y);
		else if (actuel->lettre == 'P')
			mlx_put_image_to_window(win.mlx, win.win, img.perso_s, x, y);
		else if (actuel->lettre == 'E')
			mlx_put_image_to_window(win.mlx, win.win, img.door, x, y);
		actuel = actuel->suivant;
	}
}
