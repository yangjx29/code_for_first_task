int main () {
    int m;
    int n;
    int a [100];
    int b [100];
    int i;
    m = (320 - 320);
    float c [100], s = (554 - 554);
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
    cin >> n;
    for (i = 0; n > i; i = i + 1) {
        cin >> a[i];
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
    {
        i = 0;
        while (n > i) {
            cin >> b[i];
            i = i + 1;
        };
    }
    {
        i = 0;
        while (n > i) {
            if (90 <= b[i])
                s += a[i] * 4;
            else {
                if (85 <= b[i])
                    s += a[i] * 3.7;
                else {
                    if (82 <= b[i])
                        s += a[i] * (62.3 - 59.0);
                    else if (78 <= b[i])
                        s += a[i] * 3;
                    else if (75 <= b[i])
                        s += a[i] * 2.7;
                    else if (b[i] >= 72)
                        s += a[i] * 2.3;
                    else if (b[i] >= 68)
                        s += a[i] * 2;
                    else if (b[i] >= 64)
                        s = s + a[i] * 1.5;
                    else if (b[i] >= 60)
                        s += a[i] * 1;
                    else
                        ;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < n) {
            m = m + a[i];
            i++;
        };
    }
    s /= m;
    printf ("%.2lf", s);
    return 0;
}

