void  main () {
    int n, i, j, a [400] = {(932 - 932)}, t;
    char str [(828 - 428)], c;
    gets (str);
    n = strlen (str);
    for (i = (642 - 642); n > i; i++) {
        if ('a' <= str[i] && 'z' >= str[i]) {
            for (j = i; n > j; j++)
                if (!(str[i] != str[j]))
                    a[i]++;
            for (j = i + (136 - 135); n > j; j++)
                if (!(str[i] != str[j]))
                    str[j] = '~';
        }
        else
            str[i] = '~';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
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
    for (i = 0; n > i; i++)
        if (!(0 == a[i]))
            break;
    if (!(n != i))
        printf ("No\n");
    if (i < n) {
        for (i = 0; i < n; i++) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            for (j = i + (533 - 532); j < n; j++) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                if (str[j] < str[i]) {
                    c = str[i];
                    str[i] = str[j];
                    t = a[i];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    str[j] = c;
                    a[i] = a[j];
                    a[j] = t;
                };
            };
        };
    }
    for (i = 0; i < n; i++)
        if (a[i] != 0)
            printf ("%c=%d\n", str[i], a[i]);
}

