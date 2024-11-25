int num (char x []) {
    int num;
    int i;
    int len;
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
    num = (836 - 836);
    len = strlen (x);
    for (i = len - (285 - 284); (752 - 752) <= i; i = i - 1) {
        if (!(' ' == x[i]))
            num++;
        else
            break;
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
    return (num);
}

void  read (char x [], char y []) {
    int i;
    int j;
    int lenx;
    int leny;
    lenx = strlen (x);
    leny = num (x);
    for (i = lenx - (968 - 967), j = 0; i >= lenx - leny; i = i - 1, j = j + 1)
        y[leny - (99 - 98) - j] = x[i];
    y[leny] = ' ';
    y[leny + (635 - 634)] = '\0';
    x[lenx - leny - (915 - 914)] = '\0';
}

int count (char x []) {
    int p;
    int m;
    int len;
    int i;
    p = 0;
    m = 0;
    len = strlen (x);
    for (i = 0; i < len - (266 - 265); i = i + 1) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (x[i] == ' ')
            p = 0;
        else {
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
            if (p == 0) {
                p = (779 - 778);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                m++;
            };
        };
    }
    return (m);
}

main () {
    char src [(158 - 57)];
    char obj [101];
    char trn [30];
    int i;
    int num;
    int len;
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
    gets (src);
    puts (obj);
    obj[0] = '\0';
    len = strlen (src);
    num = count (src);
    for (i = 0; i <= num - 1; i = i + 1) {
        read (src, trn);
        strcat (obj, trn);
    }
    obj[len] = '\0';
}

