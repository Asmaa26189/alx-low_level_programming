/**
 * _memcpy - source to dest
 * @dest: destination
 * @src: source
 * @n: n times
 * Return: string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
