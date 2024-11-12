void  main () {
    char str [100], c;
    gets (str);
    int i, n, a, b, j, k, line;
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
    n = strlen (str);
    b = n - 1;
    {
        i = n - 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (0 <= i) {
            if (!(' ' != str[i])) {
                a = i;
                {
                    j = a + 1;
                    while (b >= j) {
                        printf ("%c", str[j]);
                        if (j == b)
                            ;
                        j = j + 1;
                    };
                }
                b = a - 1;
            }
            if (i == 0) {
                for (k = 0; k <= b; k++)
                    printf ("%c", str[k]);
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
            i--;
        };
    };
}

