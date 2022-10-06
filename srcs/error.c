/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 02:16:43 by jdubilla          #+#    #+#             */
/*   Updated: 2022/02/28 07:01:26 by jdubilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes/so_long.h"

void	error(int i)
{
	if (i == 1)
		ft_putstr_fd("Error: Impossible d'ouvrir le fichier\n", 2);
	else if (i == 2)
		ft_putstr_fd("Error: Nombre de lignes de la map < ou = a 2\n", 2);
	else if (i == 3)
		ft_putstr_fd("Error: La map doit etre de forme rectangulaire\n", 2);
	else if (i == 4)
		ft_putstr_fd("Error: Nom de map incorrect ou finit pas par '.ber'\n", 2);
	else if (i == 5)
		ft_putstr_fd("Error: Carte non fermée ou encadrée par des murs\n", 2);
	else if (i == 6)
		ft_putstr_fd("Error: La carte doit contenir min 1 E, 1 C et 1 P\n", 2);
	else if (i == 7)
		ft_putstr_fd("Error: Position de depart > 1\n", 2);
	exit (EXIT_FAILURE);
}

void	check_error(t_data *format_map, int erreur)
{
	if (format_map->nbrline <= 2)
		error(2);
	if (erreur == -2)
		error(5);
	if (format_map->lenline <= format_map->nbrline || erreur == -1)
		error(3);
	if (format_map->depart < 1 || format_map->sortie < 1
		|| format_map->items < 1)
		error (6);
	if (format_map->depart > 1)
		error (7);
}

void	check_name(char *map)
{
	int	len;

	len = ft_strlen(map);
	if (len <= 4)
		error(4);
	if (map[len - 4] == '.' && map[len - 3] == 'b' && map[len - 2] == 'e'
		&& map[len - 1] == 'r')
		return ;
	error(4);
}
