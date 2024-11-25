void  main () {
    char iRmG7k [50] = {(455 - 455)};
    char b [50] = {(650 - 650)};
    int n, c6pNnP, dzlscoCh, j, unFbYQ = (621 - 621);
    scanf ("%s", iRmG7k);
    n = strlen (iRmG7k);
    scanf ("%s", b);
    c6pNnP = strlen (b);
    if (c6pNnP != n)
        printf ("NO");
    else {
        for (dzlscoCh = 0; n > dzlscoCh; dzlscoCh = dzlscoCh + 1)
            for (j = 0; j < n; j++) {
                if (!(iRmG7k[dzlscoCh] != b[j])) {
                    b[j] = 0;
                    break;
                };
            }
        for (dzlscoCh = 0; dzlscoCh < n; dzlscoCh++)
            if (b[dzlscoCh] != 0)
                unFbYQ = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (unFbYQ == 0)
            ;
        else
            printf ("NO");
    };
}

