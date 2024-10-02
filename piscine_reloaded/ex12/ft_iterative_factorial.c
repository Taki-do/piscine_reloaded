/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:55:55 by taomalbe          #+#    #+#             */
/*   Updated: 2024/09/30 17:55:55 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	cursor;

	cursor = nb;
	if (cursor < 0)
		return (0);
	if (cursor == 0 || cursor == 1)
		return (1);
	while (--cursor > 0)
	{
		nb *= cursor;
	}
	return (nb);
}
