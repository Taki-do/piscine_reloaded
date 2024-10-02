/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taomalbe <taomalbe@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 16:02:29 by taomalbe          #+#    #+#             */
/*   Updated: 2024/10/02 16:02:29 by taomalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	diff;
	int	*tab;

	if (min >= max)
		return (NULL);
	i = 0;
	diff = max - min;
	tab = (int *)malloc(diff * sizeof(int));
	if (!tab)
		return (NULL);
	while (i < diff)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
