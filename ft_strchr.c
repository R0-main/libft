/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rguigneb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 19:26:01 by rguigneb          #+#    #+#             */
/*   Updated: 2024/10/24 18:05:11 by rguigneb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = -1;
	if (c == 0)
		return "\0";
	while (s[++i])
		if (s[i] == c)
			return ((char *)s + i);
	return (NULL);
}

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int	main(void)
//{
//	char	str[] = "";
//
//	printf("- %s\n", strchr(str, '\0'));
//	printf("- %s\n", ft_strchr(str, '\0'));
//	return (0);
//}
