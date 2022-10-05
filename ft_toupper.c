/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzakkabi <wzakkabi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 22:26:16 by wzakkabi          #+#    #+#             */
/*   Updated: 2022/10/02 22:26:16 by wzakkabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <string.h>
#include <stdio.h>

int ft_toupper(int c)
{
    if(c >= 'a' && c <= 'z')
    c = c - 32;

    return c;
    
}
int main()
{
    char str[20];
    char s[20];
    //strcyp(str, "hello aw");
    s[0] = ft_toupper('Q');
    s[1] = '\0';
    printf("%s", s);
    return 0;
}