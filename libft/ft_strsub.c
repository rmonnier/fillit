/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonnier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 20:33:27 by rmonnier          #+#    #+#             */
/*   Updated: 2016/11/09 14:40:04 by rmonnier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*output;

	if (s == NULL)
		return (NULL);
	if (!(output = ft_strnew(len)))
		return (NULL);
	ft_strncpy(output, s + start, len);
	return (output);
}
