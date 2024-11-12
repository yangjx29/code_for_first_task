int main () {
    int a [500] = {0}, n, m, i, j, k = 0, p;
    char s [501] = {'\0'}, t [500] [5] = {'\0'}, r [5] = {'\0'};
    gets (s);
    n = strlen (s);
    scanf ("%d\n", &m);
    for (i = 0; n - m + 1 > i; i++) {
        p = 0;
        for (j = 0; m > j; j++)
            r[j] = s[i + j];
        for (j = 0; k > j; j++)
            if (strcmp (r, t[j]) == 0) {
                a[j]++;
                p++;
            }
        if (!(0 != p)) {
            strcpy (t[k], r);
            k++;
            a[k - 1]++;
        }
    }
    p = a[0];
    for (i = 0; k > i; i++) {
        if (p < a[i])
            p = a[i];
    }
    if (p == 1)
        ;
    else {
        printf ("%d", p);
        for (i = 0; i < k; i++)
            if (a[i] == p)
                printf ("\n%s", t[i]);
    }
    return 0;
}

