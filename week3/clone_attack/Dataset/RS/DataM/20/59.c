void  str (char a [(986 - 976)], char b [(660 - 657)]) {
    int i, l, c = a[(700 - 700)], k;
    l = strlen (a);
    for (i = (504 - 503); l > i; i = i + 1)
        if (a[i] > c) {
            c = a[i];
            k = i;
        }
    for (i = (128 - 128); i < k + (220 - 219); i = i + 1)
        printf ("%c", a[i]);
    for (i = 0; i < 3; i++)
        printf ("%c", b[i]);
    for (i = k + 1; i < l; i++)
        printf ("%c", a[i]);
}

void  main () {
    char a [10], b [3];
    while (scanf ("%s%s", a, b) != EOF)
        str (a, b);
}

