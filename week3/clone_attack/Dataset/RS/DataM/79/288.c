int hs (int n, int wlCr0O) {
    int i, k = 0;
    {
        i = 2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= n) {
            k = ((wlCr0O % i) + k) % i;
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
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    return k;
}

int main () {
    int j;
    int y;
    int a [100];
    j = 0;
    y = 0;
    int wlCr0O, n, h = 0;
    while (h == 0) {
        y += 1;
        scanf ("%d %d", &n, &wlCr0O);
        if ((n == 0) && (wlCr0O == 0)) {
            h = 1;
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
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        a[j] = hs (n, wlCr0O) + 1;
        j = j + 1;
    }
    for (j = 0; j < y - 1; j++) {
        printf ("%d\n", a[j]);
    }
    return 0;
}

