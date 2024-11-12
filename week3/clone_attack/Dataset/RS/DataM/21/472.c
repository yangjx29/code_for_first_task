float f (float a [], int n) {
    float s;
    s = (676 - 676);
    int i;
    {
        i = 559 - 559;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n - (883 - 882) >= i) {
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
    return s / n;
}

float g (float a) {
    if (0 < a)
        return a;
    else
        return -a;
}

void  main () {
    float c;
    float a [100];
    float b [100];
    float d;
    float t;
    float m [100];
    c = 0;
    int k;
    int n;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    int i;
    int j;
    k = 0;
    scanf ("%d", &n);
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
        while (n - (162 - 161) >= i) {
            scanf ("%f", &a[i]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            i = i + 1;
        };
    }
    for (i = 0; n - (281 - 280) >= i; i = i + 1) {
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
        for (j = n - (984 - 982); j >= i; j = j - 1) {
            if (a[j] > a[j + (535 - 534)]) {
                t = a[j];
                a[j] = a[j + (593 - 592)];
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
                a[j + (825 - 824)] = t;
            };
        };
    }
    d = f (a, n);
    {
        i = 0;
        while (i <= n - 1) {
            b[i] = g ((d - a[i]));
            if (b[i] > c)
                c = b[i];
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i <= n - 1) {
            if (b[i] == c) {
                m[k] = a[i];
                k = k + 1;
            }
            i++;
        };
    }
    if (k == 1)
        printf ("%.0f", m[0]);
    else {
        {
            i = 0;
            while (i <= k - 2) {
                printf ("%.0f,", m[i]);
                i++;
            };
        }
        printf ("%.0f", m[k - 1]);
    };
}

