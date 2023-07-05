/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thepaqui <thepaqui@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 16:40:25 by thepaqui          #+#    #+#             */
/*   Updated: 2023/07/05 16:58:39 by thepaqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	change_alpha(int color, int alpha)
{
	return (alpha << 24 | ((color >> 16) & 0xFF) << 16
		| ((color >> 8) & 0xFF) << 8 | color & 0xFF);
}

int	get_argb(int a, int r, int g, int b)
{
	return (a << 24 | r << 16 | g << 8 | b);
}

int	get_alpha(int argb)
{
	return ((argb >> 24) & 0xFF);
}

int	get_red(int argb)
{
	return ((argb >> 16) & 0xFF);
}

int	get_green(int argb)
{
	return ((argb >> 8) & 0xFF);
}

int	get_blue(int argb)
{
	return (argb & 0xFF);
}
