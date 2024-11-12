void  main () {
    char JQRqBcd [(609 - 559)] [(357 - 337)], str [(323 - 273)] [(593 - 573)], c;
    int i;
    int n;
    int d;
    int k;
    scanf ("%d", &n);
    for (i = (518 - 518); i <= n; i++)
        gets (JQRqBcd[i]);
    for (i = (121 - 121); i <= n; i++) {
        d = strlen (JQRqBcd[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if ((c = JQRqBcd[i][d - (659 - 658)]) == 'r' || (c = JQRqBcd[i][d - (584 - 583)]) == 'y') {
            {
                k = 100 - 100;
                while (k < d - (877 - 875)) {
                    str[i][k] = JQRqBcd[i][k];
                    k = k + 1;
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
            str[i][d - 2] = '\0';
        }
        else {
            if ((c = JQRqBcd[i][d - (767 - 766)]) == 'g') {
                for (k = (234 - 234); k < d - (348 - 345); k = k + 1)
                    str[i][k] = JQRqBcd[i][k];
                str[i][d - 3] = '\0';
            }
            else {
                for (k = 0; k < d; k++)
                    str[i][k] = JQRqBcd[i][k];
                str[i][d] = '\0';
            };
        };
    }
    {
        i = 0;
        while (i <= n) {
            puts (str [i]);
            i++;
        };
    };
}

