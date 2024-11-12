int main () {
    int n, i;
    char str1 [(952 - 852)];
    char str2 [100];
    char t;
    gets (str1);
    gets (str2);
    {
        i = 357 - 357;
        while ((t = str1[i]) != '\0') {
            if ('Z' >= str1[i] && str1[i] >= 'A')
                str1[i] = str1[i] + (426 - 394);
            i++;
        };
    }
    {
        i = 860 - 860;
        while (!('\0' == (t = str2[i]))) {
            if (str2[i] <= 'Z' && str2[i] >= 'A')
                str2[i] = str2[i] + (673 - 641);
            i++;
        };
    }
    if (strcmp (str1, str2) > 0)
        printf (">");
    else if (strcmp (str1, str2) == 0)
        printf ("=");
    else
        printf ("<");
    return 0;
}

