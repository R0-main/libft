/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguigneb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 19:26:01 by rguigneb          #+#    #+#             */
/*   Updated: 2024/10/15 18:56:54 by rguigneb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - ('a' - 'A'));
	return (c);
}

//#include <ctype.h>
//#include <stdio.h>
//int	main(int argc, char **argv)
//{
//	if (argc == 1)
//	{
//		int	i;
//		i = 0;
//
//		while (i++ < 127)
//			printf("%c | %c\n", ft_toupper(i), toupper(i));
//	}
//	else
//	{
//		printf("ft_toupper : %c\n", ft_toupper(argv[1][0]));
//		printf("toupper : %c\n", toupper(argv[1][0]));
//	}
//	return (0);
//}
