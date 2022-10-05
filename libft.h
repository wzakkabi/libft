/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzakkabi <wzakkabi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 20:11:19 by wzakkabi          #+#    #+#             */
/*   Updated: 2022/10/04 20:36:32 by wzakkabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
#include <stdlib.h>
char *ft_strnstr(const char *haystack, const char *needle, size_t len );
int     ft_strncmp(char *s1, const char *s2, size_t n);
int ft_strlen(char *str);
void    *ft_memset(void *b, int c, size_t len);
void    *ft_memmove(void *dst, const void *src, size_t len);
void    *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
int     ft_isprint(char b);
int ft_isdigit(int b);
int ft_isascii(int c);
int ft_isalpha(char b);
int ft_isalnum(char b);
void *ft_calloc(size_t count, size_t size);
void    ft_bzero(void *s, size_t n);
int ft_atoi(const char *str);
#endif