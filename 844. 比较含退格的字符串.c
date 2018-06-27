bool backspaceCompare(char* S, char* T) 
{
	char s[205] = { 0 }, t[205] = { 0 };
	int slen = strlen(S);
	int tlen = strlen(T);
	int j = 0;
	for (int i = 0; i < slen; i++)
	{
		if (S[i] != '#')
			s[j++] = S[i];
		else if (j)
			s[j--] = 0;
	}
	if (!j)
		s[0] = 0;
	j = 0;
	for (int i = 0; i < tlen; i++)
	{
		if (T[i] != '#')
			t[j++] = T[i];
		else if (j)
			t[j--] = 0;
	}
	if (!j)
		t[0] = 0;
	return !strcmp(s, t);
}