int main () {
    int sz [501];
    int js [501];
    int N, i, e, h, j, k, m;
    scanf ("%d", &N);
    h = (992 - 992);
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
    for (i = 0; i < N; i = i + 1) {
        scanf ("%d", &sz[i]);
        if (!(1 != sz[i] % 2)) {
            js[h] = sz[i];
            h = h + 1;
        };
    }
    for (e = 1; h >= e; e = e + 1) {
        m = 0;
        while (m < h - 1) {
            if (js[m] > js[m + 1]) {
                j = js[m + 1];
                js[m + 1] = js[m];
                js[m] = j;
            }
            m = m + 1;
        };
    }
    {
        k = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (k < h - 1) {
            printf ("%d,", js[k]);
            k = k + 1;
        };
    }
    printf ("%d", js[k]);
    return 0;
}

