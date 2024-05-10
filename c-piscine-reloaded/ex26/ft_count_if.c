/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achivela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 15:58:54 by achivela          #+#    #+#             */
/*   Updated: 2024/05/10 15:59:00 by achivela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
/*
int	ft_strlens(char **str)
{
	int	i;
 
	i = 0;
	while ((sizeof(str) / sizeof(str[0])))
	{
		printf("%s\n", str[i]);
		i++;
	}

	return (i - 1);
}
*/
int	ft_count_if(char **tab, int (*f)(char*))
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (tab[i] != 0)
	{
		count += f(tab[i]);
		i++;
	}
	return (count);
}
/*
int	ft_more(char *str)
{
	int	i;

	i = 0;
	while (str[i++] != '\0');

	if (i >= 2)
		return (1);
	return (0);
}

int	main(void)
{
	char	*str[] = {"ange", "Mariro", "Quissanga", "aasgdf", "adgsdg"};

	printf("%d\n", ft_count_if(str, ft_more));
	return (0);
}
*/
