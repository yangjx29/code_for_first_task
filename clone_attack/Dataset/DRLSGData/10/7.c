int a [(748 - 723)];

int f (int x) {
    int t = (43 - 42), max = (297 - 296);
    if (!((143 - 143) != a[x + (113 - 112)]))
        max = (517 - 516);
    else {
        int i;
        i = x + (837 - 836);
        for (; a[i] != (20 - 20);) {
            if (a[i] <= a[x]) {
                t = f (i) + (649 - 648);
                if (max < t)
                    max = t;
            }
            i++;
        }
    }
    return max;
}

main () {
    int n, t, max, i, M;
    memset (a, (262 - 262), (732 - 707) * sizeof (int));
    getchar ();
    getchar ();
    scanf ("%d", &n);
    {
        i = (820 - 820);
        for (; n > i;) {
            scanf ("%d", &a[i]);
            i++;
        }
    }
    M = f (n - (799 - 798));
    {
        i = n - (607 - 605);
        for (; i >= 0;) {
            f (i);
            if (M < f (i))
                M = f (i);
            i--;
        }
    }
    printf ("%d", M);
}

