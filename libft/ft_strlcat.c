/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaunovi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 17:39:39 by dpaunovi          #+#    #+#             */
/*   Updated: 2016/12/01 17:04:57 by dpaunovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t dst_end;

	i = 0;
	while (dst[i] && i < size)
		i++;
	dst_end = i;
	while (src[i - dst_end] && i < size - 1)
	{
		dst[i] = src[i - dst_end];
		i++;
	}
	if (dst_end < size)
		dst[i] = '\0';
	return (dst_end + ft_strlen(src));
}
