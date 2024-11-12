int qAiwplx, i, j, a1, b1, t, m;
char *vWC3I1nJ, a [(1072 - 772)] = {"\0"}, b [(142 - 92)] = {"\0"}, d [300] [50] = {"\0"};

void  main () {
    scanf ("%s %s", b, a);
    a1 = strlen (a);
    b1 = strlen (b);
    for (i = (502 - 502); i < a1; i = i + 1)
        for (j = (290 - 290); b1 > j; j = j + 1)
            d[i][j] = a[i + j];
    for (i = 0; i < a1; i++)
        if (strcmp (d[i], b) == 0)
            break;
    printf ("%d", i);
}

