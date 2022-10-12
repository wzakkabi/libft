/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzakkabi <wzakkabi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 04:16:25 by wzakkabi          #+#    #+#             */
/*   Updated: 2022/10/11 23:52:07 by wzakkabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>


char *ft_strtrim(char const *s1, char const *set)
{
	int first = 0, last = 0;
	char *p;
	if(!s1 || !set)
		return NULL;
	while(s1[first] && ft_strchr(set, s1[first]))
		first++;
	if(s1[first] == '\0')
		return ft_calloc(sizeof(char *), 1);
	last = ft_strlen(s1);
	while(ft_strchr(set, s1[last]))
	{
		last--;
	}
	p = ft_substr(s1, first, last - first + 1);
	return p;
}