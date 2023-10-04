/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfradet <nfradet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:31:15 by nfradet           #+#    #+#             */
/*   Updated: 2023/10/04 12:54:30 by nfradet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_memset(void *s, int c, t_size n)
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
	ft_memset(s, 0, n);
}

/*
#include <stdio.h>
#include <strings.h>

int main(int argc, char **argv)
{
    (void) argc;
    ft_bzero((void *)argv[1], 3);
    bzero((void *)argv[2], 3);
    printf("ft_bzero : %s\n", argv[1]);
    printf("bzero : %s\n", argv[2]);

}*/