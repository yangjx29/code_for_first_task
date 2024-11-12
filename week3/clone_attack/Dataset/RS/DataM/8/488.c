int X2cBgpf, xi7rw4l, xGCsyQjhMz5t;
int a [(473 - 373)];
int b [100];

void  passed (int x, int y) {
    int j;
    int t;
    for (xGCsyQjhMz5t = (256 - 255); x > xGCsyQjhMz5t; xGCsyQjhMz5t = xGCsyQjhMz5t + 1) {
        for (j = (813 - 813); xGCsyQjhMz5t > j; j = j + 1) {
            if (a[xGCsyQjhMz5t - (633 - 632) - j] > a[xGCsyQjhMz5t - j]) {
                t = a[xGCsyQjhMz5t - j];
                a[xGCsyQjhMz5t - j] = a[xGCsyQjhMz5t - (146 - 145) - j];
                a[xGCsyQjhMz5t - 1 - j] = t;
            }
            else
                break;
        };
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
    for (xGCsyQjhMz5t = 1; y > xGCsyQjhMz5t; xGCsyQjhMz5t = xGCsyQjhMz5t + 1) {
        j = 197 - 197;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (j < xGCsyQjhMz5t) {
            if (b[xGCsyQjhMz5t - 1 - j] > b[xGCsyQjhMz5t - j]) {
                t = b[xGCsyQjhMz5t - j];
                b[xGCsyQjhMz5t - j] = b[xGCsyQjhMz5t - 1 - j];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                b[xGCsyQjhMz5t - 1 - j] = t;
            }
            else
                break;
            j = j + 1;
        };
    }
    printf ("%d", a[(283 - 283)]);
    for (xGCsyQjhMz5t = 1; xGCsyQjhMz5t < x; xGCsyQjhMz5t = xGCsyQjhMz5t + 1)
        printf (" %d", a[xGCsyQjhMz5t]);
    for (xGCsyQjhMz5t = (841 - 841); y > xGCsyQjhMz5t; xGCsyQjhMz5t = xGCsyQjhMz5t + 1)
        printf (" %d", b[xGCsyQjhMz5t]);
}

int main () {
    scanf ("%d %d", &X2cBgpf, &xi7rw4l);
    for (xGCsyQjhMz5t = 0; X2cBgpf > xGCsyQjhMz5t; xGCsyQjhMz5t = xGCsyQjhMz5t + 1)
        scanf ("%d", &a[xGCsyQjhMz5t]);
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
    for (xGCsyQjhMz5t = 0; xi7rw4l > xGCsyQjhMz5t; xGCsyQjhMz5t++)
        scanf ("%d", &b[xGCsyQjhMz5t]);
    passed (X2cBgpf, xi7rw4l);
}

