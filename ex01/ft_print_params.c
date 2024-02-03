/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 14:34:51 by kristof           #+#    #+#             */
/*   Updated: 2024/02/03 14:59:55 by kristof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
		write(1, &c, 1);
}

int		main(int argc, char *argv[])
{
		int		i;
		int		j;

		i = 1;
		if (argc > 1)
		{
				while (i < argc)
				{
						j = 0;
						while (argv[i][j] != '\0')
						{
								ft_putchar(argv[i][j]);
								j++;
						}
						i++;
						ft_putchar('\n');
				}
		}
		return (0);
}
