/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   distance_3d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thepaqui <thepaqui@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 16:34:39 by thepaqui          #+#    #+#             */
/*   Updated: 2023/04/19 16:35:37 by thepaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Calculates distance between a and b given their coordinates in 3d environment
double	distance_3d(double x_a, double y_a, double z_a, double x_b, double y_b, double z_b)
{
	double	dist;
	double	x;
	double	y;
	double	z;

	x = x_b - x_a;
	x = x * x;
	y = y_b - y_a;
	y = y * y;
	z = z_b - z_a;
	z = z * z;
	dist = sqrt(x + y + z);
	return (dist);
}
