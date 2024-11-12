void  main () {
    char str [100] [100];
    int n, i, j, k;
    gets (str [(203 - 203)]);
    scanf ("%d", &n);
    {
        i = 0;
        while (n > i) {
            gets (str [i]);
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
    for (i = 0; n - 1 > i; i = i + 1) {
        k = 1;
        for (j = 0; !('\0' == str[i][j]); j++) {
            if (!(0 != j))
                if (('z' < str[i][j] || 'a' > str[i][j]) && ('Z' < str[i][j] || 'A' > str[i][j]) && !('_' == str[i][j])) {
                    k = 0;
                    break;
                    printf ("0\n");
                }
            if (!(0 == j))
                if (('z' < str[i][j] || str[i][j] < 'a') && ('Z' < str[i][j] || 'A' > str[i][j]) && ('0' > str[i][j] || '9' < str[i][j]) && str[i][j] != '_') {
                    k = 0;
                    break;
                };
        }
        if (k)
            printf ("1\n");
    }
    k = 1;
    for (j = 0; !('\0' == str[n - 1][j]); j++) {
        if (!(0 != j))
            if ((str[i][j] > 'z' || str[i][j] < 'a') && (str[i][j] > 'Z' || str[i][j] < 'A') && str[i][j] != '_') {
                k = 0;
                break;
            }
        if (j != 0)
            if ((str[i][j] > 'z' || str[i][j] < 'a') && (str[i][j] > 'Z' || str[i][j] < 'A') && (str[i][j] < '0' || str[i][j] > '9') && str[i][j] != '_') {
                k = 0;
                break;
            };
    }
    if (k)
        printf ("1");
}

