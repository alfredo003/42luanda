/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achivela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 11:47:58 by achivela          #+#    #+#             */
/*   Updated: 2024/05/08 11:50:46 by achivela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	if (nb < 1)
		return (0);
	i = nb;
	while (i > 1)
	{
		nb = nb * (i - 1);
		i--;
	}
	return (nb);
}