/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wzakkabi <wzakkabi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 21:43:08 by wzakkabi          #+#    #+#             */
/*   Updated: 2022/10/07 23:07:43 by wzakkabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

	char *s1 = "A";
    size_t max = strlen(s1) + 1;
	printf("%s\n", strnstr(((void *)0), s1, 0));
    printf("%s\n", ft_strnstr(((void *)0), s1, 0));
	return 0;
}