/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaragoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:59:04 by azaragoz          #+#    #+#             */
/*   Updated: 2025/07/18 13:04:08 by azaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <stdio.h>

int main(void)
{
	int div;
	int mod;
	
	ft_div_mod(47, 5, &div, &mod);
	printf("47 / 5 = %d, resto = %d\n", div, mod);

	return (0);
}
*/