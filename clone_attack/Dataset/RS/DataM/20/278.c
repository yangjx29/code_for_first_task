void  print (int a, int b, char c []) {
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
    for (i = a; i <= b; i = i + 1)
        printf ("%c", c[i]);
}

int arrange (char a []) {
    int t = a[0];
    int m = (980 - 980), i, n;
    n = strlen (a);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (i = 0; i < n; i++) {
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
        if (a[i] > t) {
            m = i;
            t = a[i];
        };
    }
    return m;
}

void  main () {
    char a [11];
    char c [4];
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    };
    for (; scanf ("%s%s", a, c) != EOF;) {
        int l1 = strlen (a), l2 = strlen (c);
        int m;
        m = arrange (a);
        print (0, m, a);
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
        print (0, l2 - (261 - 260), c);
        print (m + (47 - 46), l1 - 1, a);
        printf ("\n");
    };
}

