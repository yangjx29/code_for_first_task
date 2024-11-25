int main () {
    int c;
    int d;
    int e;
    c = 0;
    d = 0;
    e = 0;
    int n;
    int i;
    int k;
    int a [99999] [3];
    int s [99999];
    int fir;
    int sec;
    int thi;
    fir = 0;
    sec = 0;
    thi = 0;
    scanf ("%d", &n);
    for (i = 0; n > i; i++) {
        for (k = 0; 3 > k; k++) {
            scanf ("%d", &a[i][k]);
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
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        s[i] = a[i][1] + a[i][2];
    }
    {
        i = 0;
        while (i < n) {
            if (s[i] > fir) {
                e = d;
                thi = sec;
                sec = fir;
                fir = s[i];
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
                d = c;
                c = i;
                continue;
            }
            if (sec < s[i] && s[i] <= fir) {
                thi = sec;
                sec = s[i];
                e = d;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                d = i;
                continue;
            }
            if (s[i] > thi && s[i] <= sec) {
                thi = s[i];
                e = i;
            }
            i++;
        };
    }
    printf ("%d %d\n", a[c][0], fir);
    printf ("%d %d\n", a[d][0], sec);
    printf ("%d %d\n", a[e][0], thi);
    return 0;
}

