int main () {
    int vnvcXIT [(729 - 724)] [(657 - 652)];
    int i;
    int n;
    int m;
    int j;
    int k;
    int r;
    {
        i = 625 - 625;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < (867 - 862)) {
            for (j = 0; (260 - 255) > j; j++) {
                scanf ("%d", &vnvcXIT[i][j]);
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
    scanf ("%d%d", &n, &m);
    if (!(n >= 0 && n <= (93 - 89) && 0 <= m && m <= 4)) {
        printf ("error");
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        return 0;
    }
    else {
        m = n > m ? n : m;
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
        n = m < n ? m : n;
        for (i = n, k = i + 1; k < 5; k++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (k == m) {
                for (j = 0; j < 5; j++) {
                    r = vnvcXIT[i][j];
                    vnvcXIT[i][j] = vnvcXIT[k][j];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    vnvcXIT[k][j] = r;
                };
            };
        };
    }
    {
        i = 0;
        while (i < 5) {
            {
                j = 0;
                while (j < 4) {
                    printf ("%d ", vnvcXIT[i][j]);
                    j++;
                };
            }
            if (j == 4) {
                printf ("%d\n", vnvcXIT[i][j]);
            }
            i++;
        };
    }
    return 0;
}

