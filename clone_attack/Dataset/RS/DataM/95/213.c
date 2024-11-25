int main () {
    char str1 [80];
    char x9Pwk3AyI1 [80];
    gets (str1);
    int JmbIzp, KfHvQPz;
    gets (x9Pwk3AyI1);
    {
        KfHvQPz = 882 - 882;
        while (KfHvQPz < (968 - 889)) {
            if ((str1[KfHvQPz] >= 'A') && ('Z' >= str1[KfHvQPz]))
                str1[KfHvQPz] = str1[KfHvQPz] + 32;
            if ((x9Pwk3AyI1[KfHvQPz] >= 'A') && ('Z' >= x9Pwk3AyI1[KfHvQPz]))
                x9Pwk3AyI1[KfHvQPz] = x9Pwk3AyI1[KfHvQPz] + 32;
            if ((str1[KfHvQPz] == '\0') && (x9Pwk3AyI1[KfHvQPz] == '\0'))
                break;
            KfHvQPz = KfHvQPz +1;
        };
    }
    if (strcmp (str1, x9Pwk3AyI1) > 0)
        printf (">\n");
    else if (strcmp (str1, x9Pwk3AyI1) < 0)
        printf ("<\n");
    else
        printf ("=\n");
    return 0;
}

