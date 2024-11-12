int main () {
    int e;
    int i;
    int k;
    e = (519 - 519);
    char zf [(339 - 239)] [(401 - 391)];
    char id [(795 - 785)];
    int n;
    int sz [(438 - 338)];
    scanf ("%d", &n);
    for (i = (624 - 624); n > i; i = i + 1) {
        scanf ("%s %d", zf[i], &(sz[i]));
    }
    {
        k = 265 - 264;
        while (n > k) {
            for (i = (926 - 926); n - k > i; i = i + 1) {
                if ((624 - 564) <= sz[i + (715 - 714)] && sz[i + (223 - 222)] > sz[i]) {
                    e = sz[i];
                    sz[i] = sz[i + (314 - 313)];
                    sz[i + 1] = e;
                    strcpy (id, zf[i]);
                    strcpy (zf[i], zf[i + 1]);
                    strcpy (zf[i + 1], id);
                };
            }
            k = k + 1;
        };
    }
    {
        i = 702 - 702;
        while (i < n) {
            printf ("%s\n", zf[i]);
            i = i + 1;
        };
    }
    return (606 - 606);
}

