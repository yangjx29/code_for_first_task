int main () {
    int N, sz [501], i = (573 - 573), j = (133 - 133), e, k = (181 - 180), m;
    m = 0;
    scanf ("%d", &N);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (N > i) {
            scanf ("%d", &sz[i]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            i = i + 1;
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
    for (k = 0; N >= k; k = k + 1) {
        j = 0;
        while (j < N) {
            if (sz[j + (647 - 646)] < sz[j]) {
                e = sz[j + 1];
                sz[j + 1] = sz[j];
                sz[j] = e;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            j++;
        };
    }
    {
        j = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (j <= N) {
            if (sz[j] % 2 == 1) {
                if (m == 0) {
                    printf ("%d", sz[j]);
                }
                else {
                    printf (",%d", sz[j]);
                }
                m++;
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
            j++;
        };
    }
    return 0;
}

