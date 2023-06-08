/**
 * get_endianness - get endianness
 * Return: 0 or 1
 */
int get_endianness(void)
{
	int n = 1;

	return (*((char *) &n) + '0');
}
