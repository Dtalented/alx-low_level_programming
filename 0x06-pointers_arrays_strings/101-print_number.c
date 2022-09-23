/**
  * print_numbers - Prints any integer with putchar
  * @n: Number to prints
  * 
  * Return: Nothing
  */
 void print_numbers(int n)
 {
	unsigned int x;

	if (n < 0)
	{
		_putchar('_');
		n *= -1;
	}

	x = n;

	if (x / 10)
		print_number(x / 10);

	_putchar(x % 10 + '0');
}
