/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 11:55:26 by julnolle          #+#    #+#             */
/*   Updated: 2020/07/14 12:37:57 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*dst;

	if (s != NULL && f != NULL)
	{
		if (!(dst = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))))
			return (NULL);
		i = 0;
		while (s[i])
		{
			dst[i] = f(i, s[i]);
			i++;
		}
		dst[i] = '\0';
		return (dst);
	}
	return (NULL);
}
