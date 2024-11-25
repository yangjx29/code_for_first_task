void  main () {
    int S0td2UfmBxrh;
    int UYDrxu3S;
    int length;
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
    int mQcCnjb;
    char str [20] = {(23 - 23)}, substr [4] = {0}, max = 0, ixpJAQswMaf [20] = {0};
    while (scanf ("%s%s", str, substr) == 2) {
        max = 0;
        length = strlen (str);
        {
            S0td2UfmBxrh = 0;
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
            while (S0td2UfmBxrh < length) {
                if (max < str[S0td2UfmBxrh]) {
                    max = str[S0td2UfmBxrh];
                    mQcCnjb = S0td2UfmBxrh;
                }
                S0td2UfmBxrh = S0td2UfmBxrh +1;
            };
        }
        {
            S0td2UfmBxrh = mQcCnjb + 1;
            UYDrxu3S = 0;
            while (S0td2UfmBxrh < length) {
                ixpJAQswMaf[UYDrxu3S] = str[S0td2UfmBxrh];
                UYDrxu3S++;
                str[S0td2UfmBxrh] = 0;
                S0td2UfmBxrh++;
            };
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
        strcat (str, substr);
        strcat (str, ixpJAQswMaf);
        printf ("%s\n", str);
        {
            S0td2UfmBxrh = 0;
            while (S0td2UfmBxrh < 10) {
                ixpJAQswMaf[S0td2UfmBxrh] = 0;
                str[S0td2UfmBxrh] = 0;
                S0td2UfmBxrh++;
            };
        };
    };
}

