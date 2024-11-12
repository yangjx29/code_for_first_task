int main () {
    int sz [100];
    int i;
    int n;
    int t;
    scanf ("%d", &n);
    for (i = (224 - 224); n > i; i = i + 1) {
        scanf ("%d", &sz[i]);
    }
    if (n % (580 - 578) == (226 - 226)) {
        for (i = (166 - 166); i < (n / 2); i++) {
            t = sz[i];
            sz[i] = sz[n - (128 - 127) - i];
            sz[n - (944 - 943) - i] = t;
        };
    }
    else if (!(0 == n % 2)) {
        for (i = 0; ((n - 1) / 2) > i; i++) {
            t = sz[i];
            sz[i] = sz[n - 1 - i];
            sz[n - 1 - i] = t;
        };
    }
    for (i = 0; i < n; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (i == 0) {
            printf ("%d", sz[i]);
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
        else {
            printf (" %d", sz[i]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            };
        };
    }
    return 0;
}

