/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfradet <nfradet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:34:29 by nfradet           #+#    #+#             */
/*   Updated: 2023/10/04 19:06:31 by nfradet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_size	ft_strlen2(const char *s)
{
	t_size	count;

	count = 0;
	while (s[count])
	{
		count++;
	}
	return (count);
}

t_size	ft_strlcat(char *dest, const char *src, t_size size)
{
	t_size	i;
	t_size	dst_len;
	t_size	src_len;

	dst_len = ft_strlen2(dest);
	src_len = ft_strlen2(src);
	i = 0;
	while (i < src_len && (dst_len + i) < size - 1)
	{
		dest[dst_len + i] = src[i];
		i++;
	}
	dest[dst_len + i] = '\0';
	if (dst_len + 1 >= size)
		return (src_len + size);
	return (dst_len + src_len);
}

/*
#include <stdio.h>
#include <bsd/string.h>

int main() {
	char dest1[16] = "";
	char dest2[16] = "";
	memset(dest1, 0, 16);
	memset(dest2, 0, 16);
	memset(dest1, 'r', 15);
	memset(dest2, 'r', 15);

	printf("len str2 : %ld\n", ft_strlen2(dest1));
	printf("La longueur de la chaîne dest1 est de %zu\n", 
	strlcat(dest1, "lorem ipsum dolor sit amet", 5));
	printf("La longueur de la chaîne dest2 est de %zu\n", 
	ft_strlcat(dest2, "lorem ipsum dolor sit amet", 5));
	printf("strlcat    : %s\n", dest1);
	printf("ft_strlcat : %s\n", dest2);

	return 0;
}*/