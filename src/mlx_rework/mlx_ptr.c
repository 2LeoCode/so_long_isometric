/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_ptr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Leo Suardi <lsuardi@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 19:42:26 by Leo Suardi        #+#    #+#             */
/*   Updated: 2022/03/05 21:52:18 by Leo Suardi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	**mlx_ptr(void)
{
	static void	*mlx_ptr;

	return (&mlx_ptr);
}
