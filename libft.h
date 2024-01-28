/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlence-l <nlence-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 17:18:04 by nlence-l          #+#    #+#             */
/*   Updated: 2024/01/28 19:47:23 by nlence-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *s, int c, size_t n);
void    bzero(void *s, size_t n);
void    *memcpy(void *dest, const void *src, size_t n);
void    *memmove(void *dest, const void *src, size_t n);
size_t  strlcpy(char *dst, const char *src, size_t size);
size_t  strlcat(char *dst, const char *src, size_t size);
int     toupper(int c);
int     tolower(int c);
char    *strchr(const char *s, int c);
char    *strrchr(const char *s, int c);
int     strncmp(const char *s1, const char *s2, size_t n);
void    *memchr(const void *s, int c, size_t n);
int     memcmp(const void *s1, const void *s2, size_t n);

char    **ft_split(char const *s, char c);


#endif