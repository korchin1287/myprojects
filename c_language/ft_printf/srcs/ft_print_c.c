#include "../includes/ft_printf.h"

static void		ft_help_c(int *mod, char c)
{
	if (mod[1] == 0 || mod[0])
	{
		if (mod[0] == 0)
		{
			while (mod[2]-- > 1)
				ft_putchar(' ');
		}
		ft_putchar(c);
		if (mod[0] != 0)
		{
			while (mod[2]-- > 1)
				ft_putchar(' ');
		}
		return ;
	}
	while (mod[2]-- > 1)
		ft_putchar('0');
	ft_putchar(c);
}

void			ft_print_c(int *mod, va_list ap)
{
	char c;

	c = (char)va_arg(ap, int);
	ft_help_c(mod, c);
}
