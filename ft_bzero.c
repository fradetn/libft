/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfradet <nfradet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:31:15 by nfradet           #+#    #+#             */
/*   Updated: 2023/10/04 15:38:31 by nfradet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_memset2(void *s, int c, t_size n)
{
	unsigned char	val;
	void			*ptr;

	val = (unsigned char) c;
	ptr = s;
	while (n-- > 0)
	{
		*((unsigned char *) ptr++) = val;
	}
	return (s);
}

void	ft_bzero(void *s, t_size n)
{
	ft_memset2(s, 0, n);
}

/*
#include <stdio.h>
#include <strings.h>

int main(void)
{
	char str1[5] = "salu";
	char str2[5] = "salu";
	printf("%s\n",str1);
	printf("%s\n",str2);
	ft_bzero(str1, 3);
	bzero(str2, 3);
	printf("%s\n",str1);
	printf("%s\n",str2);
}*/