/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achivela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 16:10:23 by achivela          #+#    #+#             */
/*   Updated: 2024/05/10 16:10:25 by achivela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if ((nb < 0) || (nb >= 13))
		return (0);
	else if ((nb == 0) || (nb == 1))
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
