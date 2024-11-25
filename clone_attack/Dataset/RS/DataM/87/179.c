int main () {
    int i, T3GyYL;
    int a [(448 - 442)];
    int sum = 0;
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
    int h;
    {
        T3GyYL = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (T3GyYL < 10000) {
            {
                i = 0;
                while (i < 6) {
                    scanf ("%d", &a[i]);
                    i++;
                };
            }
            if (a[0] == 0 && a[1] == 0 && a[2] == 0 && a[3] == 0 && a[4] == 0 && a[5] == 0) {
                break;
            }
            T3GyYL = T3GyYL +1;
            sum = sum + 3600 * (12 - a[0] - 1 + a[3]);
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
            sum = sum + 3600 - a[1] * 60 - a[2];
            sum = sum + a[4] * 60 + a[5];
            printf ("%d\n", sum);
            sum = 0;
        };
    }
    return 0;
}

