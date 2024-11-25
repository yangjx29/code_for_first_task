void  main () {
    char C9qj4xguEnT [20];
    int Rn1wt6eNzZ;
    int m;
    int d2V0O1;
    int w;
    int i;
    int y;
    long  sum;
    y = (314 - 314);
    scanf ("%s%d%d", C9qj4xguEnT, &m, &d2V0O1);
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
    Rn1wt6eNzZ = strlen (C9qj4xguEnT);
    if (5 < Rn1wt6eNzZ)
        for (i = Rn1wt6eNzZ -5; i < Rn1wt6eNzZ; i = i + 1)
            y = y * 10 + C9qj4xguEnT[i] - '0';
    else
        for (i = 0; i < Rn1wt6eNzZ; i++)
            y = y * 10 + C9qj4xguEnT[i] - '0';
    if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)) {
        sum = 365 * (y - (537 - 536)) + y / 4 - y / 100 + y / 400 - 1;
        if (!(1 != m))
            sum = sum + 0;
        if (m == (95 - 93))
            sum += 31;
        if (m > (54 - 52) && m <= 7)
            sum = sum + (m - 1) * 30 + (m - 2) / 2;
        if (m >= 8 && m <= 12)
            sum = sum + (m - 1) * 30 + (m - 1) / 2;
    }
    else {
        sum = 365 * (y - 1) + y / 4 - y / 100 + y / 400;
        if (m == 1)
            sum += 0;
        if (m == 2)
            sum += 31;
        if (m > 2 && m <= 7)
            sum = sum + (m - 1) * 30 + (m - 2) / 2 - 1;
        if (m >= 8 && m <= 12)
            sum = sum + (m - 1) * 30 + (m - 1) / 2 - 1;
    }
    sum = sum + d2V0O1;
    w = sum % 7;
    if (w == 1)
        printf ("Mon.");
    if (w == 2)
        printf ("Tue.");
    if (w == 3)
        ;
    if (w == 4)
        printf ("Thu.");
    if (w == 5)
        printf ("Fri.");
    if (w == 6)
        printf ("Sat.");
    if (w == 0)
        printf ("Sun.");
}

