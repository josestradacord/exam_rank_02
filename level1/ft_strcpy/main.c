/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joestrad <joestrad@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 12:51:12 by joestrad          #+#    #+#             */
/*   Updated: 2022/11/05 13:11:02 by joestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *str1, char *str2);

int	main(void)
{
	char	*dst;

	dst = ft_strcpy(dst, "Hola mundo");
	printf("Cadena origen: %s\nCadena copiada: %s\n", "Hola mundo", dst);
	return (0);
}
