/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_struct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 02:13:35 by jdubilla          #+#    #+#             */
/*   Updated: 2022/02/27 04:48:24 by jdubilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"
#include <mlx.h>
#include <stdlib.h>

void	init_struct(t_data *format_map)
{
	format_map->lenline = 0;
	format_map->nbrline = 0;
	format_map->depart = 0;
	format_map->sortie = 0;
	format_map->items = 0;
}

void	init_struct_img(t_img *data_img, void *mlx)
{
	data_img->bush = mlx_xpm_file_to_image(mlx, "./images/Bush.xpm",
			&data_img->width, &data_img->height);
	data_img->chess = mlx_xpm_file_to_image(mlx, "./images/Chess.xpm",
			&data_img->width, &data_img->height);
	data_img->grass = mlx_xpm_file_to_image(mlx, "./images/Grass.xpm",
			&data_img->width, &data_img->height);
	data_img->perso_a = mlx_xpm_file_to_image(mlx, "./images/Perso_a.xpm",
			&data_img->width, &data_img->height);
	data_img->perso_d = mlx_xpm_file_to_image(mlx, "./images/Perso_d.xpm",
			&data_img->width, &data_img->height);
	data_img->perso_s = mlx_xpm_file_to_image(mlx, "./images/Perso_s.xpm",
			&data_img->width, &data_img->height);
	data_img->perso_w = mlx_xpm_file_to_image(mlx, "./images/Perso_w.xpm",
			&data_img->width, &data_img->height);
	data_img->wall = mlx_xpm_file_to_image(mlx, "./images/Wall.xpm",
			&data_img->width, &data_img->height);
	data_img->door = mlx_xpm_file_to_image(mlx, "./images/Door.xpm",
			&data_img->width, &data_img->height);
}

void	init_player(t_player *player, t_liste *liste, t_win win, t_img *img)
{
	t_element	*actuel;

	actuel = liste->premier;
	while (actuel->suivant != NULL)
	{
		if (actuel->lettre == 'C')
			player->items++;
		else if (actuel->lettre == 'P')
		{
			player->x = actuel->x;
			player->y = actuel->y;
		}
		actuel = actuel->suivant;
	}
	player->imgs = img;
	player->win = win.win;
	player->mlx = win.mlx;
	player->liste = liste;
}
