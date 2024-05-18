/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achivela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 17:56:56 by achivela          #+#    #+#             */
/*   Updated: 2024/05/16 17:57:01 by achivela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *p, int valor, size_t tamanho)
{
	char	*conversor;

	conversor = (char *)p;
	while (tamanho > 0)
	{
		conversor[tamanho - 1] = valor;
		tamanho--;
	}
	return (p);
}
