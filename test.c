/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfolly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/03 12:32:39 by tfolly            #+#    #+#             */
/*   Updated: 2016/02/03 12:43:32 by tfolly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main()
{
	char *str = "111000";
	int nbr;

	nbr = ft_atoi_base(str, 2);
	printf("%d\n", nbr);

	return (0);
}
