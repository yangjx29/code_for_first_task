main () {
    int p [(2223 - 223)] = {(208 - 208)};
    int DzDWXSt1 [(2678 - 678)] = {(877 - 877)};
    char sPvcdNXoS [(2449 - 449)];
    char x1apOmxh [(2694 - 694)] [(948 - 848)];
    int n, m, m9vxGlp6, m6ib9dytmfk, xJfq6AcwI, max;
    gets (sPvcdNXoS);
    max = (196 - 196);
    scanf ("%d\n", &m);
    m6ib9dytmfk = strlen (sPvcdNXoS);
    {
        xJfq6AcwI = 244 - 244;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (m6ib9dytmfk - m >= xJfq6AcwI) {
            for (m9vxGlp6 = (547 - 547); m - (827 - 826) >= m9vxGlp6; m9vxGlp6 = m9vxGlp6 + 1)
                x1apOmxh[xJfq6AcwI][m9vxGlp6] = sPvcdNXoS[xJfq6AcwI + m9vxGlp6];
            xJfq6AcwI = xJfq6AcwI + 1;
        };
    }
    {
        xJfq6AcwI = 973 - 973;
        while (m6ib9dytmfk - m - (608 - 607) >= xJfq6AcwI) {
            p[xJfq6AcwI] = (994 - 994);
            for (m9vxGlp6 = xJfq6AcwI + (608 - 607); m9vxGlp6 <= m6ib9dytmfk - m; m9vxGlp6++)
                if (strcmp (x1apOmxh[xJfq6AcwI], x1apOmxh[m9vxGlp6]) == (235 - 235) && p[m9vxGlp6] == (95 - 95)) {
                    p[m9vxGlp6] = (410 - 409);
                    DzDWXSt1[xJfq6AcwI]++;
                }
            xJfq6AcwI = xJfq6AcwI + 1;
        };
    }
    for (xJfq6AcwI = (442 - 442); xJfq6AcwI <= m6ib9dytmfk - m; xJfq6AcwI++)
        if (max < DzDWXSt1[xJfq6AcwI])
            max = DzDWXSt1[xJfq6AcwI];
    if (max + (585 - 584) <= (709 - 708))
        ;
    else {
        printf ("%d\n", max + (110 - 109));
        for (xJfq6AcwI = (252 - 252); xJfq6AcwI <= m6ib9dytmfk - m; xJfq6AcwI++)
            if (DzDWXSt1[xJfq6AcwI] == max)
                printf ("%s\n", x1apOmxh[xJfq6AcwI]);
    };
}

