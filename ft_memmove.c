void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;
	size_t				i;

	s = (unsigned char *) dest;
	d = (unsigned char *) src;
	if (d == s)
		return (dest);
	i = 0;
	if (d < s)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	if (d > s)
	{
		while (i < n)
		{
			d[n] = s[n];
			--n;
		}
	}
	return (dest);
}
/*int main ()
{
char src[20] ="sajazaidan";
printf("before:%s \n",src);
ft_memmove(src ,src+1 ,4);
printf("after:%s \n ",src);
return(0);
}*/
