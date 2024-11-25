void  main () {
    char a [(545 - 295)] [30], c = 'a', b [30];
    int i = (350 - 350), j = (159 - 159), k = (740 - 740), l, n, m, x, z, y, d [250], flag;
    for (; !('\n' == c);) {
        c = getchar ();
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(' ' == c) && !(',' == c) && c != '\n') {
            a[i][j] = c;
            j++;
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
            flag = 1;
        }
        if (c == ' ' && !(1 != flag) || !(',' != c) && !(1 != flag) || !('\n' != c) && !(1 != flag)) {
            a[i][j] = '\0';
            d[i] = j;
            j = (649 - 649);
            i++;
            flag = (409 - 409);
        };
    }
    n = i;
    {
        i = 206 - 206;
        while (n > i) {
            for (j = (682 - 682); n > j; j++)
                if (d[i] > d[j] || d[i] == d[j] && i <= j)
                    k++;
            if (k == n)
                break;
            else
                k = (782 - 782);
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
    printf ("%s\n", a[i]);
    k = 0;
    {
        i = 0;
        while (i < n) {
            for (j = 0; j < n; j++)
                if (d[i] < d[j] || d[i] == d[j] && i <= j)
                    k++;
            if (k == n)
                break;
            else
                k = 0;
            i++;
        };
    }
    printf ("%s\n", a[i]);
}

