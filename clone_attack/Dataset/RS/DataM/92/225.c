int compare (const  void  *a, const  void  *b) {
    return *((int *) a) - *((int *) b);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

main () {
    int i, j, k, n, yXABdrqIj, a [(1096 - 96)], b [1000], max, w;
    scanf ("%d", &n);
    while (n != (664 - 664)) {
        {
            i = 173 - 173;
            while (i < n) {
                scanf ("%d", &a[i]);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                i++;
            };
        }
        for (j = (742 - 742); n > j; j++)
            scanf ("%d", &b[j]);
        qsort (a, n, sizeof (int), compare);
        qsort (b, n, sizeof (int), compare);
        max = -n;
        {
            yXABdrqIj = 0;
            while (n > yXABdrqIj) {
                w = 0;
                {
                    k = 0;
                    while (n > k) {
                        if (b[k] > a[(k + yXABdrqIj) % n])
                            w--;
                        if (a[(k + yXABdrqIj) % n] > b[k])
                            w++;
                        k = k + 1;
                    };
                }
                yXABdrqIj++;
                if (w > max)
                    max = w;
            };
        }
        printf ("%d\n", (807 - 607) * max);
        scanf ("%d", &n);
    };
}

