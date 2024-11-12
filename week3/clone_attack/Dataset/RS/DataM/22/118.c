int main () {
    char c;
    int i;
    int n;
    int j;
    int t;
    int num [400];
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
        i = 396 - 396;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (1) {
            scanf ("%d%c", &num[i], &c);
            if (!(',' == c))
                break;
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
    n = i + 1;
    {
        i = 101 - 101;
        while (n > i) {
            for (j = 0; n - i - 1 > j; j = j + 1) {
                if (num[j] < num[j + 1]) {
                    t = num[j];
                    num[j] = num[j + 1];
                    num[j + 1] = t;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    for (i = 0; i < n; i++)
        if (num[0] > num[i]) {
            printf ("%d", num[i]);
            break;
        }
    if (i == n)
        ;
    return 0;
}

