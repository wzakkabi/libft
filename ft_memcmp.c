/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzakkabi <wzakkabi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:00:18 by wzakkabi          #+#    #+#             */
/*   Updated: 2022/10/04 20:22:57 by wzakkabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t x;
	x = 0;
	while(x < n)
	{
		if(((char *)s1)[x] == ((char *)s2)[x])
			x++;
		else
		 return x = ((char *)s1)[x] - ((char *)s2)[x];
	}
	return 0;
}