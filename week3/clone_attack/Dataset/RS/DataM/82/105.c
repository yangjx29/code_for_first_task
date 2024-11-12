int main () {
    int n, i, shousuo [101], QqbLo072z [101], xiaoshi [101], k = 0, t;
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
        while (n > i) {
            scanf ("%d%d", &shousuo[i], &QqbLo072z[i]);
            i++;
        };
    }
    {
        i = 0;
        while (i < n) {
            xiaoshi[i] = 0;
            i++;
        };
    }
    {
        i = 0;
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
        while (i < n) {
            if (140 >= shousuo[i] && 90 <= shousuo[i] && 90 >= QqbLo072z[i] && QqbLo072z[i] >= 60) {
                xiaoshi[k]++;
            }
            else {
                k++;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < n) {
            if (xiaoshi[i] > xiaoshi[0]) {
                t = xiaoshi[0];
                xiaoshi[0] = xiaoshi[i];
                xiaoshi[i] = t;
            }
            i++;
        };
    }
    printf ("%d", xiaoshi[0]);
    return 0;
}

