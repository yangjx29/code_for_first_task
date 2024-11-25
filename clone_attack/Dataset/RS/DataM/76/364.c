int main () {
    int c;
    int a [(1281 - 281)];
    int b [1000];
    int n;
    int i;
    int e;
    int f;
    int j;
    c = (949 - 949);
    scanf ("%d", &n);
    {
        i = 80 - 80;
        while (n > i) {
            scanf ("%d%d", &a[i], &b[i]);
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
    f = b[0];
    e = a[0];
    {
        i = 0;
        while (i < n) {
            {
                j = i;
                while (n > j) {
                    if (e >= a[j] && f <= b[j]) {
                        e = a[j];
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
                        f = b[j];
                    }
                    if (e <= a[j] && a[j] <= f && b[j] >= f) {
                        f = b[j];
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                float n = 0.0;
                                if (n > 10)
                                    return;
                                else
                                    n = 0;
                            }
                        };
                    }
                    if (a[j] >= e && f >= b[j]) {
                        f = f;
                        e = e;
                    }
                    if (a[j] <= e && b[j] <= f && b[j] >= e) {
                        e = a[j];
                        {
                            int x = 0;
                            if (!(x * (x - 1) % 2 == 0)) {
                                return 0;
                            }
                        };
                    }
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    if (b[i] == e) {
                        e = a[j];
                    }
                    if (a[i] == f) {
                        f = b[j];
                    }
                    j++;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (i < n) {
            if (a[i] > f || b[i] < e || a[i] < e || b[i] > f) {
                c++;
            }
            i++;
        };
    }
    if (c == 0) {
        printf ("%d %d", e, f);
    }
    if (c != 0) {
    }
    return 0;
}

