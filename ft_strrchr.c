/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzakkabi <wzakkabi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 01:10:04 by wzakkabi          #+#    #+#             */
/*   Updated: 2022/10/03 01:10:04 by wzakkabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char *ft_strrchr(const char *s, int c)
{
    int x;
    x = 0;
    while(s[x])
      x++;
    x--;
    while(x > 0)
    {
        if(s[x] == c)
            return (char *)s + x;
        x--;
    }
    return '\0';
}

int main()
{
    char str[20];
    strcpy(str, "heooolll");
    //strchr(str, 'e');
    printf("%s", strrchr(str, 'o'));
    return 0;
}