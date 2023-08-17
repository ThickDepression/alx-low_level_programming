#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * f4 - finds the biggest number
 * @usrname: username
 * @len: length of username
 * Return: the biggest number
 */
int f4(char *usrname, int len)
{
	int ch;
	int n_ch;
	unsigned int rand_num;

	ch = *usrname;
	n_ch = 0;
	while (n_ch < len)
	{
		if (ch < usrname[n_ch])
			ch = usrname[n_ch];
		n_ch += 1;
	}
	srand(ch ^ 14);
	rand_num = rand();
	return (rand_num & 63);
}

/**
 * f5 - multiplies each char of username
 * @usrname: username
 * @len: length of username
 * Return: multiplied char
 */
int f5(char *usrname, int len)
{
	int ch;
	int n_ch;

	ch = n_ch = 0;
	while (n_ch < len)
	{
		ch = ch + usrname[n_ch] * usrname[n_ch];
		n_ch += 1;
	}
	return (((unsigned int)ch ^ 239) & 63);
}

/**
 * f6 - generates a random char
 * @usrname: username
 * Return: a random char
 */
int f6(char *usrname)
{
	int ch;
	int n_ch;

	ch = n_ch = 0;
	while (n_ch < *usrname)
	{
		ch = rand();
		n_ch += 1;
	}
	return (((unsigned int)ch ^ 229) & 63);
}

/**
 * main - main
 * @argc: arg count
 * @argv: arg vector
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	char keygen[7];
	int len, ch, n_ch;
	long alph[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850 };
	(void) argc;

	for (len = 0; argv[1][len]; len++)
		;
	keygen[0] = ((char *)alph)[(len ^ 59) & 63];
	ch = n_ch = 0;
	while (n_ch < len)
	{
		ch = ch + argv[1][n_ch];
		n_ch = n_ch + 1;
	}
	keygen[1] = ((char *)alph)[(ch ^ 79) & 63];
	ch = 1;
	n_ch = 0;
	while (n_ch < len)
	{
		ch = argv[1][n_ch] * ch;
		n_ch = n_ch + 1;
	}
	keygen[2] = ((char *)alph)[(ch ^ 85) & 63];
	keygen[3] = ((char *)alph)[f4(argv[1], len)];
	keygen[4] = ((char *)alph)[f5(argv[1], len)];
	keygen[5] = ((char *)alph)[f6(argv[1])];
	keygen[6] = '\0';
	for (ch = 0; keygen[ch]; ch++)
		printf("%c", keygen[ch]);
	return (0);
}
