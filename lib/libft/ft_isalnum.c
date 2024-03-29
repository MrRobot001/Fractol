/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdeomin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 16:00:13 by bdeomin           #+#    #+#             */
/*   Updated: 2018/11/04 16:00:18 by bdeomin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	(c >= 'A' && c <= 'Z') ||
	(c >= '0' && c <= '9'))
		return (1);
	return (0);
}
