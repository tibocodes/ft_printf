/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_itoa_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfolly <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/21 18:13:49 by tfolly            #+#    #+#             */
/*   Updated: 2016/01/22 12:33:13 by tfolly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_itoa_base(int n, int base);

int main()
{
    int nb = 11;
    int base = 16;
    char *str;

    str = ft_itoa_base(nb, base);
    ft_putendl(str);
    return (0);
}
