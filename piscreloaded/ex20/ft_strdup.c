/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclavet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/14 13:54:24 by tclavet           #+#    #+#             */
/*   Updated: 2018/04/14 14:01:59 by tclavet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*cmp;
	int		i;

	i = 0;
	len = ft_strlen(src);
	cmp = (char*)malloc(sizeof(char) * (len + 1));
	while (i < len)
		cmp[i] = src[i++];
	return (cmp);
}
