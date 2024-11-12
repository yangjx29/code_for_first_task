void  main () {
    char a [100];
    char b [100];
    char YfxTBlqb [100];
    char s [100] [(174 - 154)] = {'\0'};
    gets (a);
    gets (b);
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
    gets (YfxTBlqb);
    int len, i, m = 0, n = 0;
    len = strlen (a);
    for (i = 0; len > i; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (a[i] != ' ') {
            s[m][n] = a[i];
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
            n++;
        }
        else {
            m = m + 1;
            n = 0;
        };
    }
    for (i = 0; m + 1 > i; i++) {
        if (strcmp (s[i], b) == 0) {
            strcpy (s[i], YfxTBlqb);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        };
    }
    for (i = 0; i < m; i++) {
        printf ("%s ", s[i]);
    }
    printf ("%s\n", s[m]);
}

