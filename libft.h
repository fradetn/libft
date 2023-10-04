/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfradet <nfradet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:14:09 by nfradet           #+#    #+#             */
/*   Updated: 2023/10/04 19:19:29 by nfradet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>

typedef long unsigned int	t_size;

void		ft_bzero(void *s, t_size n);
int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_isprint(int c);
void		*ft_memcpy(void *dest, const void *src, t_size n);
void		*ft_memmove(void *dest, const void *src, t_size n);
void		*ft_memset(void *s, int c, t_size n);
t_size		ft_strlcat(char *dest, const char *src, t_size size);
t_size		ft_strlcpy(char *dest, const char *src, t_size size);
t_size		ft_strlen(const char *s);
int			ft_toupper(int c);

#endif