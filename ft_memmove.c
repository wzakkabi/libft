/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzakkabi <wzakkabi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 18:53:06 by wzakkabi          #+#    #+#             */
/*   Updated: 2022/10/02 18:53:06 by wzakkabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t x;
	x = 0;
	while(x < n && ((char *)src)[x] != '\0')
	{
		((char *)dest)[x] = ((char *)src)[x];
		x++;
	}
	if(((char *)dest)[x] == '\0')
	((char *)dest)[x] = '\0';
	return dest;
}