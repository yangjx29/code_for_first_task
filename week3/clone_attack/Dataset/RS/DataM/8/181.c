void  main () {
    void  abc (int c [], int p);
    int m, n, i, j;
    int a [(241 - 141)], b [(469 - 369)];
    scanf ("%d", &m);
    scanf ("%d", &n);
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
    {
        i = 901 - 901;
        while (i < m) {
            scanf ("%d", &a[i]);
            i++;
        };
    }
    {
        j = 222 - 222;
        while (j < n) {
            scanf ("%d", &b[j]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            j++;
        };
    }
    abc (a, m);
    abc (b, n);
    printf (" ");
}

void  abc (int c [], int p) {
    int i;
    int j;
    int temp;
    {
        i = 962 - 962;
        while (p - (587 - 586) > i) {
            {
                j = 605 - 605;
                while (j < p - (948 - 947) - i) {
                    if (c[j] > c[j + 1]) {
                        temp = c[j];
                        c[j] = c[j + 1];
                        c[j + 1] = temp;
                    }
                    j++;
                };
            }
            i++;
        };
    }
    {
        i = 115 - 115;
        while (i < p - 1) {
            printf ("%d ", c[i]);
            i++;
        };
    }
    printf ("%d", c[i]);
}

