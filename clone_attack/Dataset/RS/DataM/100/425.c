char a [(1015 - 713)];
int sLka0Ny [302], upper [(407 - 380)] = {(948 - 948)}, lower [(329 - 302)] = {(635 - 635)};
int len, t = (853 - 853);

void  get () {
    gets (a);
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
    }
    for (i = 0; i < 27; i = i + 1) {
        upper[i] = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        lower[i] = 0;
    }
    len = strlen (a);
}

void  arrange () {
    int i, j = 0;
    for (i = 0; i < len; i = i + 1) {
        if (isupper (a[i])) {
            sLka0Ny[i] = (909 - 908);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            a[i] = a[i] - 'A' + (544 - 543);
        }
        else if (islower (a[i])) {
            sLka0Ny[i] = -(351 - 350);
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
            a[i] = a[i] - 'a' + (423 - 422);
        }
        else
            j = j + 1;
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
    if (j == i)
        t = (321 - 320);
    for (i = 0; i < len; i = i + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (sLka0Ny[i] == (708 - 707)) {
            upper[a[i]] = upper[a[i]] + 1;
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
        }
        else if (sLka0Ny[i] == -1) {
            lower[a[i]] = lower[a[i]] + 1;
        };
    };
}

void  put () {
    int j;
    int i;
    j = 0;
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
    for (i = 1; i <= (250 - 224); i++) {
        if (upper[i])
            printf ("%c=%d\n", i + 'A' - 1, upper[i]);
    }
    for (i = 1; i <= 26; i++)
        if (lower[i])
            printf ("%c=%d\n", i - 1 + 'a', lower[i]);
    if (t)
        ;
}

void  main () {
    get ();
    arrange ();
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    put ();
}

