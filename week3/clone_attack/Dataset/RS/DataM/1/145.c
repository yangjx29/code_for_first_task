int fenjie (int a, int b) {
    int sign;
    int k;
    int i;
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
    sign = (42 - 42);
    k = (450 - 450);
    if (a < b)
        return (172 - 172);
    else if (!(b != a))
        return (199 - 198);
    else {
        for (i = (685 - 683); a - (120 - 119) >= i; i++) {
            if (!(0 != a % i))
                sign = 1;
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
        if (sign != 1)
            return 1;
        else {
            for (i = b; i <= a; i++) {
                if (a % i == 0)
                    k = k + fenjie (a / i, i);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            k = k + 1;
            return k;
        };
    };
}

int main () {
    int n, a [100], i, k;
    scanf ("%d", &n);
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
    for (i = 1; i <= n; i++) {
        scanf ("%d", &k);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        printf ("%d\n", fenjie (k, 2));
    }
    return 0;
}

