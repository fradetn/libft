/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfradet <nfradet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 05:13:09 by nfradet           #+#    #+#             */
/*   Updated: 2023/10/07 05:36:08 by nfradet          ###   ########.fr       */
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

char	*ft_strdup(const char *s)
{
	char		*ptr;
	size_t		i;

	ptr = malloc(sizeof(char) * (ft_strlen2(s) + 1));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < ft_strlen2(s))
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/*
#include <string.h>
int main(void)
{
	char str[6] = "salut\0";
	printf("%ld", ft_strlen2(str));
	char *cpy = ft_strdup(str);
	printf("%s\n", cpy);
	free(cpy);
}*/