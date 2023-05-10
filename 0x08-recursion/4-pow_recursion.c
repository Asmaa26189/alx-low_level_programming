/**
 * _pow_recursion - recursion
 * @x: integer
 * @y: powe
 * Return: integer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (1);
}
