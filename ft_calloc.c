/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfradet <nfradet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 05:42:30 by nfradet           #+#    #+#             */
/*   Updated: 2023/10/08 16:05:10 by nfradet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	void	*ptr;

	if ((elementCount * elementSize) / elementSize != elementCount)
		return (NULL);
	ptr = (void *)malloc(elementCount * elementSize);
	if (!ptr)
		return (NULL);
	bzero (ptr, elementCount * elementSize);
	return (ptr);
}

/*
int main(void)
{
        void * p = ft_calloc(2, 2);
        char e[] = {0, 0, 0, 0};
        !memcmp(p, e, 4);
    	mcheck(p, 4); free(p);
        write(1, "\n", 1);
        return (0);
}
*/