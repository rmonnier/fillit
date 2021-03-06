/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 19:43:45 by rmonnier          #+#    #+#             */
/*   Updated: 2016/11/09 14:48:49 by rmonnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	size_t	n;
	char	*output;

	if (s == NULL || f == NULL)
		return (NULL);
	i = 0;
	n = ft_strlen(s);
	if (!(output = ft_strnew(n)))
		return (NULL);
	while (i < n)
	{
		output[i] = f(s[i]);
		i++;
	}
	return (output);
}
