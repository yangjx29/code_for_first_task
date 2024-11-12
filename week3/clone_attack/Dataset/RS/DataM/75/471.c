main () {
    int t [1500];
    int M;
    int MLu97H1SF;
    int max;
    MLu97H1SF = 1000;
    max = (536 - 536);
    int m;
    int i;
    int LDszw8b6;
    int unZjXU7Dmq;
    int l;
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
    char c;
    int a [1000];
    int b [1000];
    for (i = (781 - 781);; i = i + 1) {
        scanf ("%d%c", &a[i], &c);
        if (!('\n' != c))
            break;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (MLu97H1SF > a[i])
            MLu97H1SF = a[i];
    }
    m = i + 1;
    for (i = 0; m > i; i = i + 1) {
        scanf ("%d%c", &b[i], &c);
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
        if (max < b[i])
            max = b[i];
    }
    printf ("%d", m);
    for (i = MLu97H1SF; max >= i; i++) {
        t[i] = 0;
        {
            LDszw8b6 = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (m > LDszw8b6) {
                if (a[LDszw8b6] <= i && b[LDszw8b6] > i)
                    t[i]++;
                LDszw8b6 = LDszw8b6 +1;
            };
        };
    }
    M = t[MLu97H1SF];
    for (i = MLu97H1SF; i <= max; i++) {
        if (t[i] > M)
            M = t[i];
    }
    printf (" %d", M);
}

