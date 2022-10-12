/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzakkabi <wzakkabi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 05:31:40 by wzakkabi          #+#    #+#             */
/*   Updated: 2022/10/12 06:49:16 by wzakkabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

static	int	ft_cntstr(long int nb)
{
	int x = 0;
	if(nb < 0)
	{
		nb = nb * -1;
		x++;
	}
	while(nb > 0)
	{
		nb = nb / 10;
		x++;
	}
	return x;
}


char *ft_itoa(int n)
{
	int x;
	long int nb;
	long int nm;
	char *p;
	nb = n;
	if(nb == 0)
	{
		p = ft_calloc(2, 1);
		p[0] = 48;
		return p;
	}
	x = ft_cntstr(nb);
	p = ft_calloc( (x + 1), sizeof(char));
	if(!p)
		return NULL;
	nb = n;
	if(nb < 0)
	{
		nb = nb * -1;
		p[0] = '-';
	}
	while (nb > 0)
	{
		nm = nb % 10;
		p[--x] = nm + 48;
		nb = nb / 10;
	}
	return p;
}

// int main()
// {
// 	char *p;
// 	p = ft_itoa(-2147483647 -1);
// 	printf("%s\n", p);
	
// 	return 0;
// }