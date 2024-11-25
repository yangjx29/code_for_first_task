int isprime (int a) {
    int i;
    int k;
    if (a % 2 == 0) {
        return 0;
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
    k = (int) sqrt (a);
    for (i = 3; k >= i; i = i + 2) {
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
        if (a % i == 0) {
            return 0;
        };
    }
    return 1;
}

int main () {
    int n;
    int i;
    int j;
    scanf ("%d", &n);
    {
        i = 6;
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
        while (i <= n) {
            for (j = 2; j <= i / 2; j++) {
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
                if (isprime (j) && isprime (i - j)) {
                    printf ("%d=%d+%d\n", i, j, i - j);
                    break;
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
            i = i + 2;
        };
    }
    return 0;
}

