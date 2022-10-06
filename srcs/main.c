/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 01:38:50 by jdubilla          #+#    #+#             */
/*   Updated: 2022/02/27 05:40:50 by jdubilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"
#include "../libft/libft.h"

int	main(int argc, char **argv)
{
	t_data	format_map;
	t_liste	liste_map;

	if (argc == 2)
	{
		check_map(argv[1], &format_map);
		init_liste_map(argv[1], &format_map, &liste_map);
	}
	else
		ft_putstr_fd("Error: Nombre incorrect d'arguments\n", 2);
}
