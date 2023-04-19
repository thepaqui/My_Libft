/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   distance_2d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thepaqui <thepaqui@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 16:34:11 by thepaqui          #+#    #+#             */
/*   Updated: 2023/04/19 16:35:40 by thepaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Calculates distance between a and b given their coordinates on 2d plane
double	distance_2d(double x_a, double y_a, double x_b, double y_b)
{
	double	dist;
	double	x;
	double	y;

	x = x_b - x_a;
	x = x * x;
	y = y_b - y_a;
	y = y * y;
	dist = sqrt(x + y);
	return (dist);
}
