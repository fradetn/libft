/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfradet <nfradet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 18:00:29 by nfradet           #+#    #+#             */
/*   Updated: 2023/10/09 14:15:59 by nfradet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strlensep(char const *s, char sep)
{
	size_t	count;

	count = 0;
	while (*s && *s != sep)
	{
		s++;
		count++;
	}
	return (count);
}

static int	ft_wordcount(const char *str, char sep)
{
	int	count;
	int	i;

	if (*str == sep || *str == '\0')
		count = 0;
	else
		count = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] == sep && str[i + 1] != sep && str[i + 1] != '\0')
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;

	i = 0;
	tab = malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (tab == NULL)
		return (NULL);
	while (*s)
	{
		if (*s != '\0' && *s != c)
		{
			tab[i] = malloc(sizeof(char) * (ft_strlensep(s, c) + 1));
			if (tab[i] == NULL)
				return (NULL);
			j = 0;
			while (*s && *s != c)
				tab[i][j++] = *s++;
			tab[i++][j] = '\0';
		}
		if (*s != '\0')
			s++;
	}
	tab[i] = NULL;
	return (tab);
}

/*
void ft_free(char **tab)
{
	int i;

	i = 0;
	while(tab[i])
		free(tab[i++]);
	free(tab[i]);
	//free(tab);
}

int	main()
{
	char **tab;

	tab = ft_split("", ' ');
	printf("%d",ft_wordcount("", ' '));
	while (*tab != 0)
	{
		printf("%s\n", *tab);
		tab++;
	}
	ft_free(tab);
}*/