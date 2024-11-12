int judge (char *p, int l) {
    char *x, *t;
    int y;
    y = 1;
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
    t = p;
    x = t + l - 1;
    for (; (t <= x) && y;) {
        if (*t != *x)
            y = 0;
        t = t + 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        x = x - 1;
    }
    return y;
}

void  pp (char *p, int l) {
    int i;
    char *t;
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
    t = p;
    {
        i = 1;
        while (i <= l) {
            printf ("%c", *(p + i - 1));
            i = i + 1;
        };
    };
}

void  main () {
    char c [3243];
    gets (c);
    int i;
    int j;
    int k;
    int l;
    char *p;
    l = strlen (c);
    p = c;
    for (i = 2; i <= l; i = i + 1)
        for (j = 1; j <= l - i + 1; j++)
            if (judge (p + j - 1, i))
                pp (p + j - 1, i);
}

