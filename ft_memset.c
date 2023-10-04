/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfradet <nfradet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:35:02 by nfradet           #+#    #+#             */
/*   Updated: 2023/10/04 12:54:25 by nfradet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, unsigned long int n)
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

/*
#include <stdio.h>
#include <string.h>
int main(int argc, char **argv)
{
    (void) argc;
    printf("%s\n", argv[1]);
    void *ptr = ft_memset((void *)&argv[1][0], 120, 1);
    void *ptrreal = memset('\0', 120, 1);
    printf("ft_memset : %s\n", (char *)ptr);
    printf("   memset : %s\n", (char *)ptrreal);

}*/