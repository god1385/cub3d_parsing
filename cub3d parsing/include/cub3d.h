#ifndef CUB3D_H
# define CUB3D_H
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <errno.h>
# include "ft_printf.h"
# include "../gnl/get_next_line.h"

typedef struct s_vector
{
	float x;
	float y;
	int pos;
	char **newmap;
	char	side;
	char *north;
	char *south;
	char *east;
	char *west;
	int *floor;
	int *celling;
}				t_vector;

typedef struct s_map
{
	t_vector	size;
	t_vector	position;
	int			north;
	int			south;
	int			west;
	int			east;
}				t_map;
int ft_compare(char *str, char *str2);
char	**map_reader(char *file);
t_vector valid_colors(char **map, t_vector vector);
t_vector valid_objects(char **map, t_vector vector);
t_vector map_finder(char **map, t_vector vector);
void error(t_vector vector);
int valid(int bool, t_vector vector);
void	ft_free_chartable(char **map);
void errormap(t_vector vector, char **map);
void ft_free(t_vector vector);
t_vector ft_init(t_vector vector);
int *fillobj(int h, char *tmp, t_vector vector, char **map, int *object);
void	freetmp(int h, char *tmp, t_vector vector, char ** map);
void	freetmp(int h, char *tmp, t_vector vector, char ** map);
void booling(int bool, int i, int j, char *str, t_vector vector);
void checks(int j, int i, t_vector vector);
void checkssss(t_vector vector, int i, int j);
t_vector newmapp(char **map, int i, int tmp, int tmp2, t_vector vector);
t_vector *finder(int tmp, t_vector *vector, char *str);

#endif
