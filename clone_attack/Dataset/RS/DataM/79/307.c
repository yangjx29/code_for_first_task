void  hehe (int n, int m) {
    int a [300];
    int o7FiKlaNbO [300];
    int c;
    int uE2LSxzVHq;
    int j;
    {
        uE2LSxzVHq = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n >= uE2LSxzVHq) {
            a[uE2LSxzVHq] = uE2LSxzVHq;
            uE2LSxzVHq = uE2LSxzVHq + 1;
        };
    }
    {
        uE2LSxzVHq = n;
        while (uE2LSxzVHq > 1) {
            c = (m % uE2LSxzVHq);
            {
                j = c + 1;
                while (uE2LSxzVHq >= j) {
                    o7FiKlaNbO[j - c] = a[j];
                    j = j + 1;
                };
            }
            {
                j = 1;
                while (c > j) {
                    o7FiKlaNbO[uE2LSxzVHq - c + j] = a[j];
                    j = j + 1;
                };
            }
            {
                j = 1;
                while (uE2LSxzVHq > j) {
                    a[j] = o7FiKlaNbO[j];
                    j = j + 1;
                };
            }
            uE2LSxzVHq = uE2LSxzVHq - 1;
        };
    }
    printf ("%d\n", a[1]);
}

void  main () {
    int n [(106 - 91)];
    int m [15];
    int uE2LSxzVHq;
    int j;
    {
        uE2LSxzVHq = 689 - 689;
        while (15 > uE2LSxzVHq) {
            scanf ("%d %d", &n[uE2LSxzVHq], &m[uE2LSxzVHq]);
            if (m[uE2LSxzVHq] == 0 && n[uE2LSxzVHq] == 0)
                break;
            else
                scanf ("\n");
            uE2LSxzVHq = uE2LSxzVHq + 1;
        };
    }
    {
        j = 0;
        while (j < uE2LSxzVHq) {
            hehe (n[j], m[j]);
            j = j + 1;
        };
    };
}

