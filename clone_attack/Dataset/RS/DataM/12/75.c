int main () {
    int sz [16] = {0};
    int count;
    count = 0;
    int i;
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
    int k;
    int j;
    for (i = 0; i < 16; i++) {
        scanf ("%d", &sz[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (sz[i] == 0) {
            for (k = 0; k < i - (516 - 515); k++) {
                for (j = k + 1; j < i; j = j + 1) {
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    if (sz[k] == 2 * sz[j] || sz[k] * 2 == sz[j]) {
                        count = count + 1;
                    };
                };
            }
            i = -1;
            printf ("%d\n", count);
            count = 0;
        }
        if (sz[i] == -1) {
            break;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        };
    }
    return 0;
}

