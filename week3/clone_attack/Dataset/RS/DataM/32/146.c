void  mAvDp0glO3 (char a [(490 - 389)]) {
    int i;
    int n;
    n = strlen (a);
    for (i = 0; n > i; i = i + 1) {
        a[i] = a[i + 1];
    }
    if (!('0' != a[0]))
        mAvDp0glO3 (a);
}

void  doit (char a [101], char b [101]) {
    int x;
    int y;
    int i;
    int m;
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
    x = strlen (a);
    y = strlen (b);
    for (i = 0; y > i; i++) {
        m = a[x - 1 - i] - b[y - 1 - i] + (507 - 459);
        if (48 > m) {
            a[x - 2 - i] = a[x - 2 - i] - 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            m = m + 10;
        }
        a[x - 1 - i] = m;
    }
    if (a[0] == '0')
        mAvDp0glO3 (a);
}

void  main () {
    int n;
    int i;
    char a [20] [101];
    char b [20] [101];
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
    scanf ("%d", &n);
    scanf ("%s", a[0]);
    scanf ("%s", b[0]);
    {
        i = 1;
        while (i < n) {
            getchar ();
            scanf ("%s", a[i]);
            scanf ("%s", b[i]);
            i++;
        };
    }
    {
        i = 0;
        while (i < n) {
            doit (a[i], b[i]);
            printf ("%s\n", a[i]);
            i++;
        };
    };
}

