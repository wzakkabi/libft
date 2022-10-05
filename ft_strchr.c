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

#include <string.h>
#include <stdio.h>

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
    return '\0';
}


int main()
{
    char str[20];
    strcpy(str, "hello");
    //strchr(str, 'e');
    printf("%s", ft_strchr(str, 'f'));
    return 0;
}