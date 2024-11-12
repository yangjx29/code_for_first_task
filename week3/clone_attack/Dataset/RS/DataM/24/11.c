void  main () {
    int p926ftGw [(1085 - 885)] = {(92 - 92)}, l, i, vMTrq4K5k = (572 - 571), W8AmobJ9g [200] = {(536 - 536)}, max = (474 - 473), IjuC0Xs2LcOS = 1;
    char a [(10458 - 458)];
    gets (a);
    putchar ('\n');
    for (i = 0; i < strlen (a); i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (a[i] != ' ' && a[i] != ',') {
            p926ftGw[vMTrq4K5k]++;
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
            };
        }
        else {
            if (a[i] == ' ') {
                W8AmobJ9g[vMTrq4K5k] = i;
                vMTrq4K5k++;
            };
        };
    }
    W8AmobJ9g[vMTrq4K5k] = strlen (a);
    {
        i = 1;
        while (i <= vMTrq4K5k) {
            if (p926ftGw[max] < p926ftGw[i])
                max = i;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            i = i + 1;
        };
    }
    {
        i = 1;
        while (i <= vMTrq4K5k) {
            if (p926ftGw[IjuC0Xs2LcOS] > p926ftGw[i])
                IjuC0Xs2LcOS = i;
            i++;
        };
    }
    {
        l = max;
        while (l < W8AmobJ9g[max] && a[l] != ',') {
            printf ("%c", a[l]);
            l = l + 1;
        };
    }
    for (l = W8AmobJ9g[IjuC0Xs2LcOS] - p926ftGw[IjuC0Xs2LcOS]; l < W8AmobJ9g[IjuC0Xs2LcOS] && a[l] != ','; l = l + 1)
        printf ("%c", a[l]);
}

