/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfradet <nfradet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:32:03 by nfradet           #+#    #+#             */
/*   Updated: 2023/10/04 12:54:26 by nfradet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, t_size n)
{
	unsigned char	*ptr;

	ptr = dest;
	while (*((unsigned char *)src) && n-- > 0)
	{
		*ptr++ = *(unsigned char *)src++;
	}
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>
int main(int  argc, char **argv)
{
    (void) argc;

    printf("dest : %s\n", &argv[1][3]);
    printf("src : %s\n", argv[1]);
    printf("ft_memcpy : %s\n", (char *)ft_memcpy(&argv[1][3], argv[1], 5));
    printf("memcpy : %s\n", (char *)ft_memcpy(&argv[2][3], argv[2], 5));
    printf("dest : %s\n", &argv[1][3]);
    printf("src : %s\n", argv[1]);
    printf("dest memcpy : %s\n", &argv[2][3]);
}*/