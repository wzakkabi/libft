/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzakkabi <wzakkabi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 20:39:24 by wzakkabi          #+#    #+#             */
/*   Updated: 2022/10/06 23:51:37 by wzakkabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
 #include <unistd.h>
 #include <stdio.h>
 #include <stdlib.h>
char **ft_split(char const *s, char c)
{
	int x , i = 0, crt = 0;
	int sp = 0;
	x = 0;

	char **p;

	while(s[x])
	{
		if(s[x] == c)
		{
			sp++;
		}
		x++;
	}
	p = (char **)malloc(sizeof(char *) * sp + 1);
	x = 0;
	while(s[x])
	{
		while(s[x] != c && s[x])
		{
			crt++;
			x++;
		}
		p[i] = (char *)malloc(sizeof(char) * (crt+1));
		crt = 0;
		i++;
		x++;
	}
	x = 0;
	i = 0;
	crt = 0;
		while(s[x])
	{
		
		if(s[x] == c)
		{
			i++;
			printf("+");

			crt = 0;
		}
		p[i][crt] = s[x];

		x++;
		crt++;
	}
	return p;
}