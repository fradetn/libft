/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfradet <nfradet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:08:06 by nfradet           #+#    #+#             */
/*   Updated: 2023/10/07 04:15:53 by nfradet          ###   ########.fr       */
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

char	*ft_strrchr(const char *s, int c)
{
	const char	*ptr;

	ptr = NULL;
	if (*s == '\0')
		return ((char *) s);
	else if (s != NULL && c == '\0')
		return ((char *)(s + ft_strlen2(s)));
	while (*s)
	{
		if (*s == c)
			ptr = s;
		s++;
	}
	if (ptr != NULL)
		return ((char *) ptr);
	return (NULL);
}
