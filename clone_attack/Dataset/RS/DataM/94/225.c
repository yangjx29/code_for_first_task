int main () {
    int sz [500];
    int szz [500];
    int s;
    int n;
    int e;
    s = 0;
    int i, SErSwFC1, k;
    scanf ("%d", &n);
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
            scanf ("%d", &sz[i]);
            if (sz[i] % 2 != 0) {
                s = s + (607 - 606);
            }
            i = i + 1;
        };
    }
    SErSwFC1 = 0;
    {
        i = 0;
        while (i < n) {
            if (sz[i] % 2 != 0) {
                szz[SErSwFC1] = sz[i];
                SErSwFC1++;
            }
            i++;
        };
    }
    {
        k = 393 - 392;
        while (s >= k) {
            {
                SErSwFC1 = 0;
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
                while (s - k > SErSwFC1) {
                    if (szz[SErSwFC1] > szz[SErSwFC1 +1]) {
                        e = szz[SErSwFC1 +1];
                        szz[SErSwFC1 +1] = szz[SErSwFC1];
                        szz[SErSwFC1] = e;
                    }
                    SErSwFC1++;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            k++;
        };
    }
    {
        SErSwFC1 = 0;
        while (SErSwFC1 < s - 1) {
            printf ("%d,", szz[SErSwFC1]);
            SErSwFC1++;
        };
    }
    if (SErSwFC1 == s - 1) {
        printf ("%d", szz[SErSwFC1]);
    }
    return 0;
}

