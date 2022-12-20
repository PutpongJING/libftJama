/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoongsu <psoongsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 23:49:46 by psoongsu          #+#    #+#             */
/*   Updated: 2022/12/17 05:03:39 by psoongsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*j;
	unsigned char	a;

	i = 0;
	j = (unsigned char *)b;
	a = (unsigned char)c;
	while (i < len)
	{
		j[i++] = a;
	}
	return (b);
}
