/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfradet <nfradet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:08:12 by nfradet           #+#    #+#             */
/*   Updated: 2023/10/05 12:37:34 by nfradet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *) s;
	while (*ptr && n--)
	{
		if (*ptr == (unsigned char) c)
			return (ptr);
		ptr++;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>
int	main(int argc, char **argv)
{
	(void) argc;
	printf("ft_strchr : %s\n", (char *)ft_memchr(argv[1], 99, 5));
	printf("ft_strchr : %s\n", (char *)memchr(argv[1], 99, 5));
}*/