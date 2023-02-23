/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: envyilma <envyilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 13:37:10 by envyilma          #+#    #+#             */
/*   Updated: 2023/01/24 17:31:12 by envyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int	ft_isalnum(int c)
{
	if ((c < '0') || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || (c > 'z'))
		return (0);
	return (1);
}

/*
	Girilen değer alfabatik veya rakam ise 1 ; değil ise 0 çıktısını verir.	
*/
