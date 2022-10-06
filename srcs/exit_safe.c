/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_safe.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 03:29:05 by jdubilla          #+#    #+#             */
/*   Updated: 2022/02/27 07:25:25 by jdubilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"
#include "../printf/ft_printf.h"
#include <stdlib.h>
#include <mlx.h>

static void	free_imgs(t_img *imgs, void *mlx)
{
	mlx_destroy_image(mlx, imgs->bush);
	mlx_destroy_image(mlx, imgs->chess);
	mlx_destroy_image(mlx, imgs->grass);
	mlx_destroy_image(mlx, imgs->door);
	mlx_destroy_image(mlx, imgs->perso_a);
	mlx_destroy_image(mlx, imgs->perso_s);
	mlx_destroy_image(mlx, imgs->perso_w);
	mlx_destroy_image(mlx, imgs->perso_d);
	mlx_destroy_image(mlx, imgs->wall);
}

void	exit_safe(t_player *player, int i)
{
	if (i == 1)
	{
		player->moove++;
		ft_printf("Mouvements : %d\n", player->moove);
	}
	free_imgs(player->imgs, player->mlx);
	mlx_destroy_window(player->mlx, player->win);
	free_liste(player->liste);
	mlx_destroy_display(player->mlx);
	free(player->mlx);
	exit (EXIT_SUCCESS);
}
