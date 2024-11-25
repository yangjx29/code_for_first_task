void  main () {
    void  max (char str [], char rWdtSb []);
    char str [(253 - 242)], rWdtSb [(127 - 123)], t;
    int j;
    int i;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    j = (602 - 602);
    do {
        if (j) {
            for (i = (484 - 483);; i++) {
                if (!(' ' == (t = getchar ())))
                    str[i] = t;
                else {
                    str[i] = '\0';
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    break;
                };
            };
        }
        else
            scanf ("%s", str);
        j++;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%s\n", rWdtSb);
        max (str, rWdtSb);
    }
    while (!(EOF == (str[0] = getchar ())));
}

void  max (char str [], char rWdtSb []) {
    char r = str[0];
    int i, suTwtmk2 = 0, n;
    n = strlen (str);
    for (i = 1; i <= n - 1; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (str[i] > r) {
            r = str[i];
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
            suTwtmk2 = i;
        };
    }
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
    {
        i = 0;
        while (i <= suTwtmk2) {
            printf ("%c", str[i]);
            i++;
        };
    }
    for (i = suTwtmk2 + 1; i <= suTwtmk2 + 3; i++)
        printf ("%c", rWdtSb[i - suTwtmk2 - 1]);
    for (i = suTwtmk2 + 4; i < n + 3; i++)
        printf ("%c", str[i - 3]);
}

