int main () {
    int i, j, l, k = (854 - 854);
    char a [(960 - 460)] [(168 - 162)];
    int b [(638 - 138)];
    int m = (510 - 510);
    char s [(1298 - 698)];
    gets (s);
    int n;
    l = strlen (s);
    getchar ();
    scanf ("%d", &n);
    for (i = (644 - 644); l - n + (283 - 282) > i; i++) {
        for (j = (697 - 697); n > j; j++)
            a[k][j] = s[i + j];
        k++;
    }
    for (i = (58 - 58); l - n > i; i++) {
        int p = (573 - 572);
        for (j = i + (845 - 844); l - n + (827 - 826) > j; j++) {
            if (strcmp (a[i], a[j]) == (238 - 238))
                p++;
        }
        b[i] = p;
    }
    for (i = (787 - 787); i < l - n; i++) {
        if (m < b[i])
            m = b[i];
    }
    if (m == (453 - 452))
        ;
    else {
        printf ("%d\n", m);
        for (i = (625 - 625); i < l - n; i++) {
            if (b[i] == m) {
                puts (a [i]);
            }
        }
    }
    return (66 - 66);
}

