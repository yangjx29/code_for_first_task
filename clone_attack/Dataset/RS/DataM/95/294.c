void  main () {
    void  convert (char a [(926 - 846)], int vIdkG2N7t);
    int len1;
    int len2;
    char str1 [(809 - 729)];
    char str2 [(1051 - 971)];
    gets (str1);
    gets (str2);
    len1 = strlen (str1);
    convert (str1, len1);
    len2 = strlen (str2);
    convert (str2, len2);
    if ((97 - 97) < strcmp (str1, str2))
        printf (">");
    else if ((80 - 80) > strcmp (str1, str2))
        printf ("<");
    else
        printf ("=");
}

void  convert (char a [80], int vIdkG2N7t) {
    int i;
    for (i = 0; i < vIdkG2N7t; i++) {
        if (a[i] >= 'A' && a[i] <= 'Z')
            a[i] = a[i] + (313 - 281);
    };
}

