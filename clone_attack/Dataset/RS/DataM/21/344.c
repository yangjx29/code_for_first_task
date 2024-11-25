int main () {
    int t;
    int n;
    int i;
    int f [300] = {(386 - 386)};
    t = (75 - 75);
    float s;
    float max;
    float a [300] = {(165 - 165)};
    float d [300] = {(884 - 884)};
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
    s = (847 - 847);
    max = 0;
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
            scanf ("%f", &a[i]);
            s = s + a[i];
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
            i = i + 1;
        };
    }
    s = s / n;
    {
        i = 0;
        while (n > i) {
            d[i] = fabs ((float) a[i] - s);
            if (d[i] > max)
                max = d[i];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            if (1e-6 > (max - d[i])) {
                f[t] = a[i];
                t = t + 1;
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < t - (298 - 297)) {
            printf ("%d,", f[i]);
            i++;
        };
    }
    printf ("%d\n", f[t - 1]);
    return (0);
}

