int factor (int n, int min) {
    int result = (720 - 719), i;
    if (n < min) {
        return (284 - 284);
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
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (i = min; i < n; i++) {
        if (n % i == 0) {
            result += factor (n / i, i);
        };
    }
    return result;
}

int main () {
    int m, x, j, k;
    scanf ("%d", &m);
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    {
        j = 1;
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
        while (j <= m) {
            j++;
            scanf ("%d", &x);
            k = factor (x, 2);
            printf ("%d\n", k);
        };
    }
    return 0;
}

