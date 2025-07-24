/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etienne.petrilli <etienne.petrilli@learne  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 18:31:01 by etienne.petri     #+#    #+#             */
/*   Updated: 2025/07/24 15:23:48 by etienne.petri    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../corretienne/ex0/ft_putchar.c"
#include "../corretienne/ex1/ft_print_alphabet.c"
#include "../corretienne/ex2/ft_print_reverse_alphabet.c"
#include "../corretienne/ex3/ft_print_numbers.c"
#include "../corretienne/ex4/ft_is_negative.c"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *c)
{
	while (c)
	{
		ft_putchar(c);
		c++;
	}
}

void	main(void)
{
	ft_putstr("----------Test ft_putchar----------\n");
	ft_putstr("ft_putchar('c') : \"");
	ft_putchar('c');
	ft_putstr("\"\n\n");
	ft_putstr("----------Test ft_print_alphabet----------\n");
	ft_putstr("ft_print_alphabet() : \"");
	ft_print_alphabet();
	ft_putstr("\"\n\n");
        ft_putstr("----------Test ft_print_reverse_alphabet----------\n");
        ft_putstr("ft_print_reverse_alphabet() : \"");
	ft_print_reverse_alphabet();
	ft_putstr("\"\n\n");
	ft_putstr("----------Test ft_print_alphabet----------\n");
        ft_putstr("ft_print_numbers() : \"");
	ft_print_numbers();
	ft_putstr("\"\n\n");
        ft_putstr("----------Test ft_print_alphabet----------\n");
        ft_putstr("ft_is_negative(-6) : \"");
	ft_is_negative(-6);
	ft_putstr("\"\n");
	ft_putstr("ft_is_negative(8) : \"");
        ft_is_negative(8);
        ft_putstr("\"\n");
        ft_putstr("ft_is_negative(0) : \"");
        ft_is_negative(0);
        ft_putstr("\"\n");
}
