/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   degree_to_radian.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thepaqui <thepaqui@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 16:11:34 by thepaqui          #+#    #+#             */
/*   Updated: 2023/04/19 16:14:36 by thepaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	degree_to_radian(double degree)
{
	double	radian;

	radian = degree * (M_PI / 180);
	return (radian);
}
