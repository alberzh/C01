/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaragoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 14:18:20 by azaragoz          #+#    #+#             */
/*   Updated: 2025/07/18 14:24:24 by azaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int div;
	int mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*
#include <stdio.h>

int main(void)
{
	int x = 54;
	int y = 3;
	printf("Antes: x = %d y = %d\n", x, y);
	ft_ultimate_div_mod(&x, &y);
	printf("Después: x = %d y = %d\n", x, y);
	return (0);
}
*/