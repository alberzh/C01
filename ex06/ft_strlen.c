/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaragoz <azaragoz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 11:42:21 by azaragoz          #+#    #+#             */
/*   Updated: 2025/07/20 12:16:17 by azaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int    ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}

/*
#include <stdio.h>

int main(int argc, char **argv)
{
    if (argc > 1)
    {
        printf("Length: %d\n", ft_strlen(argv[1]));
    }
    return 0;
}
*/