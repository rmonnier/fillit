/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 10:36:21 by rmonnier          #+#    #+#             */
/*   Updated: 2016/11/17 19:42:05 by rmonnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	fillit_with(char *sol_square, int size,
						t_piece list[27], int piece_nbr)
{
	int		i;

	if (list[piece_nbr].name == '\0')
		return (1);
	i = 0;
	while (sol_square[i])
	{
		if (sol_square[i] == '.')
		{
			if (try_add_piece(list[piece_nbr], sol_square, size, i))
			{
				if (fillit_with(sol_square, size, list, piece_nbr + 1) == 1)
					return (1);
				remove_piece(list[piece_nbr], sol_square, size, i);
			}
		}
		i++;
	}
	return (0);
}

int			fillit(char **sol_square, t_piece list[27])
{
	int		size;
	int		len;

	size = 2;
	while (size < 104)
	{
		len = size * size;
		if ((*sol_square = ft_strcnew(len, '.')) == 0)
			exit(EXIT_FAILURE);
		if (fillit_with(*sol_square, size, list, 0) == 1)
			return (size);
		free(*sol_square);
		size++;
	}
	return (0);
}
