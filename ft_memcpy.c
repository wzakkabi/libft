/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzakkabi <wzakkabi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 19:20:01 by wzakkabi          #+#    #+#             */
/*   Updated: 2022/10/01 21:40:29 by wzakkabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t x;
	x = 0;
	
	while(x < n)
	{
		((char *)dst)[x] = ((char *)src)[x];
		x++;
	}
	return dst;
}