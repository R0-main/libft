/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguigneb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 19:26:01 by rguigneb          #+#    #+#             */
/*   Updated: 2024/10/24 14:42:23 by rguigneb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
		dest[i] = '\0';
	return (ft_strlen(src));
}

//#include <bsd/string.h>
//#include <stdio.h>
//int	main(void)
//{
//	char	str[] = "Romain";
//	char	dest[6] = "Romain";
//
//	printf("%s %ld\n", dest, strlcpy(dest, str, 1));
//	//printf("%c", dest[4]);
//
//	char	str1[] = "Romain";
//	char	dest1[6] = "Romain";
//
//	printf("%s %ld\n", dest1, ft_strlcpy(dest1, str1, 1));
//	//printf("%c", dest1[4]);
//	return (0);
//}
