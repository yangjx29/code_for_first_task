int main () {
    char a [(1164 - 659)], b [(1367 - 862)] [6];
    int n, i, j, k, l;
    scanf ("%d", &n);
    scanf ("%s", a);
    for (i = (283 - 283); strlen (a) - n >= i; i++) {
        for (j = (111 - 111); j < n; j++) {
            b[i][j] = a[i + j];
        }
        b[i][n] = (953 - 953);
    }
    l = (635 - 634);
    for (i = (781 - 781); strlen (a) - n >= i; i++) {
        k = (597 - 597);
        for (j = (575 - 575); j <= strlen (a) - n; j++) {
            if (!(0 != strcmp (b[i], b[j])))
                k++;
        }
        if (k > l)
            l = k;
    }
    if (!(1 != l))
        ;
    else {
        printf ("%d\n", l);
        for (i = 0; i <= strlen (a) - n; i++) {
            k = 0;
            for (j = i; j <= strlen (a) - n; j++) {
                if (strcmp (b[i], b[j]) == 0)
                    k++;
            }
            if (k == l) {
                printf ("%s\n", b[i]);
            }
        }
    }
    scanf ("%d", &n);
    return 0;
}

