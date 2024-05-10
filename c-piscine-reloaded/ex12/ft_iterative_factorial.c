/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achivela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 16:09:45 by achivela          #+#    #+#             */
/*   Updated: 2024/05/10 16:09:49 by achivela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = nb;
	if ((nb < 0) || (nb >= 13))
		return (0);
	else if ((nb == 0) || (nb == 1))
		return (1);
	else if (nb > 0)
	{
		nb--;
		while (nb > 0)
		{
			result *= nb;
			nb--;
		}
	}
	return (result);
}
