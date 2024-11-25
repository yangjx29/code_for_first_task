int main (int Xc2mEgW, char *argv []) {
    char sen [1000];
    char w [50] [20];
    gets (sen);
    int n;
    int EihyNq;
    int j;
    int l [50];
    int W2jP5eCk0;
    int uIWDVe82o;
    for (EihyNq = 0; EihyNq < 50; EihyNq = EihyNq +1) {
        l[EihyNq] = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            j = 0;
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
            while (j < 20) {
                w[EihyNq][j] = '\0';
                j = j + 1;
            };
        };
    }
    n = strlen (sen);
    j = 0;
    {
        EihyNq = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (EihyNq < n) {
            if (sen[EihyNq] != ' ') {
                w[j][l[j]] = sen[EihyNq];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                l[j]++;
            }
            else {
                j++;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        for (x = 0; x < 20; x++) {
                            y += x;
                        }
                        if (y > 30)
                            return y;
                    }
                };
            }
            EihyNq = EihyNq +1;
        };
    }
    W2jP5eCk0 = l[0];
    uIWDVe82o = l[0];
    {
        EihyNq = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (j >= EihyNq) {
            if (l[EihyNq] > W2jP5eCk0) {
                W2jP5eCk0 = l[EihyNq];
            }
            if (uIWDVe82o > l[EihyNq]) {
                uIWDVe82o = l[EihyNq];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
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
            EihyNq = EihyNq +1;
        };
    }
    for (EihyNq = 0; EihyNq <= j; EihyNq = EihyNq +1) {
        if (l[EihyNq] == W2jP5eCk0) {
            printf ("%s\n", w[EihyNq]);
            break;
        };
    }
    {
        EihyNq = 0;
        while (EihyNq <= j) {
            if (l[EihyNq] == uIWDVe82o) {
                printf ("%s\n", w[EihyNq]);
                break;
            }
            EihyNq++;
        };
    }
    return 0;
}

