/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envyilma <envyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 21:13:02 by envyilma          #+#    #+#             */
/*   Updated: 2023/01/25 18:17:12 by envyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len(const char *tmp)
{
	int	i;

	i = 0;
	while (tmp[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		len;
	int		i;
	int		j;

	j = 0;
	i = 0;
	len = ft_len(s1) + ft_len(s2);
	s3 = (char *)malloc(sizeof(char) * (len + 1));
	if (!s3)
		return (0);
	while (s1[i] != '\0')
	{
		s3[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		s3[i + j] = s2[j];
		j++;
	}
	s3[i + j] = '\0';
	return (s3);
}
/*
Verilen iki parametrenin toplam uzunluğunu tutacak bir yeni array oluşturur.
Sırasıyla iki parametreyi bu arraye atar ve oluşturduğu arrayı döndürür.
*/