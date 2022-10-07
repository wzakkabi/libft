/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzakkabi <wzakkabi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 00:12:41 by wzakkabi          #+#    #+#             */
/*   Updated: 2022/10/03 00:12:41 by wzakkabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    int x;
    x = 0;

    while(s[x])
    {
        if(s[x] == c)
            return (char *)s + x;
        x++;
    }
    if(c == '\0')
        return (char *)s + x;
    return NULL;
}