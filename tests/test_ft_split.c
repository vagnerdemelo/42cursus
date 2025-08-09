#include "libft.h"
#include <stdio.h>
#include <string.h>

static int	count_words(const char *str, char c)
{
	int	i;
	int	trigger;

	i = 0;
	trigger = 0;
	while (*str)
	{
		if (*str != c && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (*str == c)
			trigger = 0;
		str++;
	}
	printf("%i", i);
	return (i);
}

static char	*word_dup(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc(((finish - start) * sizeof(char)) + 1);
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**split;

	split = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!(s) || !(split))
		return (0);
	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			split[j++] = word_dup(s, index, i);
			index = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}

int main(void)
{
	char	*str2 = "xxxxxxxxhello!";
	char	sep2 = 'x';
	char	**result2;
	int	j;

	result2 = ft_split(str2, sep2);
	printf("\nString original: \"%s\"\n", str2);
	printf("Separador: '%c'\n", sep2);
	printf("Resultado do split:\n");

	for (j = 0; result2[j] != NULL; j++)
	{
		printf("  Palavra %d: \"%s\"\n", j, result2[j]);
		free(result2[j]);
	}
	free(result2);
	return (0);
}
