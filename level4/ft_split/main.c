/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joestrad <joestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:56:17 by joestrad          #+#    #+#             */
/*   Updated: 2022/11/30 15:04:41 by joestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	**ft_split(char *str);

void	ft_leaks(void)
{
	system("leaks a.out");
	// con "leaks -q <nombre_del_ejecutable" te muestra menos información
}

int	main(int argc, char *argv[])
{
	char	**strs;
	int		index;

	if (argc == 2)
	{
		printf("La cadena de entrada es: ---%s---", argv[1]);
		strs = ft_split(argv[1]);
		index = 0;
		printf("\nSeparada en palabras es:\n");
		while (strs[index] != NULL)
		{
			printf("%d ---%s---\n", index + 1, strs[index]);
			index++;
		}
	}
	printf("---FIN DEL PROGRAMA---");
	atexit(ft_leaks);
	return (0);
}
