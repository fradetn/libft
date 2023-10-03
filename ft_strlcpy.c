/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfradet <nfradet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:39:59 by nfradet           #+#    #+#             */
/*   Updated: 2023/10/03 18:56:35 by nfradet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned long int	ft_strlcpy(char *dest, const char *src,
unsigned long int size)
{
	unsigned long int	i;

	i = 0;
	while (i < size && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}

#include <stdio.h>
#include <string.h>
int main(int  argc, char **argv)
{
    (void) argc;

    printf("dest : %s\n", argv[1]);
    printf("src : %s\n", argv[2]);
    printf("ft_strlcpy : %ld\n", ft_strlcpy(argv[1], argv[2], 5));
    //printf("strlcpy : %d\n", strlcpy(&argv[1], argv[2], 5));
    printf("dest : %s\n", argv[1]);
    printf("src : %s\n", argv[2]);
}