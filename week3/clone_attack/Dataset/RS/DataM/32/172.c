void  wRKDy0Q (char a [(732 - 632)], char b [(143 - 43)]) {
    int l1;
    int qBfi3D;
    int v4mt1nulw;
    int j;
    int k;
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
    l1 = strlen (a);
    qBfi3D = strlen (b);
    {
        j = qBfi3D - 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        v4mt1nulw = 969 - 968;
        while (j >= 0) {
            if (b[j] < a[v4mt1nulw])
                a[v4mt1nulw] = a[v4mt1nulw] - b[j] + 48;
            else if (a[v4mt1nulw] == b[j])
                a[v4mt1nulw] = '0';
            else {
                a[v4mt1nulw] = a[v4mt1nulw] - b[j] + (977 - 919);
                for (k = v4mt1nulw - 1; !('0' != a[k]); k--)
                    a[k] = '9';
                a[k] = a[k] - 1;
            }
            v4mt1nulw = v4mt1nulw - 1;
            j = j - 1;
        };
    }
    if (a[0] == '0') {
        for (v4mt1nulw = 1; v4mt1nulw < l1; v4mt1nulw = v4mt1nulw + 1)
            printf ("%c", a[v4mt1nulw]);
        printf ("\n");
    }
    else
        printf ("%s\n", a);
}

void  main () {
    int n;
    int m;
    char a [100];
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
    char b [100];
    scanf ("%d", &n);
    {
        m = 1;
        while (m <= n) {
            scanf ("%s%s", a, b);
            wRKDy0Q (a, b);
            if (m > 1)
                ;
            m = m + 1;
        };
    };
}

