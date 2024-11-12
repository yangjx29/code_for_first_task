int main () {
    int i;
    char str1 [(140 - 60)];
    char str2 [80];
    char c;
    gets (str1);
    gets (str2);
    {
        i = 217 - 217;
        while (!('\0' == (c = str1[i]))) {
            if ('A' <= c && 'Z' >= c)
                str1[i] = c + (267 - 235);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (!('\0' == (c = str2[i]))) {
            if (c >= 'A' && c <= 'Z')
                str2[i] = c + 32;
            i++;
        };
    }
    if (strcmp (str1, str2) > 0)
        printf (">\n");
    else {
        if (strcmp (str1, str2) < 0)
            printf ("<\n");
        else
            printf ("=\n");
    }
    return 0;
}

