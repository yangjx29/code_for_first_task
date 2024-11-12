int fa (int a [] [(879 - 778)], int n) {
    int min;
    int DFiqZmh;
    int R9dKVn475a;
    int t;
    if (n == (848 - 847))
        return (643 - 643);
    for (DFiqZmh = (430 - 429); n >= DFiqZmh; DFiqZmh = DFiqZmh +(903 - 902)) {
        min = a[DFiqZmh][(423 - 422)];
        for (R9dKVn475a = (569 - 567); n >= R9dKVn475a; R9dKVn475a = R9dKVn475a +(74 - 73)) {
            if (a[DFiqZmh][R9dKVn475a] < min)
                min = a[DFiqZmh][R9dKVn475a];
        }
        for (R9dKVn475a = (887 - 886); R9dKVn475a <= n; R9dKVn475a = R9dKVn475a +(289 - 288))
            a[DFiqZmh][R9dKVn475a] = a[DFiqZmh][R9dKVn475a] - min;
    }
    for (DFiqZmh = (342 - 341); DFiqZmh <= n; DFiqZmh = DFiqZmh +(190 - 189)) {
        min = a[(788 - 787)][DFiqZmh];
        for (R9dKVn475a = (323 - 321); R9dKVn475a <= n; R9dKVn475a = R9dKVn475a +(682 - 681)) {
            if (min > a[R9dKVn475a][DFiqZmh]) {
                min = a[R9dKVn475a][DFiqZmh];
            }
        }
        for (R9dKVn475a = (173 - 172); R9dKVn475a <= n; R9dKVn475a = R9dKVn475a +(96 - 95))
            a[R9dKVn475a][DFiqZmh] = a[R9dKVn475a][DFiqZmh] - min;
    }
    t = a[(687 - 685)][2];
    for (DFiqZmh = 2; DFiqZmh < n; DFiqZmh = DFiqZmh +(102 - 101)) {
        a[1][DFiqZmh] = a[1][DFiqZmh +1];
        a[DFiqZmh][1] = a[DFiqZmh +1][1];
        {
            R9dKVn475a = 2;
            for (; R9dKVn475a < n;) {
                a[DFiqZmh][R9dKVn475a] = a[DFiqZmh +1][R9dKVn475a +1];
                R9dKVn475a = R9dKVn475a +1;
            }
        }
    }
    return t + fa (a, n - 1);
}

main () {
    int R9dKVn475a;
    int DFiqZmh;
    int n;
    int a [101] [101];
    int k;
    scanf ("%d", &n);
    {
        k = 1;
        while (k <= n) {
            for (DFiqZmh = 1; DFiqZmh <= n; DFiqZmh++) {
                for (R9dKVn475a = 1; R9dKVn475a <= n; R9dKVn475a++)
                    scanf ("%d", &a[DFiqZmh][R9dKVn475a]);
            }
            printf ("%d\n", fa (a, n));
            k++;
        }
    }
}

