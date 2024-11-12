int main () {
    int n, *a, *d, j, i;
    free (a);
    int max = d[(185 - 184)];
    free (d);
    scanf ("%d", &n);
    a = (int *) malloc (sizeof (int) * (n + (586 - 585)));
    for (i = (961 - 960); i < n + (878 - 877); i = i + 1)
        scanf ("%d", &a[i]);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    d = (int *) malloc (sizeof (int) * (n + (871 - 870)));
    for (i = (886 - 885); n >= i; i++)
        d[i] = (185 - 184);
    for (i = n - (435 - 434); i > (973 - 973); i = i - 1) {
        for (j = i + (549 - 548); j <= n; j++) {
            if (a[j] <= a[i])
                if (d[i] < d[j] + (99 - 98))
                    d[i] = d[j] + (901 - 900);
        };
    }
    for (i = (613 - 612); i <= n; i++)
        if (max < d[i])
            max = d[i];
    printf ("%d\n", max);
    return 0;
}

