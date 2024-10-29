/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akehili <akehili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:10:09 by akehili           #+#    #+#             */
/*   Updated: 2024/10/28 17:16:38 by akehili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	findsize(int n)
{
	int	size;

	size = 0;
	if (n < 0)
		size++;
	while (n && ++size)
		n = n / 10;
	return (size);
}

char	*ft_itoa(int n)
{
	int			size;
	char		*str;
	const char	*digits = "0123456789";

	size = 1;
	if (n != 0)
		size = findsize(n);
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (!str)
		return (0);
	str[size] = 0;
	if (n == 0)
		str[0] = '0';
	if (n < 0)
		str[0] = '-';
	while (n)
	{
		if (n > 0)
			str[--size] = digits[n % 10];
		else
			str[--size] = digits[n % 10 * -1];
		n /= 10;
	}
	return (str);
}
