/**
 * create_array - function that creates an array of chars
 *
 * @size: size of the character
 *
 * @c: pointer to the character arry
 *
 * Return: 0 or NULL
 *
 */
char *create_array(unsigned int size, char c);


/**
 * _strdup - stringup
 *
 * @str: pointer to string
 *
 * Return: NULL or the pointer arry
 *
 */
char *_strdup(char *str);

/**
 * str_concat - concartinate two string
 *
 * @s1: string to concertinate too
 *
 * @s2: string to be concertinated
 *
 * Return: s1 + s2
 */
char *str_concat(char *s1, char *s2);

/**
 * alloc_grid - 2 dimentional array
 *
 * @width: the width of arry
 *
 * @height: height of array
 *
 * Return: pointer array
 */

int **alloc_grid(int width, int height)

/**
 * free_grid - free up a grid
 * @gird: grid to check
 * @height: height of grid
 *
 */

void free_grid(int **grid, int height)
