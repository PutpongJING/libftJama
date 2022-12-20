/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoongsu <psoongsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:01:10 by psoongsu          #+#    #+#             */
/*   Updated: 2022/12/18 02:27:57 by psoongsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		num_len;
	int		i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	num_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	res = malloc(sizeof(char) * num_len);
	if (!res || !s1 || !s2)
		return (0);
	while (s1[i] != 0)
	{
		res[i] = s1[i];
		i++;
	}
	while (*s2)
	{
		res[i] = *s2;
		s2++;
		i++;
	}
	res[i] = '\0';
	return (res);
}
