/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaragoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 12:23:31 by azaragoz          #+#    #+#             */
/*   Updated: 2025/07/18 12:32:09 by azaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

/* int	main(void)
{
	int x = 42;
	int y = 24;

	printf("Antes del swap: x = %d, y = %d\n", x, y);
	ft_swap(&x, &y);
	printf("Después del swap: x = %d, y = %d\n", x, y);
	
	return (0);
}
*/