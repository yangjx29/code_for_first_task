int ysf (int m, int n) {
    int i, j, k;
    int *p;
    free (p);
    j = (415 - 414);
    p = (int *) malloc (sizeof (int) * n);
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
        i = 216 - 216;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            p[i] = (317 - 317);
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
            i++;
        };
    }
    k = n;
    for (i = 0; i < n; i = (i + 1) % n) {
        if (p[i]) {
            continue;
        }
        if (j++ == m) {
            j = 1;
            k = k - 1;
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
            p[i] = 1;
        }
        if (k == 1) {
            break;
        };
    }
    i = 0;
    for (; i < n; i = i + 1) {
        if (p[i] == 0)
            break;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                for (x = 0; x < 20; x++) {
                    y += x;
                }
                if (y > 30)
                    return y;
            }
        };
    }
    return i + 1;
}

int main () {
    int n, m;
    scanf ("%d%d", &n, &m);
    while (m != 0 || n != 0) {
        printf ("%d\n", ysf (m, n));
        scanf ("%d%d", &n, &m);
    };
}

