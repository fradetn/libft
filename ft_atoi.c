#include "libft.h"

int	ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v')
		return (1);
	else if (c == ' ' || c == '\f' || c == '\r')
		return (1);
	return (0);
}

static char	*ft_str_nospace(char *str)
{
	while (ft_isspace(*str) == 1)
	{
		str++;
	}
	return (str);
}

int	ft_atoi(const char *str)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	str = ft_str_nospace((char *)str);
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (ft_isdigit(*str) != 0)
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	return (res * sign);
}

/*
#include <stdio.h>
#include <stdlib.h>
int main (int arc, char **argv)
{
	const char str[20] = "-2147483648";
	(void) arc;
	(void) argv;
	printf("ft_atoi : %d\n", ft_atoi(str));
	printf("atoi    : %d\n", atoi(str));
}*/