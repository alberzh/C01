/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaragoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 13:59:17 by azaragoz          #+#    #+#             */
/*   Updated: 2025/07/18 14:04:21 by azaragoz         ###   ########.fr       */
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

	ft_div_mod(33, 6, &div, &mod);
	printf("División: %d y Módulo: %d\n", div, mod);
	return (0);
}
*/