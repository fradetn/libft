#include "libft.h"

char	*strchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			ptr = &s[i];
	}
	
	return (NULL);
}