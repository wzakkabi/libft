/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzakkabi <wzakkabi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:22:21 by wzakkabi          #+#    #+#             */
/*   Updated: 2022/10/01 18:56:53 by wzakkabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



void	*ft_memset(void *b, int c, size_t len)
{
	size_t cnt;
	cnt = 0;
	
	while(cnt < len)
	{
		((unsigned char *)b)[cnt] = c;
		cnt++;
	}
	return b;
}