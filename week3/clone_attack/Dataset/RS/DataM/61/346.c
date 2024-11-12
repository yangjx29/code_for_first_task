int feibonaqi (int N);

int main () {
    int a [1000];
    int n;
    int j;
    scanf ("%d", &n);
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
        j = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > j) {
            scanf ("%d", &a[j]);
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
            j++;
        };
    }
    {
        j = 0;
        while (n > j) {
            printf ("%d\n", feibonaqi (a[j]));
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            j++;
        };
    }
    return 0;
}

int feibonaqi (int N) {
    int F4e59rgW;
    int vTfXLajw0yr [1000];
    vTfXLajw0yr[0] = 1;
    vTfXLajw0yr[1] = 1;
    for (F4e59rgW = 2; N > F4e59rgW; F4e59rgW = F4e59rgW +1) {
        vTfXLajw0yr[F4e59rgW] = vTfXLajw0yr[F4e59rgW -1] + vTfXLajw0yr[F4e59rgW -2];
    }
    return vTfXLajw0yr[N -1];
}

