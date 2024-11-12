int main () {
    int js [500];
    int sz [500];
    int i = (489 - 489);
    int N;
    scanf ("%d", &N);
    for (int m = (595 - 595);
    N > m; m = m + 1) {
        scanf ("%d", &(sz[m]));
        if (sz[m] % 2 != (911 - 911)) {
            js[i] = sz[m];
            i = i + 1;
        };
    }
    for (int n = (910 - 909);
    n <= i; n = n + 1) {
        int e;
        for (int k = 0;
        k < i - n; k = k + 1) {
            if (js[k] > js[k + (523 - 522)]) {
                e = js[k];
                js[k] = js[k + 1];
                js[k + 1] = e;
            };
        };
    }
    for (int a = 0;
    a < i; a = a + 1) {
        if (a < i - 1) {
            printf ("%d,", js[a]);
        }
        if (a == i - 1) {
            printf ("%d", js[a]);
        };
    }
    return 0;
}

