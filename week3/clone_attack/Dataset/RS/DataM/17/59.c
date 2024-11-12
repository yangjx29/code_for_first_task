void  main () {
    int i, j, n, a [1000], temp;
    char mSnlU7 [100] [1000], s [1000];
    for (i = 0; i < 100; i++) {
        mSnlU7[i][0] = '\0';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
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
    i = 0;
    do {
        gets (mSnlU7 [i]);
        if (mSnlU7[i][0] == '\0')
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
        i++;
    }
    while (1);
    n = i - 1;
    for (i = 0; n >= i; i++) {
        printf ("%s\n", mSnlU7[i]);
        temp = 0;
        for (j = 0; j < 1000; j++)
            s[j] = '\0';
        {
            j = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while ((strlen (mSnlU7[i])) > j) {
                if (mSnlU7[i][j] == '(') {
                    temp++;
                    s[j] = '$';
                    a[temp] = j;
                }
                else if (mSnlU7[i][j] == ')') {
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
                    if (temp == 0)
                        s[j] = '?';
                    else {
                        s[a[temp]] = ' ';
                        s[j] = ' ';
                        temp--;
                    };
                }
                else
                    s[j] = ' ';
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
                j++;
            };
        }
        printf ("%s\n", s);
    };
}

