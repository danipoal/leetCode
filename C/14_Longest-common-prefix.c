int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_strncmp_mod(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (s1[i] != '\0' || s2[i] != '\0')
	{
		while (i < n)
		{
			if (s1[i] != s2[i])
				return (i);
			i++;
		}
	}
	return (i);
}

char* longestCommonPrefix(char** strs, int strsSize) {
    int i;
    int nchar_equal;

    i = 0;
    nchar_equal = ft_strlen(strs[i]);
    while (i < strsSize - 1)    
    {
        nchar_equal = ft_strncmp_mod(strs[i], strs[i + 1], nchar_equal);
        i++;
    }
    strs[0][nchar_equal] = '\0';
    return (strs[0]);
}