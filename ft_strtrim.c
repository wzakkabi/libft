/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzakkabi <wzakkabi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 04:16:25 by wzakkabi          #+#    #+#             */
/*   Updated: 2022/10/11 04:42:19 by wzakkabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_cmp(char const *s, char c)
{
	int x = 0, y = 1;
	while(s[x])
	{
		if(s[x] == c)
			y = 0;
		x++;
	}
	return y;
}

char *ft_strtrim(char const *s1, char const *set)
{
	int y = 1, first = 0, last = 0;
	char *p;
	while(y != 0 && s1[first])
	{
		y = ft_cmp(set, s1[first]);
		first++;
	}
	y = 1;
	last = ft_strlen(s1);
	while(y != 0 && last != 0)
	{
		y = ft_cmp(set, s1[last]);
		last--;
	}
	p = ft_substr(s1 + first, 0, last - first);
	return p;
}
