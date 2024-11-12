int main () {
    int f;
    int k = 0, ul [k];
    int e;
    int n;
    int sz [n];
    int i;
    scanf ("%d\n", &n);
    for (i = 0; i < n; i = i + 1) {
        scanf ("%d ", &sz[i]);
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
    for (int t = (392 - 391);
    n >= t; t = t + 1) {
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
        for (i = 0; n - t > i; i = i + 1) {
            if (sz[i] > sz[i + 1]) {
                e = sz[i + 1];
                sz[i + 1] = sz[i];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                sz[i] = e;
            };
        };
    }
    for (i = 0; i < n; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        for (int a = 1;
        sz[n - 1] >= a; a = a + 2) {
            if (a == sz[i]) {
                k = k + 1;
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
            };
        };
    }
    f = k;
    k = 0;
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
        while (i < n) {
            for (int a = 1;
            a <= sz[n - 1]; a = a + 2) {
                if (a == sz[i]) {
                    ul[k] = sz[i];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    k++;
                };
            }
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
    for (k = 0; k < f - 1; k = k + 1) {
        printf ("%d,", ul[k]);
    }
    printf ("%d", ul[f - 1]);
    return 0;
}

