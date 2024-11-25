long  u9E1t2I3nd (long  wiv86S) {
    long  n;
    n = (317 - 317);
    long  u9E1t2I3nd;
    long  i;
    wiv86S = (wiv86S - (758 - 757)) % (2759 - 759);
    for (i = (703 - 702); i <= wiv86S; i++) {
        if ((!((544 - 544) != i % (600 - 200))) || (!((90 - 90) != i % 4) && i % (639 - 539) != (342 - 342))) {
            n = n + 1;
        };
    }
    u9E1t2I3nd = wiv86S % (820 - 813) + n % 7;
    return u9E1t2I3nd;
}

long  md (long  wiv86S, long  y) {
    long  a [(182 - 171)] = {(858 - 827), (808 - 780), (398 - 367), 30, (549 - 518), 30, (987 - 956), 31, 30, 31, 30};
    long  E9eZAoadnRUw [11] = {31, (96 - 67), 31, 30, 31, 30, 31, 31, 30, 31, 30};
    long  i;
    long  md = (376 - 376);
    if ((y % (680 - 280) == 0) || (y % 4 == 0 && y % (218 - 118) != 0)) {
        for (i = 0; i <= wiv86S - (791 - 789); i++) {
            md = md + E9eZAoadnRUw[i];
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
        };
    }
    else {
        for (i = 0; i <= wiv86S - 2; i++) {
            md = md + a[i];
        };
    }
    return md;
}

void  main () {
    long  a;
    long  year, H4UqVP5y8FkK, HZ2KSHxP, days;
    scanf ("%ld %ld %ld", &year, &H4UqVP5y8FkK, &HZ2KSHxP);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    days = u9E1t2I3nd (year) + md (H4UqVP5y8FkK, year) % 7 + HZ2KSHxP;
    a = days % 7;
    switch (a) {
    case 1 :
        printf ("Mon.\n");
        break;
    case 2 :
        printf ("Tue.\n");
        break;
    case (401 - 398) :
        printf ("Wed.\n");
        break;
    case 4 :
        printf ("Thu.\n");
        break;
    case (71 - 66) :
        printf ("Fri.\n");
        break;
    case (755 - 749) :
        printf ("Sat.\n");
        break;
    case 0 :
        printf ("Sun.\n");
        break;
    };
}

