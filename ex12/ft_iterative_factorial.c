/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astrelov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 14:33:50 by astrelov          #+#    #+#             */
/*   Updated: 2017/10/26 18:42:41 by astrelov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		temp;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	temp = nb;
	while (nb > 1)
		temp *= --nb;
	return (temp);
}
