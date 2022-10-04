/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzakkabi <wzakkabi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:38:47 by wzakkabi          #+#    #+#             */
/*   Updated: 2022/10/04 20:23:17 by wzakkabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, const char *s2, size_t n)
{
	size_t x;
	x = 0;
	while(x < n && s1[x] && s2[x])
	{
		if(s1[x] == s2[x])
		x++;
		else
		{
			x = s1[x] - s2[x];
			return x;
		}
	}
	return 0;
}
