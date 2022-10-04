/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzakkabi <wzakkabi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 19:44:35 by wzakkabi          #+#    #+#             */
/*   Updated: 2022/10/04 20:22:11 by wzakkabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum(char b)
{
	if((b >= 'a' && b <= 'z' )||( b >= 'A' && b <= 'Z' )|| (b >= '0' && b <= '9'))
	return 1;
	else
	return 0;
}