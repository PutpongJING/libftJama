/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psoongsu <psoongsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 01:03:26 by psoongsu          #+#    #+#             */
/*   Updated: 2022/12/17 04:54:00 by psoongsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*s;

	s = str;
	while (*str != 0)
		str++;
	while (str != s && *str != (char) c)
		str--;
	if (*str == (char) c)
		return ((char *) str);
	return (0);
}
