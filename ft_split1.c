#include "libft.h"

int	count_word(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

void	free_split(char **str, int count)
{
	while (count >= 0)
	{
		free(str[count]);
		count--;
	}
	free(str);
}

int	fill_result(char const *s, char c, char **str, int count)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	while (s[i] && j < count)
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			start = i;
			while (s[i] != c && s[i])
				i++;
			str[j] = ft_substr(s, start, i - start);
			if (!str[j])
				return (0);
			j++;
		}
	}
	str[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	int		count;
	char	**result;

	count = 0;
	if (!s)
		return (NULL);
	count = count_word(s, c);
	result = (char **) malloc(sizeof(char *) * (count + 1));
	if (!result)
		return (NULL);
	if (!fill_result(s, c, result, count))
	{
