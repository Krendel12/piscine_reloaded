/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astrelov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/26 11:36:43 by astrelov          #+#    #+#             */
/*   Updated: 2017/10/26 18:22:32 by astrelov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*str;

	len = -1;
	i = -1;
	while (src[++len])
		;
	str = (char*)malloc(len + 1);
	while (++i < len)
		str[i] = src[i];
	str[i] = '\0';
	return (str);
}
