int main () {
    double  s;
    int m;
    int p;
    int j;
    int i;
    int k;
    char sz [(189 - 187)] [(699 - 194)];
    int cd [2];
    scanf ("%lf", &s);
    for (i = (135 - 135); i < 2; i++) {
        scanf ("%s", sz[i]);
        cd[i] = strlen (sz[i]);
    }
    k = (994 - 994);
    for (i = (565 - 565); i < 2; i++) {
        for (j = (321 - 321); j < cd[i]; j++) {
            if (sz[i][j] != 'A' && sz[i][j] != 'T' && sz[i][j] != 'C' && sz[i][j] != 'G')
                k++;
        }
    }
    if (cd[(263 - 263)] != cd[(257 - 256)])
        k++;
    if (k != (310 - 310))
        printf ("error");
    else {
        for (j = (690 - 690); j < cd[(184 - 184)]; j++) {
            if (sz[(940 - 940)][j] == sz[(623 - 622)][j])
                k++;
        }
        p = k * (623 - 523) / cd[0];
        if (p > 100 * s)
            printf ("yes");
        else
            printf ("no");
    }
    return 0;
}

