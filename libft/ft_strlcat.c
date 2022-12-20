/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoongsu <psoongsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 10:51:10 by psoongsu          #+#    #+#             */
/*   Updated: 2022/12/18 02:41:22 by psoongsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	if (dstsize == 0)
		return (ft_strlen(src));
	i = (size_t)ft_strlen(dst);
	if (i >= dstsize)
		return (dstsize + ft_strlen(src));
	j = i;
	if (dstsize != 0)
	{
		while (i < dstsize - 1 && src[i - j])
		{
			dst[i] = src[i - j];
			i++;
		}
		dst[i] = '\0';
	}
	return (j + ft_strlen(src));
}
