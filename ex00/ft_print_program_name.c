/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristof <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 14:17:07 by kristof           #+#    #+#             */
/*   Updated: 2024/02/03 14:31:41 by kristof          ###   ########.fr       */
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
		i = 0;
		
		if (argc > 0)
		while (argv[0][i] != '\0')
		{
				ft_putchar(argv[0][i]);
				i++;
		}
		ft_putchar('\n');
		return (0);
}
