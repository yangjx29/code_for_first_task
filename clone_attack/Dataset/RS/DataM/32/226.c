char a [100];

void  fuc (char *num0, int n) {
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
    if ('0' < num0[n])
        num0[n] = num0[n] - 1;
    else {
        num0[n] = '9';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        fuc (num0, n - 1);
    };
}

void  minus (char num0 [], char num1 []) {
    int last [2];
    int i;
    int j;
    int k;
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
    last[(372 - 372)] = strlen (num0) - 1;
    last[1] = strlen (num1) - 1;
    a[last[(98 - 98)] + 1] = '\0';
    {
        j = 0;
        i = 1;
        while (0 <= j) {
            if (0 <= i) {
                if (0 <= num0[j] - num1[i])
                    a[j] = num0[j] - num1[i] + '0';
                else {
                    a[j] = num0[j] - num1[i] + '0' + 10;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    fuc (num0, j - 1);
                };
            }
            else
                a[j] = num0[j];
            j = j - 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i--;
        };
    }
    if (a[0] == '0') {
        i = 0;
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
        while (1) {
            if (a[i] == '0')
                continue;
            else {
                j = i;
                {
                    k = j;
                    while (k <= last[0] + 1) {
                        a[k - j] = a[k];
                        k = k + 1;
                    };
                }
                break;
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
            i = i + 1;
        };
    };
}

void  main () {
    char num [3] [100];
    int n;
    int i;
    scanf ("%d", &n);
    for (i = 1; i <= n; i = i + 1) {
        scanf ("%s %s", num[0], num[1]);
        minus (num[0], num[1]);
        printf ("%s\n", a);
    };
}

