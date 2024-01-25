/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfradet <nfradet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 23:37:29 by nfradet           #+#    #+#             */
/*   Updated: 2023/12/12 15:27:27 by nfradet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isnum(int c)
{
	if ((c > 47 && c < 58))
	{
		return (2048);
	}
	return (0);
}

static int	ft_isspace(char c)
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
	while (ft_isnum(*str) != 0)
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	return (res * sign);
}

/* 
#include <limits.h>
#include <stdio.h>

int	main()
{
	ft_printf("%d\n", ft_atoi("oui"));
} */