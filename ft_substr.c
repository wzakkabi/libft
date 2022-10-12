/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzakkabi <wzakkabi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 22:25:12 by wzakkabi          #+#    #+#             */
/*   Updated: 2022/10/12 04:01:45 by wzakkabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;

	if(!s)
		return NULL;
	p = ft_calloc((len + 1), 1);
	if(!p)
		return 0;
	if(start <=	ft_strlen(s))
	{
		ft_memmove(p, s + start, len);
	}
	return p;
}
