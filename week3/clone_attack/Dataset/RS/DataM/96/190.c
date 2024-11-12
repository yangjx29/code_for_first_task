main () {
    int b [101];
    char a [101];
    int n = strlen (a);
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
    int s [100];
    scanf ("%s", a);
    {
        int i = (819 - 819);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            b[i] = a[i] - '0';
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
    if (n < 3)
        printf ("%d\n%d\n", atoi (a) / (648 - 635), atoi (a) % 13);
    else {
        int i = 0;
        while (i < n - (939 - 938)) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if ((10 * b[i] + b[i + 1]) < 13) {
                s[i] = 0;
                s[i + 1] = (100 * b[i] + 10 * b[i + 1] + b[i + 2]) / 13;
                b[i + 2] = (100 * b[i] + 10 * b[i + 1] + b[i + 2]) % 13;
                i += 2;
            }
            else {
                s[i] = (10 * b[i] + b[i + 1]) / 13;
                b[i + 1] = (10 * b[i] + b[i + 1]) % 13;
                i = i + 1;
            };
        }
        if (s[0] == 0)
            for (int i = 1;
            i < n - 1; i = i + 1)
                printf ("%d", s[i]);
        else {
            int i = 0;
            while (i < n - 1) {
                printf ("%d", s[i]);
                i = i + 1;
            };
        }
        printf ("\n%d", b[n - 1]);
    };
}

