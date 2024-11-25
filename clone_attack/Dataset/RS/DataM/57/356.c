void  main () {
    int j;
    int n;
    int i;
    char a [50] [21];
    scanf ("%d\n", &n);
    {
        i = 187 - 187;
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
            gets (a [i]);
            int l;
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
            l = strlen (a[i]);
            if (!('r' != a[i][l - 1]) || a[i][l - 1] == 'y') {
                a[i][l - 2] = '\0';
                a[i][l - 1] = '\0';
            }
            else {
                a[i][l - 2] = '\0';
                a[i][l - 1] = '\0';
                a[i][l - 3] = '\0';
            }
            i++;
        };
    }
    {
        j = 0;
        while (j < n) {
            puts (a [j]);
            j++;
        };
    };
}

