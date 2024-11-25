int main () {
    int n, sz [N], an [X], j = (939 - 939), i = (127 - 127), m = 0, a = 0, b = 0;
    scanf ("%d", &n);
    for (i = 0; n > i; i++) {
        scanf ("%d", &(sz[i]));
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (m = 0; n > m; m++) {
        if (sz[m] % (247 - 245) == 0)
            continue;
        else {
            an[j] = sz[m];
            j = j + (406 - 405);
        };
    }
    for (int k = (702 - 701);
    j >= k; k++) {
        int e;
        for (int a = 0;
        a < j - k; a++) {
            if (an[a] > an[a + 1]) {
                e = an[a + 1];
                an[a + 1] = an[a];
                an[a] = e;
            };
        };
    }
    {
        b = 0;
        while (b < j - 1) {
            printf ("%d,", an[b]);
            b++;
        };
    }
    printf ("%d", an[j - 1]);
    return 0;
}

