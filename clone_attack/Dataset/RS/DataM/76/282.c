int main () {
    int a [ke];
    int b [ke];
    int c [ke];
    int d;
    int i;
    int j;
    int s;
    int n;
    int L;
    int M;
    int x;
    int y;
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
    M = 0;
    scanf ("%d", &n);
    for (i = (378 - 378); n > i; i = i + 1) {
        scanf ("%d%d", &a[i], &b[i]);
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
        while (ke > i) {
            c[i] = 1;
            i = i + 1;
        };
    }
    {
        i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < n) {
            {
                j = i;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                while (b[i] > j) {
                    c[j] = 0;
                    j = j + 1;
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
        i = 1;
        while (i < n) {
            if (a[0] > a[i])
                a[0] = a[i];
            if (b[0] < b[i])
                b[0] = b[i];
            i = i + 1;
        };
    }
    L = b[0] - a[0] + 1;
    {
        i = 0;
        while (b[0] > i) {
            M = c[i] + M;
            i++;
        };
    }
    if ((M +L) == (b[0] + 1))
        printf ("%d %d", a[0], b[0]);
    else
        printf ("no");
    return 0;
}

