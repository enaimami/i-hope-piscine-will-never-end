/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdisbuda <mdisbuda@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 16:56:59 by mdisbuda          #+#    #+#             */
/*   Updated: 2025/11/06 20:31:14 by mdisbuda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <unistd.h>

void	ft_print_numbers(void)
{
	char	y;

	y = '1';
	while (y <= '9')
	{
		write(1, &y, 1);
		y++;
	}
	write(1, "\n", 1);
}

int main()
{
	ft_print_numbers();
}
