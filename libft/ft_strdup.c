/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoongsu <psoongsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 13:21:25 by psoongsu          #+#    #+#             */
/*   Updated: 2022/12/17 04:46:59 by psoongsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*res;
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(s1) + 1;
	res = malloc(sizeof(char) * len);
	if (!res)
		return (0);
	while (len)
	{
		len--;
		res[i] = s1[i];
		i++;
	}
	return (res);
}
