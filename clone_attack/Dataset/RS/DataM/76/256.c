int main () {
    int l;
    int min;
    int max;
    int i;
    int n;
    int j;
    l = 0;
    min = (50330 - 330);
    max = 0;
    int xkUFK31IE [(60024 - 24)], szz [(60694 - 694)], szzz [(60802 - 802)] = {0};
    float x [60000];
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
            scanf ("%d %d", &xkUFK31IE[i], &szz[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            if (min > xkUFK31IE[i])
                min = xkUFK31IE[i];
            if (max < xkUFK31IE[i])
                max = xkUFK31IE[i];
            if (min > szz[i])
                min = szz[i];
            if (max < szz[i])
                max = szz[i];
            i++;
        };
    }
    {
        i = 0;
        while (i < n) {
            {
                j = i;
                x[i] = 247.5 - 247.0;
                while (szz[i] > j) {
                    if (x[i] < szz[i]) {
                        szzz[j]++;
                    }
                    j++;
                    x[i]++;
                };
            }
            i++;
        };
    }
    {
        j = min;
        while (j < max) {
            if (szzz[j] == 0) {
                printf ("no");
                return 0;
            }
            j++;
        };
    }
    printf ("%d %d", min, max);
    return 0;
}

