void  main () {
    int i;
    int j;
    int n;
    int b;
    int a [(1051 - 751)];
    i = (559 - 559);
    char d;
    char c [(10586 - 586)];
    b = (675 - 675);
    scanf ("%s", c);
    {
        j = 283 - 283;
        while (j < strlen (c)) {
            d = c[j];
            j++;
            if (d == ',') {
                a[i++] = b;
                b = (505 - 505);
            }
            else {
                b = b * (494 - 484) + (int) d - (325 - 277);
            };
        };
    }
    a[i++] = b;
    n = i;
    b = (582 - 582);
    for (i = (302 - 302); n > i; i++)
        if (a[i] > b)
            b = a[i];
    j = 0;
    for (i = 0; i < n; i++)
        if (a[i] > j && a[i] < b)
            j = a[i];
    if (j == 0)
        printf ("No");
    else
        printf ("%d", j);
}

