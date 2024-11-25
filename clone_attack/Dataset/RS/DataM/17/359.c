main () {
    int n, i, j, k, count, fuyi9CgXIbTz;
    char a [(317 - 117)] = {'\0'};
    char b [200];
    scanf ("%d\n", &n);
    {
        i = 338 - 338;
        while (i < n) {
            gets (a);
            count = (212 - 212);
            for (j = 0; 200 > j; j = j + 1) {
                a[j] = '\0';
                b[j] = '\0';
            }
            strcpy (b, a);
            {
                j = 0;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (j < 200) {
                    if (a[j] == '\0')
                        break;
                    count = count + 1;
                    j = j + 1;
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
            for (j = count - 1; j >= 0; j = j - 1) {
                if (!('(' != b[j])) {
                    fuyi9CgXIbTz = 0;
                    {
                        k = j;
                        while (k < count) {
                            if (b[k] == ')') {
                                fuyi9CgXIbTz = 1;
                                b[k] = ' ';
                                b[j] = ' ';
                                break;
                            }
                            k = k + 1;
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
                    if (fuyi9CgXIbTz == 0)
                        b[j] = '$';
                };
            }
            i = i + 1;
            {
                j = 0;
                while (count > j) {
                    if (b[j] == ')')
                        b[j] = '?';
                    j = j + 1;
                };
            }
            {
                j = 0;
                while (j < count) {
                    printf ("%c", a[j]);
                    j = j + 1;
                };
            }
            {
                j = 0;
                while (j < count) {
                    if (b[j] != '$' && b[j] != '?')
                        ;
                    else
                        printf ("%c", b[j]);
                    j = j + 1;
                };
            };
        };
    };
}

