/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achivela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:51:14 by achivela          #+#    #+#             */
/*   Updated: 2024/05/14 15:51:17 by achivela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!n)
		return (dest);
	i = -1;
	while (++i < n)
		*((unsigned char *)dest + i) = *((unsigned char *)src + i);
	return (dest);
}
