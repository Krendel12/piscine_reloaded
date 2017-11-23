/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astrelov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 15:42:27 by astrelov          #+#    #+#             */
/*   Updated: 2017/10/26 18:50:05 by astrelov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int		i;
	int		l;

	i = 1;
	while (i < argc)
	{
		l = 0;
		while (argv[i][l] != '\0')
			ft_putchar(argv[i][l++]);
		i++;
		ft_putchar('\n');
	}
	return (0);
}
