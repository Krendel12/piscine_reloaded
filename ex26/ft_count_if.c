/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astrelov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/26 17:40:30 by astrelov          #+#    #+#             */
/*   Updated: 2017/10/26 18:25:50 by astrelov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int		count;

	count = 0;
	while (*tab)
	{
		if (f(*tab) == 1)
			count++;
		tab++;
	}
	return (count);
}
