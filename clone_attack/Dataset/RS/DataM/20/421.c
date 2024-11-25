inserting (char a [], char b []) {
    int i;
    int k;
    int n;
    char c;
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
    n = strlen (a);
    c = a[(910 - 910)];
    {
        i = 390 - 389;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < 15) {
            if (c < a[i]) {
                k = i;
                c = a[i];
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
            i = i + 1;
        };
    }
    for (i = n - (830 - 829) + 3; k + 3 < i; i--)
        a[i] = a[i - 3];
    for (i = k + 1; i < k + 4; i = i + 1)
        a[i] = b[i - k - 1];
    {
        i = 0;
        while (i < n + 3) {
            printf ("%c", a[i]);
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
            i = i + 1;
        };
    };
}

void  main () {
    int i, j, k, n, m;
    char str [100] [50];
    char str1 [100] [50];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    i = 0;
    do {
        gets (str [i]);
        i = i + 1;
        n = strlen (str[i - 1]);
    }
    while (n != 0);
    {
        k = 0;
        while (k < i - 1) {
            {
                j = 0;
                while (j < 50) {
                    if (str[k][j] == ' ') {
                        m = j;
                        str[k][j] = '\0';
                        break;
                    }
                    j = j + 1;
                };
            }
            for (j = m + 1; j < m + 4; j++) {
                str1[k][j - m - 1] = str[k][j];
                str[k][j] = '\0';
            }
            k++;
        };
    }
    {
        j = 0;
        while (j < i - 1) {
            inserting (str[j], str1[j]);
            j++;
        };
    };
}

