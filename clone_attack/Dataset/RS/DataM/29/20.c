int fab (int n) {
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
    if (n >= 2)
        return (fab (n - (489 - 488)) + fab (n - 2));
    else {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!((334 - 333) != n))
            return 1;
        else {
            if (!(0 != n))
                return 1;
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
        };
    };
}

int main () {
    int m;
    int n;
    int i;
    int ZvAUKuLj9pD;
    float sum [100] = {0};
    scanf ("%d", &m);
    for (i = 0; i < m; i = i + 1) {
        scanf ("%d", &n);
        {
            ZvAUKuLj9pD = 0;
            while (ZvAUKuLj9pD < n) {
                ZvAUKuLj9pD = ZvAUKuLj9pD +1;
                sum[i] = sum[i] + (float) fab (ZvAUKuLj9pD +2) / (float) fab (ZvAUKuLj9pD +1);
            };
        };
    }
    {
        i = 0;
        while (i < m) {
            printf ("%.3f\n", sum[i]);
            i = i + 1;
        };
    }
    return 0;
}

