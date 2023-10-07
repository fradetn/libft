/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfradet <nfradet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 04:37:19 by nfradet           #+#    #+#             */
/*   Updated: 2023/10/07 04:56:44 by nfradet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *lit, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	k;

	if (*lit == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] && n--)
	{
		k = i;
		j = 0;
		while (big[k++] == lit[j++] && n--)
		{
			if (lit[j] == '\0')
				return ((char *)&big[i]);
		}
		j = 0;
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <bsd/string.h>

int main()
{
	printf("expected : %s\noutput : %s", 
	strnstr("lorem ipsum dolor sit amet", "dolor", 15), 
	ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15));
}*/