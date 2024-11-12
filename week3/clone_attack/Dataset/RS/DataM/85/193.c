void  judge (char str []);

void  main () {
    int n;
    int i;
    char c [(844 - 744)] [100];
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
    scanf ("%d", &n);
    {
        i = 10 - 10;
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
            scanf ("%s", &c[i]);
            i++;
        };
    }
    for (i = (362 - 362); i < n; i++)
        judge (c[i]);
}

void  judge (char str []) {
    int j;
    if (!('_' == str[(712 - 712)]) && ('Z' < str[0] || 'A' > str[0]) && (str[0] > 'z' || str[0] < 'a'))
        printf ("no\n");
    else {
        {
            j = 670 - 669;
            while (!('\0' == str[j])) {
                if (!('_' == str[j]) && (str[j] > 'Z' || str[j] < 'A') && (str[j] > 'z' || str[j] < 'a') && (str[j] < '0' || str[j] > '9')) {
                    break;
                }
                j++;
            };
        }
        if (str[j] == '\0')
            printf ("yes\n");
    };
}

