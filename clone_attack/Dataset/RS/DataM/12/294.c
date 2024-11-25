void  main () {
    int count;
    int CYi5mQp [101] [101] = {{(972 - 972)}};
    int i;
    int j;
    int q;
    int n;
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
    int b;
    count = 0;
    for (i = 1; i <= (999 - 899); i = i + 1) {
        scanf ("%d", &b);
        if (!(-1 == b)) {
            CYi5mQp[i][1] = b;
            for (j = 2; 100 >= j; j = j + 1) {
                scanf ("%d", &CYi5mQp[i][j]);
                if (!(0 != CYi5mQp[i][j])) {
                    CYi5mQp[i][j] = 0;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    break;
                };
            };
        }
        else
            break;
    }
    n = i - 1;
    for (i = 1; i <= n; i++) {
        count = 0;
        {
            j = 1;
            while (j <= 100) {
                if (CYi5mQp[i][j] != 0) {
                    for (q = 1; q <= 100; q = q + 1) {
                        if (CYi5mQp[i][j] == 2 * CYi5mQp[i][q])
                            count = count + 1;
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
                    };
                }
                else {
                    break;
                }
                j = j + 1;
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
        printf ("%d\n", count);
    };
}

