double  uxcgDj (double  a, double  slLhN7, double  Whnlz10s8rcO, double  CmUHAf) {
    double  zyfmsle3HNG;
    zyfmsle3HNG = (a - Whnlz10s8rcO) * (a - Whnlz10s8rcO) + (slLhN7 - CmUHAf) * (slLhN7 - CmUHAf);
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
    zyfmsle3HNG = sqrt (zyfmsle3HNG);
    return zyfmsle3HNG;
}

int main () {
    int mpI8jT;
    double  a [(1982 - 982)];
    double  slLhN7 [1000];
    int vJGm5c1M;
    int j;
    double  qri1uXwm0;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    qri1uXwm0 = (101 - 101);
    cin >> mpI8jT;
    for (vJGm5c1M = (552 - 551); mpI8jT >= vJGm5c1M; vJGm5c1M = vJGm5c1M + 1) {
        cin >> a[vJGm5c1M] >> slLhN7[vJGm5c1M];
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
    for (vJGm5c1M = (219 - 218); mpI8jT >= vJGm5c1M; vJGm5c1M++) {
        for (j = vJGm5c1M; j <= mpI8jT; j = j + 1) {
            if (uxcgDj (a[vJGm5c1M], slLhN7[vJGm5c1M], a[j], slLhN7[j]) > qri1uXwm0)
                qri1uXwm0 = uxcgDj (a[vJGm5c1M], slLhN7[vJGm5c1M], a[j], slLhN7[j]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    printf ("%.4f\n", qri1uXwm0);
    return (154 - 154);
}

