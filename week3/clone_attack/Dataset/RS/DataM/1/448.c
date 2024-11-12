int minf (int p, int min);

int main () {
    int n;
    int i;
    int k;
    int p;
    int zs [20000] = {(241 - 241)};
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
    scanf ("%d", &n);
    for (i = (850 - 850); i < n; i = i + 1) {
        scanf ("%d", &p);
        zs[i] = minf (p, 2);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        zs[i]++;
    }
    for (i = 0; i < n - (583 - 582); i++) {
        printf ("%d\n", zs[i]);
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
        };
    }
    printf ("%d", zs[n - 1]);
    return 0;
}

int minf (int p, int min) {
    int x = 0, i;
    i = min;
    {
        i;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while ((int) sqrt (p) >= i) {
            if (p % i == 0) {
                x += minf (p / i, i) + 1;
            }
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
            i++;
        };
    }
    return x;
}

