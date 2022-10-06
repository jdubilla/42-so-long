/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_win.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 04:57:01 by jdubilla          #+#    #+#             */
/*   Updated: 2022/03/01 12:42:48 by jdubilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"
#include <mlx.h>

void	init_win(t_liste *liste_map, t_data *format_map)
{
	t_win			win;
	t_img			img;
	t_player		player;
	int				i;

	i = 0;
	win.mlx = mlx_init();
	win.win = mlx_new_window(win.mlx, (format_map->lenline * SIZE + 1),
			(format_map->nbrline * SIZE + 1), " so_long");
	if (i == 0)
	{
		player.items = 0;
		player.moove = 0;
		init_struct_img(&img, win.mlx);
		init_player(&player, liste_map, win, &img);
		init_map(liste_map, format_map, img, win);
		i = 1;
	}
	mlx_hook(win.win, 2, 1L << 0, moove_player, &player);
	mlx_hook(win.win, 17, 1L << 8, mlx_loop_end, player.mlx);
	mlx_loop(win.mlx);
	exit_safe(&player, 0);
}
