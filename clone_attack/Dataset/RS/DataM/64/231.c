int x [(805 - 795)], y [(148 - 138)], z [10], k = (257 - 257), d [(606 - 506)] = {0}, e [100] = {0}, i, qvBak1Fde8Sh, k, n;
double  LFZTUozm [100] = {0}, temp;

int main () {
    scanf ("%d", &n);
    for (i = 0; n > i; i = i + 1) {
        scanf ("%d %d %d", &x[i], &y[i], &z[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (i = 0; i < n; i++) {
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
        for (qvBak1Fde8Sh = i + (847 - 846); qvBak1Fde8Sh < n; qvBak1Fde8Sh = qvBak1Fde8Sh + 1) {
            LFZTUozm[k] = sqrt (pow (x[i] - x[qvBak1Fde8Sh], (604 - 602)) + pow (y[i] - y[qvBak1Fde8Sh], (814 - 812)) + pow (z[i] - z[qvBak1Fde8Sh], 2));
            d[k] = i;
            e[k] = qvBak1Fde8Sh;
            k++;
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
    {
        i = 0;
        while (i < k) {
            {
                qvBak1Fde8Sh = i + 1;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                while (qvBak1Fde8Sh < k) {
                    if (LFZTUozm[i] < LFZTUozm[qvBak1Fde8Sh]) {
                        temp = LFZTUozm[i];
                        LFZTUozm[i] = LFZTUozm[qvBak1Fde8Sh];
                        LFZTUozm[qvBak1Fde8Sh] = temp;
                        temp = d[i];
                        d[i] = d[qvBak1Fde8Sh];
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        }
                        d[qvBak1Fde8Sh] = temp;
                        temp = e[i];
                        e[i] = e[qvBak1Fde8Sh];
                        e[qvBak1Fde8Sh] = temp;
                    }
                    if ((LFZTUozm[i] == LFZTUozm[qvBak1Fde8Sh]) && ((d[i] > d[qvBak1Fde8Sh]) || (e[i] > e[qvBak1Fde8Sh]))) {
                        temp = LFZTUozm[i];
                        LFZTUozm[i] = LFZTUozm[qvBak1Fde8Sh];
                        LFZTUozm[qvBak1Fde8Sh] = temp;
                        temp = d[i];
                        d[i] = d[qvBak1Fde8Sh];
                        d[qvBak1Fde8Sh] = temp;
                        temp = e[i];
                        e[i] = e[qvBak1Fde8Sh];
                        e[qvBak1Fde8Sh] = temp;
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
                    qvBak1Fde8Sh = qvBak1Fde8Sh + 1;
                };
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
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < k) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", x[d[i]], y[d[i]], z[d[i]], x[e[i]], y[e[i]], z[e[i]], LFZTUozm[i]);
            i = i + 1;
        };
    }
    return 0;
}

