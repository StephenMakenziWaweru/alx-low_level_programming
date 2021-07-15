#include <stdio.h>
#include <stdlib.h>

int _isdigit(char *argv[])
{
    unsigned long int i = 1, j;
    
        for (;i <= 2; i++)
        {
                j = 0;
                while (argv[i][j] != '\0')
                {
                        if (argv[i][j] < '0' || argv[i][j] > '9')
                        {
                                printf("Error\n");
                                return (1);
                        }
                        j++;
                }
        }
        return (0);
}

/*create array */
char **alloc_grid(int width, int height)
{
	char **ptr, i, j;

	/* check if both are either 0 or -ve */
	if (width <= 0 || height <= 0)
		return (NULL);

	/* allocate memory for rows */
	ptr = (char **)malloc(sizeof(char *) * height);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		/* allocate memory for columns */
		ptr[i] = (char *)malloc(sizeof(char) * width);
		if (ptr[i] == NULL)
		{
			/* free already allocated memory if not allocatable */
			for (j = 0; j < i; j++)
				free(ptr[j]);
			free(ptr);
			return (NULL);
		}

		/* initialize with zero each element */
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}

int _strlen(char *str)
{
	unsigned int len = 0;

	if (!str)
		str = "";

	while (*str++)
		len++;
	return (len);
}

/* print grid */
void print_grid(char **grid, int width, int height)
{
    int w;
    int h;

    h = 0;
    while (h < height)
    {
        w = 0;
        while (w < width)
        {
            printf("%d ", grid[h][w]);
            w++;
        }
        printf("\n");
        h++;
    }   
}


int main(int argc, char *argv[]) 
{
        unsigned int i, width, height, len1, len2;
        char **buffer = NULL;
        
        if (argc != 3)
        {
                printf("Error\n");
                exit(98);
        }
        
        if (_isdigit(argv) == 1)
        {
            exit (98);
        }
        
        printf("Is digit\n");
        
        len1 = _strlen(argv[1]);
        len2 = _strlen(argv[2]);
        
        width = len1 + len2 + 2;
        height = len2 + 1;
        
        buffer = alloc_grid(width, height);
        printf("w: %d, h: %d\n", width, height);
        print_grid(buffer, width, height);
        
    return 0;
}
