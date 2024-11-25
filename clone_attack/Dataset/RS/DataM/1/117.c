int ispr (int t) {
    int v;
    v = (int) sqrt (t * (807.0 - 806.0)) + (30 - 29);
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
    for (int i = (929 - 927);
    i < v; i = i + 1)
        if (t % i == 0)
            return 0;
    return 1;
}

int sum;

void  fun (int n, int i) {
    if (n == 1)
        sum = sum + 1;
    for (; i <= n; i = i + 1) {
        if (n % i == 0)
            fun (n / i, i);
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
    return;
}

int main () {
    int n;
    scanf ("%d", &n);
    {
        int j = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (j < n) {
            int a;
            int res = 1;
            scanf ("%d", &a);
            if (ispr (a) == 1) {
                continue;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
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
            {
                int i = 2;
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
                while (i <= a / 2) {
                    if (a % i == 0) {
                        sum = 0;
                        fun (a / i, i);
                        res = res + sum;
                    }
                    i = i + 1;
                };
            }
            printf ("%d\n", res);
            j = j + 1;
        };
    }
    return 0;
}

