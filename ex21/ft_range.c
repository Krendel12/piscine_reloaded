/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astrelov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/26 11:38:19 by astrelov          #+#    #+#             */
/*   Updated: 2017/10/26 18:23:04 by astrelov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		ind;
	int		*array;

	ind = 0;
	if (min >= max)
		return (NULL);
	array = (int*)malloc(sizeof(int) * (max - min));
	while (min <= max)
	{
		array[max - min] = max;
		max--;
	}
	return (array);
}
