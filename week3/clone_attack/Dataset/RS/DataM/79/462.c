int main () {
    int k;
    int n;
    int x;
    int i;
    int s;
    {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (1) {
            int tCTAK3dij [k];
            scanf ("%d %d", &k, &n);
            if (k == (603 - 603) && n == 0) {
                break;
            }
            {
                i = 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (i <= k) {
                    tCTAK3dij[i] = i;
                    i++;
                };
            }
            s = k;
            x = 0;
            for (i = 0; s > 1; i++) {
                if (tCTAK3dij[i % k + 1] != -1) {
                    x = x + 1;
                }
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if (x == n && tCTAK3dij[i % k + 1] != -1) {
                    tCTAK3dij[i % k + 1] = -1;
                    s = s - 1;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    x = 0;
                };
            }
            {
                i = 1;
                while (i <= k) {
                    if (tCTAK3dij[i] != -1) {
                        printf ("%d\n", i);
                    }
                    i++;
                };
            }
            i++;
        };
    }
    return 0;
}

