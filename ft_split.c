/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzakkabi <wzakkabi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 20:39:24 by wzakkabi          #+#    #+#             */
/*   Updated: 2022/10/09 23:04:04 by wzakkabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
 #include <unistd.h>
 #include <stdio.h>
 #include <stdlib.h>

int	ft_word(char const *s, char c)
{
	size_t x = 0, word = 0;
	while(s[x])
	{
		while (s[x] == c && s[x])
			x++;
		if(s[x] != '\0')
			word++;
		while(s[x] != c && s[x])
			x++;
	}
	return word;
}
char	**ft_crt(char const *s, char c, char **p ,size_t word)
{
	size_t y = 0, x = 0, wd = 0;
	while(wd < word)
	{
		while(s[x] == c && s[x])
			x++;
		y = x;
		while(s[x] != c && s[x])
		{
			x++;
		}
		p[wd] = ft_substr(s, y, x - y);
		wd++;
	}
	return p;
}

char **ft_split(char const *s, char c)
{
	char **p;
	size_t word = 0;
	if(!s)
		return NULL;
	if(c == 0)
		{
			p = (char **)malloc(sizeof(char *) * 1);
			p[0] =(char *)malloc(ft_strlen(s) + 1);
			p[0] = ft_substr(s, 0, ft_strlen(s));
			return p;
		}
	word = ft_word(s, c);
	p = (char **)malloc(sizeof(char *) * word);
	if(!p)
		return 0;
	ft_crt(s, c, p, word);
	return p;
}

// int main()
// {
// 	char s[] = "    hello walid cv !";
// 	s[0] = '\0';
// 	char c;
// 	c = 0;
// 	char **p;
// 	int x = 0;
// 	p = ft_split(s, c);
	
// 	while(x < 4)
// 	{
// 		printf("%s\n", p[x]);
// 		x++;
// 	}
// 	return 0;
// }