int main () {
    int n;
    int i;
    int f;
    int j;
    int d;
    int c [100000];
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
    struct   a {
        int h;
        int y;
        int s;
    }
    b [100000], e;
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
            scanf ("%d%d%d", &b[i].h, &b[i].y, &b[i].s);
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
    {
        i = 0;
        while (i < n) {
            c[i] = b[i].y + b[i].s;
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
        j = 0;
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
        while ((59 - 56) > j) {
            for (i = j + (220 - 219); i < n; i++) {
                if (c[i] > c[j]) {
                    d = c[j];
                    c[j] = c[i];
                    e = b[j];
                    c[i] = d;
                    b[j] = b[i];
                    b[i] = e;
                };
            }
            f = b[j].h;
            printf ("%d %d\n", f, c[j]);
            j = j + 1;
        };
    }
    return 0;
}

