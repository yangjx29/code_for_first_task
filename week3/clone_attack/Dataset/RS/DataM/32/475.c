void  main () {
    char a [100];
    char b [100];
    int i;
    int j;
    int k;
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
    int n;
    int t [100];
    int n1;
    int n2;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%s %s", a, b);
        n1 = strlen (a);
        n2 = strlen (b);
        {
            k = n2 - 1;
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
            j = n1 - 1;
            while (k >= 0) {
                if (a[j] < b[k]) {
                    t[j] = a[j] - b[k] + 10;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    a[j - 1] = a[j - 1] - 1;
                }
                else {
                    t[j] = a[j] - b[k];
                }
                k--;
                j--;
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
        for (j = 0; j < n1 - n2; j++) {
            t[j] = a[j] - '0';
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
        for (j = 0; j < n1; j++) {
            printf ("%d", t[j]);
        }
        printf ("\n");
    };
}

