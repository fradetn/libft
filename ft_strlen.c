/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfradet <nfradet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:29:31 by nfradet           #+#    #+#             */
/*   Updated: 2023/10/04 15:01:29 by nfradet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_size	ft_strlen(const char *s)
{
	t_size	count;

	count = 0;
	while (s[count])
	{
		count++;
	}
	return (count);
}

/*
#include <stdio.h>
#include <string.h>

int main (int argc, char **argv)
{
    (void) argc; 
    if (ft_strlen(argv[1]) != strlen(argv[1]))
    {
        printf("test failed\n");
        printf("ft_strlen : %ld\n", ft_strlen(argv[1]));
        printf("strlen : %ld\n", strlen(argv[1]));
    }
    else
    {
        printf("Everything's fine\n");
    }
}*/