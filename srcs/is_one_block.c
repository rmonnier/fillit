/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_one_block.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 16:37:58 by rmonnier          #+#    #+#             */
/*   Updated: 2016/11/17 18:43:43 by rmonnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	empty_line(int i, char buf[21])
{
	int j;

	j = 0;
	while (j < 4)
	{
		if (buf[5 * i + j] == '#')
			return (0);
		j++;
	}
	return (1);
}

static int	empty_col(int j, char buf[21])
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (buf[5 * i + j] == '#')
			return (0);
		i++;
	}
	return (1);
}

static int	is_one_block_tool(char buf[21], int (*f)(int, char buf[21]))
{
	int		i;

	i = 0;
	while (f(i, buf) && i < 4)
		i++;
	while (!f(i, buf) && i < 4)
		i++;
	while (i < 4)
	{
		if (!f(i, buf))
			return (0);
		i++;
	}
	return (1);
}

int			is_one_block(char buf[21])
{
	if (!is_one_block_tool(buf, *empty_line))
		return (0);
	if (!is_one_block_tool(buf, *empty_col))
		return (0);
	return (1);
}
