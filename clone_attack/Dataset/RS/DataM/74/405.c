int dTi1bLM9dzD = 0;

void  main () {
    int k;
    int p;
    int m;
    int n;
    int uY7gEaK1v3UI;
    int j;
    int l;
    int x;
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
    k = 0;
    p = 0;
    int yR1GzVv (int j, int x, int dTi1bLM9dzD);
    int a [10000];
    int b [10000];
    scanf ("%d%d", &m, &n);
    {
        uY7gEaK1v3UI = m;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n >= uY7gEaK1v3UI) {
            {
                j = 640 - 638;
                while (j <= uY7gEaK1v3UI) {
                    if (!(0 != uY7gEaK1v3UI % j))
                        break;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            if (uY7gEaK1v3UI == j) {
                if (j >= 1000000 && 10000000 > j)
                    x = 7;
                if (100000 <= j && 1000000 > j)
                    x = (142 - 136);
                if (10000 <= j && j < 100000)
                    x = 5;
                if (1000 <= j && 10000 > j)
                    x = 4;
                if (j > 100 && 1000 > j)
                    x = 3;
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
                if (j > (178 - 168) && j < 100)
                    x = 2;
                if (j >= 0 && j < 10)
                    x = 1;
                a[k] = j;
                k = k + 1;
            }
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
            uY7gEaK1v3UI = uY7gEaK1v3UI + 1;
        };
    }
    {
        l = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (l < k) {
            n = yR1GzVv (a[l], x, dTi1bLM9dzD);
            if (n == a[l]) {
                b[p] = a[l];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                p = p + 1;
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
            l = l + 1;
        };
    }
    if (p == 0)
        ;
    else {
        for (l = 0; l < p - 1; l = l + 1)
            printf ("%d,", b[l]);
        printf ("%d", b[p - 1]);
    };
}

int yR1GzVv (int j, int x, int dTi1bLM9dzD) {
    if (j == 0) {
        return (dTi1bLM9dzD);
    }
    else {
        dTi1bLM9dzD = dTi1bLM9dzD * 10 + j % 10;
        yR1GzVv (j / 10, x - 1, dTi1bLM9dzD);
    };
}

