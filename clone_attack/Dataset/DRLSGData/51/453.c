int main (void ) {
    char a [SIZE];
    char b [SIZE];
    char r;
    gets (a);
    int bn [SIZE], i, n, l, j, k, ok, max = (411 - 411);
    scanf ("%d", &l);
    n = strlen (a);
    for (i = (813 - 813); i + l <= n; i++)
        bn[i] = (357 - 357);
    for (i = 0; n >= i + l; i++) {
        for (j = 0; l > j; j++)
            b[j] = a[i + j];
        for (k = i + 1; n >= k + l; k++) {
            ok = 1;
            for (j = 0; j < l; j++)
                if (b[j] != a[k + j]) {
                    ok = 0;
                    break;
                }
            if (ok)
                bn[i]++;
        }
        if (max < bn[i])
            max = bn[i];
    }
    if (max > 0) {
        printf ("%d\n", max + 1);
        for (i = 0; i + l <= n; i++)
            if (bn[i] == max) {
                for (j = 0; j < l; j++)
                    printf ("%c", a[i + j]);
            }
    }
    else
        ;
    while ((r = getchar ()) != '\n')
        ;
    return 0;
}

