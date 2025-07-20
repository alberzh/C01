/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaragoz <azaragoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 12:32:24 by azaragoz          #+#    #+#             */
/*   Updated: 2025/07/20 12:56:59 by azaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_rev_int_tab(int *tab, int size)
{
    int i;
    int temp;

    i = 0;
    while (i < size / 2)
    {
        temp = tab[i];
        tab[i] = tab[size - i - 1];
        tab[size - i - 1] = temp;
        i++;
    }
}

/*
#include <stdio.h>

int main(void)
{
    int tab[] = {3, 2, 7, 5, 0, 4, 6};
    int size = 7;
    int i;

    printf("Array original: ");
    for (i = 0; i < size; i++)
    {
        printf("%c ", tab[i]);
    }
    printf("\n");
    
    ft_rev_int_tab(tab, size);
    
    printf("Array invertido: ");
    for (i = 0; i < size; i++)
    {
        printf("%c ", tab[i]);
    }
    printf("\n");
    
    return 0;
}
*/