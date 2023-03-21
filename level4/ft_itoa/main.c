/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joestrad <joestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 20:24:21 by joestrad          #+#    #+#             */
/*   Updated: 2022/11/28 20:48:42 by joestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa(int nbr);

int	main(void)
{
	int	n;
	char	*str;

	n = -1234;
	str = ft_itoa(n);
	printf("El numero %i en forma de cadena es: %s", n, str);
	free(str);
	return (0);
}
