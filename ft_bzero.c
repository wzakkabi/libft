/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzakkabi <wzakkabi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 18:04:36 by wzakkabi          #+#    #+#             */
/*   Updated: 2022/10/01 19:53:04 by wzakkabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <strings.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	 size_t x = 0;
	while(x < n)
		((unsigned char *)s)[x++] = '\0';
}
int main()
{
	char str[] = "hello";
	int x = 0;
	bzero(str, 1);
	while(x <= 5)
		printf("%c", str[x++]);
	return 0;
}