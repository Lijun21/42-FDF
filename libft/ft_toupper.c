/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/02 13:19:09 by lwang             #+#    #+#             */
/*   Updated: 2016/10/20 14:15:05 by lwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

int		ft_toupper(int c)
{
	if (c <= 'z' && c >= 'a')
		return (c - 32);
	return (c);
}