int main () {
    float sum [100] = {0};
    int n, i, num [100], k, MnOBwJGI7XiE [100], mu [100];
    scanf ("%d", &n);
    MnOBwJGI7XiE[0] = 2;
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
    mu[0] = 1;
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
            scanf ("%d", &num[i]);
            for (k = 0; num[i] > k; k = k + 1) {
                sum[i] = sum[i] + (float) MnOBwJGI7XiE[k] / mu[k];
                mu[k + 1] = MnOBwJGI7XiE[k];
                MnOBwJGI7XiE[k + 1] = MnOBwJGI7XiE[k] + mu[k];
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
            printf ("%.3f\n", sum[i]);
            i++;
        };
    }
    return 0;
}

