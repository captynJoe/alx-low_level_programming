/**
* util - a util function for fetching words into an array
* @words: the strings array
* @str: the string
*/
void util(char **words, char *str)
{
int i, j, start, flag;

i = j = flag = 0;
while (str[i])
{
if (flag == 0 && str[i] != ' ')
{
start = i;
flag = 1;
}

if (i > 0 && str[i] == ' ' && str[i - 1] != ' ')
{
create_word(words, str, start, i, j);
j++;
flag = 0;
}

i++;
}
if (flag == 1)
create_word(words, str, start, i, j);
}

/**
* create_word - creates a word and insert it into the array
* @words: the array of strings
* @str: the string
* @start: the starting index of the word
* @end: the stopping index of the word
* @index: the index of the array to insert the word
*/
void create_word(char **words, char *str, int start, int end, int index)
{
int i, j;

i = end - start;
words[index] = (char *)malloc(sizeof(char) * (i + 1));
for (j = 0; start < end; start++, j++)
words[index][j] = str[start];
words[index][j] = '\0';
}
