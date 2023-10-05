/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfradet <nfradet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:08:06 by nfradet           #+#    #+#             */
/*   Updated: 2023/10/05 13:13:21 by nfradet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*ptr;

	ptr = NULL;
	while (*s)
	{
		if (*s == c)
			ptr = s;
		s++;
	}
	if (ptr != NULL)
		return ((char *) ptr);
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>
int	main(int argc, char **argv)
{
	(void) argc;
	printf("ft_strchr : %s\n", ft_strrchr(argv[1], 99));
	printf("ft_strchr : %s\n", strrchr(argv[1], 99));
}*/