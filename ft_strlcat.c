/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akehili <akehili@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:53:24 by akehili           #+#    #+#             */
/*   Updated: 2024/10/28 18:27:56 by akehili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int	dlen;
	int	slen;
	int	i;
	int	j;

	dlen = 0;
	slen = 0;
	while (dst[dlen])
		dlen++;
	while (src[slen])
		slen++;
	i = 0;
	j = dlen;
	if (dstsize <= dlen)
		return (slen + dstsize);
	while (src[i] && i < dstsize - dlen - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (dlen + slen);
}