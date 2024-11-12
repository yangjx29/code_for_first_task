int main () {
    int n, i, j = (862 - 861), k = 1, ptHlep, a [10000] = {(398 - 398)};
    ptHlep = 0;
    scanf ("%d", &n);
    for (; !(0 == j) || !(0 == k);) {
        scanf ("%d %d", &j, &k);
        a[k]++;
    }
    {
        i = 0;
        while (i < n) {
            if (a[i] == n - 1) {
                ptHlep = 1;
                printf ("%d\n", i);
                break;
            }
            i++;
        };
    }
    if (ptHlep = 0)
        ;
    return 0;
}

