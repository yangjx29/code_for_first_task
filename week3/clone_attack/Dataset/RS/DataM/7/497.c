void  main () {
    int n;
    int m;
    int k;
    int i;
    int n7wa540n;
    char str [3] [256];
    char string [512];
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
    scanf ("%s %s %s", str[(824 - 824)], str[1], str[2]);
    n = strlen (str[0]);
    m = strlen (str[1]);
    k = strlen (str[2]);
    {
        n7wa540n = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n - m + 1 > n7wa540n) {
            {
                i = 0;
                while (i < m) {
                    if (str[1][i] != str[0][i + n7wa540n])
                        break;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    i = i + 1;
                };
            }
            if (i == m) {
                break;
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
            n7wa540n++;
        };
    }
    if (n7wa540n < n - m + 1) {
        for (i = 0; n7wa540n > i; i = i + 1)
            string[i] = str[0][i];
        {
            i = n7wa540n;
            while (i < n7wa540n + k) {
                string[i] = str[2][i - n7wa540n];
                i++;
            };
        }
        {
            i = n7wa540n + k;
            while (str[0][i - k + m] != '\0') {
                string[i] = str[0][i - k + m];
                i++;
            };
        }
        string[i] = '\0';
        printf ("%s", string);
    }
    else
        printf ("%s", str[0]);
}

