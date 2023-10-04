/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfradet <nfradet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:34:29 by nfradet           #+#    #+#             */
/*   Updated: 2023/10/04 12:54:24 by nfradet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_size	ft_strlen(const char *s)
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

	dst_len = ft_strlen(dest);
	if (dst_len >= size)
		return (size);
	src_len = ft_strlen(src);
	i = 0;
	while (i < src_len && (dst_len + i) < size - 1)
	{
		printf("i : %ld\n", i);
		dest[dst_len + i] = src[i];
		i++;
	}
	dest[dst_len + i] = '\0';
	return (dst_len + src_len);
}

/*
#include <stdio.h>
#include <bsd/string.h>

int main() {
	char str1[] = "Hello, world!";
	char str2[20] = "123456789213456789";
	char str3[20] = "123456789213456789";

	printf("len str2 : %ld\n", ft_strlen(str2));
	printf("La longueur de la chaîne str2 est de %zu\n", 
	strlcat(str2, str1, sizeof(str2)));
	printf("La longueur de la chaîne str3 est de %zu\n", 
	ft_strlcat(str3, str1, sizeof(str3)));
	printf("str2 : %s\n", str2);
	printf("str3 : %s\n", str3);

  return 0;
}*/