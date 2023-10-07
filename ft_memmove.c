/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfradet <nfradet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:33:57 by nfradet           #+#    #+#             */
/*   Updated: 2023/10/07 03:55:51 by nfradet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen2(const char *s)
{
	size_t	count;

	count = 0;
	while (s[count])
	{
		count++;
	}
	return (count);
}

void	*ft_memcpy2(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr;

	ptr = dest;
	while (n-- > 0)
	{
		*ptr++ = *(unsigned char *)src++;
	}
	return (dest);
}

//#include <stdio.h>
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *) dest;
	s = (unsigned char *) src;
	if (dest == src)
		return (dest);
	if (s < d)
	{
		while (n--)
			*(d + n) = *(s + n);
		return (dest);
	}
	ft_memcpy2(dest, src, n);
	return (dest);
}

/*
#include <unistd.h>
#include <string.h>
int	main()
{
	char	src[] = "lorem ipsum dolor sit amet";
	char	*dest;

	dest = src + 1;
	printf("src : %s\n", src);

		if (src != memmove(dest, src, 8))
			write(1, "dest's adress was not returned\n", 31);
	printf("dest : %s\n", dest);


	return (0);
}*/