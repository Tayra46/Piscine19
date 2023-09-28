void	ft_putnbr(int nb);

int	operation(int num1, int num2, char op)
{
	if (op == '+')
		return (num1 + num2);
	if (op == '-')
		return (num1 - num2);
	if (op == '*')
		return (num1 * num2);
	if (op == '/')
		return (num1 / num2);
	if (op == '%')
		return (num1 % num2);
}

int	test_arg(char *arg)
{
	int	i;

	i = 0;
	while (arg[i])
	{
		if (!(48 <= arg[i] && arg[i] <= 57))
			return (0);
	}
	return (1);
}

int	test_null(int num1, int num2, char op)
{
	if ((num1 == 0 || num2 == 0) && op == '/')
	{
		ft_putstr("Stop : division by zero\n");
		return (1);
	}
	if ((num1 == 0 || num2 == 0) && op == '%')
	{
		ft_putstr("Stop : modulo by zero\n");
		return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int num1;
	int	num2;

	if(!(test_arg(argv[1]) && test_arg(argv[3])))
	{
		ft_putnbr(0);
		return (0);
	}

	if (argc == 4)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);
		if (test_null(num1, num2, argv[2]))
			return (0);
		ft_putnbr(operation(num1, num2, argv[2]));
	}
	return (0);
}