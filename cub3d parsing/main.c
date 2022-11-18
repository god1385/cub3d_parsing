#include "include/cub3d.h"

t_vector validation(char **argv, t_vector vector)
{
	char **map;

	map = map_reader(argv[1]);
	if (!map)
		{
			ft_free_chartable(map);
			errormap(vector, map);
		}
	vector = valid_objects(map, vector);
	vector = valid_colors(map, vector);
	vector = map_finder(map, vector);
	ft_free_chartable(map);
	return (vector);
}
int main(int argc, char **argv)
{
	t_vector vector;

	vector.pos = 0;
	vector = ft_init(vector);
	if (argc != 2)
		return (0);
	if (ft_compare(argv[1], ".cub") != 1)
		exit(1);
	vector = validation(argv, vector);
	printf(" colors %d, %d, %d\n", vector.floor[0], vector.floor[1], vector.floor[2]);
	printf(" colors %d, %d, %d\n", vector.celling[0], vector.celling[1], vector.celling[2]);
	printf("%s\n", vector.north);
	printf("%s\n", vector.south);
	printf("%s\n", vector.west);
	printf("%s\n", vector.east);
	printf("%c\n",vector.side);
	printf("%f\n",vector.y);
	printf("%f\n",vector.x);
	ft_free(vector);
	return (0);
}
