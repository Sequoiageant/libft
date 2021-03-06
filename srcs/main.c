/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julnolle <julnolle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/24 19:16:50 by julien            #+#    #+#             */
/*   Updated: 2020/08/15 12:36:31 by julnolle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "get_next_line.h"
#include "ft_printf.h"
#include <stdio.h>
#include <string.h>
#include <fcntl.h>

int		main(void)
{
	int ret;
	int myret;

	ft_putendl("--------MY FONCTION--------");
	myret = ft_printf("arg 1 : %%% -.15d%%%p\n", 5, &ret);

	ft_putendl("-------REAL FONCTION-------");
	ret = printf("arg 1 : %%% -.15d%%%p\n", 5, &ret);
	printf("----------RETURNS----------\n");
	printf("My fction: %d\n", myret);
	printf("Real one : %d\n", ret);

	printf("-----------OTHER-----------\n");
	// printf("0 avec prec 0: %.0d\n", 0);
	// printf("%010.5d\n", -42);
	// printf("%-10.5d\n", -42);
	// printf("%050.d\n", -42);
	// ret = printf("%010d\n", -42);
	// ret = printf("%-15.05d\n", -42);
	printf("%*.*d\n", 50, 10, 42);
	printf("%d\n", ret);
	return (0);
}
/*int main(int argc, char const *argv[])
{
	size_t	len;
	char	*s1;
	char	*s2;

	if (argc == 3)
	{
		len = ft_strlen(argv[1]);
		s1 = ft_calloc((len + 1), 1);
		if (s1)
		{
			s1 = ft_memcpy(s1, argv[1], len + 1);
		}
		len = ft_strlen(argv[2]);
		s2 = ft_calloc((len + 1), 1);
		if (s2)
		{
			s2 = ft_memcpy(s2, argv[2], len + 1);
		}
		printf("cmp: %d\n", ft_strcmp(s1, s2));
		free(s1);
		free(s2);
	}
	return (0);
}*/
