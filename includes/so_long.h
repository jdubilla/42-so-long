/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 01:55:46 by jdubilla          #+#    #+#             */
/*   Updated: 2022/02/28 06:51:36 by jdubilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# define BUFFER_SIZE 1024
# define SIZE 32

typedef struct s_data {
	int	lenline;
	int	nbrline;
	int	depart;
	int	sortie;
	int	items;
}				t_data;

typedef struct s_data_img {
	int		width;
	int		height;
	void	*bush;
	void	*chess;
	void	*grass;
	void	*perso_w;
	void	*perso_a;
	void	*perso_s;
	void	*perso_d;
	void	*wall;
	void	*door;

}				t_img;

typedef struct s_data_win
{
	void	*mlx;
	void	*win;
}				t_win;

typedef struct s_element	t_element;
struct	s_element
{
	char		lettre;
	int			x;
	int			y;
	t_element	*suivant;
};

typedef struct s_liste		t_liste;
struct	s_liste
{
	t_element	*premier;
};

typedef struct s_data_player {
	void		*mlx;
	void		*win;
	int			x;
	int			y;
	int			moove;
	int			items;
	t_img		*imgs;
	t_liste		*liste;
}				t_player;

int		ft_strlen_bis(char *s);
int		next_pos(t_player *player, int x, int y);
int		moove_player(int keycode, t_player *player);
int		check_map(char *path_map, t_data *format_map);
char	*get_next_line(int fd);
char	*ft_get_line(char *left_str);
char	*ft_strchr_gnl(char *s, int c);
char	*ft_new_left_str(char *left_str);
char	*ft_read_to_left_str(int fd, char *left_str);
char	*ft_strjoin_gnl(char *left_str, char *buff);
void	error(int i);
void	check_name(char *map);
void	free_liste(t_liste *liste);
void	exit_safe(t_player *player, int i);
void	afficher_liste(t_liste *liste);
void	init_struct(t_data *format_map);
void	check_error(t_data *format_map, int erreur);
void	init_struct_img(t_img *data_img, void *mlx);
void	insertion(t_liste *liste, char c, int x, int y);
void	init_win(t_liste *liste_map, t_data *format_map);
void	init_win(t_liste *liste_map, t_data *format_map);
void	read_line(t_liste *liste_map, char *line, int index_line);
void	init_player(t_player *player, t_liste *liste, t_win win, t_img *img);
void	init_liste_map(char *path_map, t_data *format_map, t_liste *liste_map);
void	init_map(t_liste *liste_map, t_data *format_map, t_img img, t_win win);
t_liste	*init(void);

#endif
