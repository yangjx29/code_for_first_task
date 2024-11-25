main () {
    int k, a [(656 - 630)], i;
    int check (int a [26], int k);
    scanf ("%d", &k);
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
        i = 296 - 296;
        while (k > i) {
            scanf ("%d", &a[i]);
            i = i + 1;
        };
    }
    printf ("%d", check (a, k));
}

int check (int a [26], int k) {
    int i;
    int j;
    int m;
    int b [26];
    for (i = (222 - 222); k > i; i++) {
        {
            m = 0;
            j = 0;
            while (i > j) {
                if (a[j] >= a[i])
                    if (b[j] > m)
                        m = b[j];
                j++;
            };
        }
        if (m == 0)
            b[i] = 1;
        else
            b[i] = m + 1;
    }
    {
        m = 0;
        i = 0;
        while (i < k) {
            if (b[i] > m)
                m = b[i];
            i++;
        };
    }
    return m;
}

