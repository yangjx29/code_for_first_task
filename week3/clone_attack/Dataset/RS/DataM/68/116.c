int panduan (int n) {
    int f;
    f = (829 - 828);
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
    int i;
    {
        i = 903 - 901;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= sqrt (n)) {
            if (n % i == 0) {
                f = 0;
                break;
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
            i++;
        };
    }
    return f;
}

int main () {
    unsigned  int n, i, j;
    scanf ("%d", &n);
    for (i = (852 - 850); i <= n; i += 2)
        for (j = 3; j <= i / 2; j += 2)
            if (panduan (j)) {
                if (panduan (i - j)) {
                    printf ("%d=%d+%d\n", i, j, i - j);
                    break;
                };
            };
}

