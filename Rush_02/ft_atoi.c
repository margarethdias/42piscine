
#include <stdio.h>

int   ft_atoi(char *ugly, char *clean)
{
	int u;
    int c;
	int filtered_numbr;
    
	u = 0;
    c = 0;
	filtered_numbr = 0;
    while ((ugly[u] <= '0') || (ugly[u] >= '9'))
    {
        if ((ugly[u] >= 'a' && ugly[u] <= 'z') || (ugly[u] >= 'A' && ugly[u] <= 'Z'))
            return(-1);
        u++;
    }
	while (ugly[u] >= '0' && ugly[u] <= '9')
	{   
        if (c == 10)
            return (-1);
		clean[c] = ugly[u];
        filtered_numbr = (ugly[u] - '0') + (filtered_numbr * 10);
		u++;
        c++;

	}
    clean[c] = '\0';
    return (filtered_numbr);

}