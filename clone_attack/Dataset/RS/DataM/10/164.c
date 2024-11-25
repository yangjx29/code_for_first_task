int main () {
    int b [30] = {0}, a [30] = {0};
    int i, N;
    int max = 0;
    scanf ("%d", &N);
    {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (N >= i) {
            scanf ("%d", &a[i]);
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
    b[1] = 1;
    {
        i = 2;
        while (N >= i) {
            int m = 0;
            {
                int j = 1;
                while (i > j) {
                    if (a[i] <= a[j]) {
                        if (m < b[j])
                            m = b[j];
                    }
                    j = j + 1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            b[i] = m + 1;
            i++;
        };
    }
    {
        i = 1;
        while (i <= N) {
            if (max < b[i])
                max = b[i];
            i++;
        };
    }
    printf ("%d\n", max);
}

