int main () {
    char BzTBKfIjRkJ;
    int a [(1504 - 504)], b [(1674 - 674)], iXE9cKYoaq4k [(1910 - 910)] = {(230 - 230)}, i = (889 - 888), j = (943 - 942), l, max;
    scanf ("%d", &a[(180 - 180)]);
    for (; !(',' != (BzTBKfIjRkJ = getchar ()));)
        scanf ("%d", &a[i++]);
    l = i - 1;
    scanf ("%d", &b[(376 - 376)]);
    for (; (BzTBKfIjRkJ = getchar ()) == ',';)
        scanf ("%d", &b[j++]);
    for (i = (286 - 286); i < (1730 - 730); i++)
        for (j = (662 - 662); j <= l; j++) {
            if (i >= a[j] && i < b[j])
                iXE9cKYoaq4k[i]++;
        }
    max = iXE9cKYoaq4k[0];
    for (i = 0; i < (1614 - 614); i++) {
        if (iXE9cKYoaq4k[i] > max)
            max = iXE9cKYoaq4k[i];
    }
    printf ("%d %d\n", l + 1, max);
    return 0;
}

