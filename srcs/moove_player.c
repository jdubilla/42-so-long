/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moove_player.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 04:51:42 by jdubilla          #+#    #+#             */
/*   Updated: 2022/02/27 07:28:01 by jdubilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"
#include "../printf/ft_printf.h"
#include <mlx.h>

static void	player_go_front(t_player *player)
{
	if (next_pos(player, player->x, player->y - 1) == 0)
	{
		mlx_put_image_to_window(player->mlx, player->win, player->imgs->grass,
			(player->x * SIZE), (player->y * SIZE));
		mlx_put_image_to_window(player->mlx, player->win, player->imgs->perso_w,
			(player->x * SIZE), ((player->y - 1) * SIZE));
		player->y--;
		player->moove++;
		ft_printf("Mouvements : %d\n", player->moove);
	}
	else
		mlx_put_image_to_window(player->mlx, player->win, player->imgs->perso_w,
			player->x * SIZE, player->y * SIZE);
}

static void	player_go_back(t_player *player)
{
	if (next_pos(player, player->x, player->y + 1) == 0)
	{
		mlx_put_image_to_window(player->mlx, player->win, player->imgs->grass,
			(player->x * SIZE), (player->y * SIZE));
		mlx_put_image_to_window(player->mlx, player->win, player->imgs->perso_s,
			(player->x * SIZE), ((player->y + 1) * SIZE));
		player->y++;
		player->moove++;
		ft_printf("Mouvements : %d\n", player->moove);
	}
	else
		mlx_put_image_to_window(player->mlx, player->win, player->imgs->perso_s,
			player->x * SIZE, player->y * SIZE);
}

static void	player_go_left(t_player *player)
{
	if (next_pos(player, player->x - 1, player->y) == 0)
	{
		mlx_put_image_to_window(player->mlx, player->win, player->imgs->grass,
			(player->x * SIZE), (player->y * SIZE));
		mlx_put_image_to_window(player->mlx, player->win, player->imgs->perso_a,
			(player->x - 1) * SIZE, ((player->y) * SIZE));
		player->x--;
		player->moove++;
		ft_printf("Mouvements : %d\n", player->moove);
	}
	else
		mlx_put_image_to_window(player->mlx, player->win, player->imgs->perso_a,
			player->x * SIZE, player->y * SIZE);
}

static void	player_go_right(t_player *player)
{
	if (next_pos(player, player->x + 1, player->y) == 0)
	{
		mlx_put_image_to_window(player->mlx, player->win, player->imgs->grass,
			(player->x * SIZE), (player->y * SIZE));
		mlx_put_image_to_window(player->mlx, player->win, player->imgs->perso_d,
			(player->x + 1) * SIZE, (player->y) * SIZE);
		player->x++;
		player->moove++;
		ft_printf("Mouvements : %d\n", player->moove);
	}
	else
		mlx_put_image_to_window(player->mlx, player->win, player->imgs->perso_d,
			player->x * SIZE, player->y * SIZE);
}

int	moove_player(int keycode, t_player *player)
{
	if (keycode == 119)
		player_go_front(player);
	else if (keycode == 97)
		player_go_left(player);
	else if (keycode == 115)
		player_go_back(player);
	else if (keycode == 100)
		player_go_right(player);
	else if (keycode == 65307)
		exit_safe(player, 0);
	return (0);
}
