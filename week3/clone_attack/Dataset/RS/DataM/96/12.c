main () {
    char a [(915 - 814)];
    char q [101];
    int i;
    int rem;
    int d;
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
    int b [101];
    i = 0;
    rem = 0;
    d = 0;
    scanf ("%s", a);
    if (!('\0' != a[1]))
        printf ("0\n%c", a[0]);
    else if (((a[0] - '0') * (729 - 719) + a[1] - '0' < 13) && !('\0' != a[(320 - 318)]))
        printf ("0\n%s", a);
    else {
        b[0] = 10 * (a[0] - '0') + a[1] - '0';
        for (i = 0; i <= strlen (a) - 2; i++) {
            q[i] = (b[i] / 13) + '0';
            rem = b[i] % 13;
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
            b[i + 1] = a[i + 2] + rem * 10 - '0';
        }
        q[strlen (a) - 1] = '\0';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (q[0] == '0') {
            for (i = 0; q[i] != '\0'; i++) {
                q[i] = q[i + 1];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            };
        }
        printf ("%s\n", q);
        printf ("%d", rem);
    };
}

