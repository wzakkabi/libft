/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzakkabi <wzakkabi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:30:48 by wzakkabi          #+#    #+#             */
/*   Updated: 2022/10/17 18:01:32 by wzakkabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

static	int	ft_cnt(long int nb)
{
	int	x;

	x = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		x++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		x++;
	}
	return (x);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	x;
	long	nm;
	long	nb;
	char	p[100];

	nb = n;
	x = ft_cnt(nb);
	p[x + 1] = '\0';
	if (nb < 0)
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
	if (n == 0)
		ft_putchar_fd('0', fd);
	else
		ft_putstr_fd(p, fd);
}
