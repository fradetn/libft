/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfradet <nfradet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:33:57 by nfradet           #+#    #+#             */
/*   Updated: 2023/10/05 15:19:54 by nfradet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long unsigned int	ft_strlen(const char *s)
{
	long unsigned int	count;

	count = 0;
	while (s[count])
		count++;
	return (count);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr;

	ptr = dest;
	if (dest < src)
	{
		while (*((unsigned char *)src) && n-- > 0)
		{
			*ptr++ = *(unsigned char *)src++;
		}
	}
	else
	{
		if (ft_strlen((char *)dest) > n)
		{
			src += n;
			ptr += n;
		}
		else
		{
			src += ft_strlen((char *)dest);
			ptr += ft_strlen((char *)dest);
		}
		while (*((unsigned char *)src) && n-- > 0)
		{
			*ptr-- = *(unsigned char *)src--;
		}
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
    printf("memmove : %s\n", (char *)memmove(&argv[1][3], argv[1], 5));
    printf("ft_memmove : %s\n", (char *)ft_memmove(&argv[2][3], argv[2], 5));
    printf("dest : %s\n", &argv[1][3]);
    printf("src : %s\n", argv[1]);
    printf("src : %s\n", argv[2]);
}*/