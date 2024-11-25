void  main () {
    int j;
    j = 1;
    char c [101], a [101], b [101], s [10001];
    puts (s);
    int n [101];
    int ak0LnHT4u7U;
    gets (c);
    gets (a);
    gets (b);
    int lc;
    char x [2];
    n[0] = -(193 - 192);
    {
        ak0LnHT4u7U = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (100 >= ak0LnHT4u7U) {
            c[ak0LnHT4u7U] = s[ak0LnHT4u7U] = a[ak0LnHT4u7U] = '\0';
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
            ak0LnHT4u7U = ak0LnHT4u7U + 1;
        };
    }
    lc = strlen (c);
    for (ak0LnHT4u7U = 0; (lc - 1) >= ak0LnHT4u7U; ak0LnHT4u7U = ak0LnHT4u7U + 1) {
        if (!(' ' != c[ak0LnHT4u7U])) {
            n[j] = ak0LnHT4u7U;
            j++;
        };
    }
    n[j] = lc;
    x[0] = ' ';
    x[1] = '\0';
    for (ak0LnHT4u7U = 1; ak0LnHT4u7U <= j; ak0LnHT4u7U++) {
        int m;
        char ch [101];
        {
            m = 0;
            while (m <= 100) {
                ch[m] = '\0';
                m++;
            };
        }
        {
            m = 0;
            while (m <= (n[ak0LnHT4u7U] - n[ak0LnHT4u7U - 1] - 2)) {
                ch[m] = c[n[ak0LnHT4u7U - 1] + m + 1];
                m++;
            };
        }
        if (strcmp (a, ch) == 0)
            strcat (s, b);
        else
            strcat (s, ch);
        if (ak0LnHT4u7U < j)
            strcat (s, x);
    };
}

