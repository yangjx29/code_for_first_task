void  main () {
    char a [10000] [30] = {0};
    int n;
    int i;
    int j;
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
    int m;
    int p;
    scanf ("%d", &n);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            scanf ("%s", a[i]);
            if (a[i][0] == 95 || (97 <= a[i][0] && 122 >= a[i][0]) || (65 <= a[i][0] && a[i][0] <= 90)) {
                p = 0;
                m = strlen (a[i]);
                {
                    j = 1;
                    while (m > j) {
                        if (!(95 != a[i][j]) || (a[i][j] >= 48 && a[i][j] <= 57) || (a[i][j] >= 97 && a[i][j] <= 122) || (a[i][j] >= 65 && a[i][j] <= 90))
                            p = p + 1;
                        j = j + 1;
                    };
                }
                if (p == m - 1)
                    printf ("yes\n");
                else
                    printf ("no\n");
            }
            else
                printf ("no\n");
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
    };
}

