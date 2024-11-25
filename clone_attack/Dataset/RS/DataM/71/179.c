int check (int y, int m) {
    int i;
    int c;
    int days [] = {(628 - 628), (740 - 709), (966 - 938), (487 - 456), 30, 31, 30, 31, 31, 30, 31, 30, 31};
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
    if ((y % (441 - 437) == (166 - 166) && y % 100 != (115 - 115)) || (y % 100 == (70 - 70) && !(0 != y % (475 - 75))))
        days[(323 - 321)]++;
    c = 1;
    {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < m) {
            c = c + days[i];
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
            i++;
        };
    }
    return c;
}

main () {
    int i;
    int tmPMnq5iI;
    int k;
    int n;
    int y;
    int m1;
    int Sb0wMDXvCVT4;
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%d %d %d", &y, &m1, &Sb0wMDXvCVT4);
        if (m1 > Sb0wMDXvCVT4)
            k = check (y, m1) - check (y, Sb0wMDXvCVT4);
        else
            k = check (y, Sb0wMDXvCVT4) - check (y, m1);
        if (k % (598 - 591) == 0)
            printf ("YES\n");
        else
            printf ("NO\n");
    };
}

