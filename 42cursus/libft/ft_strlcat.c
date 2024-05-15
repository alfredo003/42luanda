/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achivela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:55:41 by achivela          #+#    #+#             */
/*   Updated: 2024/05/14 15:55:46 by achivela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	dest_len;
	size_t	i;
	size_t	total_len;

	dest_len = ft_strlen(dest);
	total_len = dest_len + ft_strlen(src);
	if (n <= dest_len)
		return (total_len - (dest_len - n));
	i = 0;
	while (src[i] && dest_len + 1 < n)
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}
	dest[dest_len] = '\0';
	return (total_len);
}
