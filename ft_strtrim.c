/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzakkabi <wzakkabi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 04:16:25 by wzakkabi          #+#    #+#             */
/*   Updated: 2022/10/09 04:54:21 by wzakkabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	size_t x, first, end, final, ct;
	char *p;
	if(!s1)
		return NULL;
	x = ft_strlen(set);
	ct = 0;
	final = 0;
	first = ft_strncmp((char *)s1, set, x);
	end = ft_strncmp((char *)s1 + (ft_strlen(s1) - x), set, x);
	if(first == 0 && end == 0)
		final = 2;
	else if (first == 0 || end == 0)
		final = 1;
	if(final == 2)
	{
		p = ft_calloc(ft_strlen(s1) - (x * 2) + 1, 1);
		if(!p)
			return NULL;
		while(s1[ct] && ct < (x * 2))
		{
			p[ct] = s1[ct + x];
			ct++;
		}
		return p;
	}
	else if(first == 1)
	{
		p = ft_calloc(ft_strlen(s1) - x + 1, 1);
		if(!p)
			return NULL;
		while(s1[ct] && ct < x)
		{
			p[ct] = s1[ct + x];
			ct++;
		}
		return (p);
	}
	else
		p = ft_calloc(ft_strlen(s1) + 1, 1);
		if(!p)
			return NULL;
		while(s1[ct])
		{
			p[ct] = s1[ct];
			ct++;
		}
	return p;
}
