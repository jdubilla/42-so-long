/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   next_pos.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 04:59:04 by jdubilla          #+#    #+#             */
/*   Updated: 2022/02/27 07:19:58 by jdubilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"
#include <stdlib.h>

int	next_pos(t_player *player, int x, int y)
{
	t_element	*actuel;

	actuel = player->liste->premier;
	while (actuel->suivant != NULL)
	{
		if (x == actuel->x && y == actuel->y)
		{
			if (actuel->lettre == 'C')
			{
				actuel->lettre = '0';
				player->items--;
				return (0);
			}
			else if (actuel->lettre == '1')
				return (1);
			else if (actuel->lettre == 'E' && player->items > 0)
				return (1);
			else if (actuel->lettre == 'E' && player->items == 0)
				exit_safe(player, 1);
			else
				return (0);
		}
		actuel = actuel->suivant;
	}
	return (0);
}
