/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzakkabi <wzakkabi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:22:57 by wzakkabi          #+#    #+#             */
/*   Updated: 2022/10/07 01:11:39 by wzakkabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len )
{
	size_t x, b;
	x = 0;
	b = 0;

	if(((char *)needle)[x] == '\0')
	{
		return ((char *)haystack);
	}
	while(x < len && haystack[x] != '\0')
	{
		if(haystack[x] == needle[b])
		{
			while(haystack[x + b] == needle[b] && (x+b) < len)
				b++;
			if(needle[b] == '\0')
				return ((char *)haystack + x);
			else
				b = 0;
		}
		x++;
	}
		return 0;
}
