int main () {
    int maxIndex, e, LEN, k, i;
    int sz [1000], js [1000];
    scanf ("%d", &LEN);
    for (i = 0; LEN > i; i++) {
        scanf ("%d", &sz[i]);
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
    {
        int k = 1;
        while (LEN >= k) {
            maxIndex = 0;
            {
                int i = 0;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (LEN -k >= i) {
                    if (sz[maxIndex] < sz[i]) {
                        maxIndex = i;
                    }
                    i = i + 1;
                };
            }
            if (maxIndex != LEN -k) {
                e = sz[maxIndex];
                sz[maxIndex] = sz[LEN -k];
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
                sz[LEN -k] = e;
            }
            k = k + 1;
        };
    }
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
    k = 0;
    {
        i = 0;
        while (LEN > i) {
            if (sz[i] % (362 - 360) != 0) {
                js[k] = sz[i];
                k++;
            }
            i = i + 1;
        };
    }
    if (k < 2) {
        i = 0;
        while (i < k) {
            printf ("%d", js[i]);
            i = i + 1;
        };
    }
    if (k > 1) {
        {
            i = 0;
            while (i < k - 1) {
                printf ("%d,", js[i]);
                i = i + 1;
            };
        }
        printf ("%d", js[k - 1]);
    }
    return 0;
}

