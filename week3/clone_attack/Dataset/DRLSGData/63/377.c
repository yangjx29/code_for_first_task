main () {
    int qIcGjOQ [(324 - 223)] [101];
    int F8H62CtyZSo [101] [101];
    int XPIVlbvroaF [101] [101];
    int F9umc1xr;
    int LhrKdCw8R;
    int efAawhY;
    int y4w3Pa95;
    int toSd4O;
    int h3L78cEmAxp1;
    int dQ80gX6;
    scanf ("%d %d", &F9umc1xr, &LhrKdCw8R);
    {
        toSd4O = (686 - 685);
        while (F9umc1xr >= toSd4O) {
            {
                h3L78cEmAxp1 = (715 - 714);
                while (h3L78cEmAxp1 <= LhrKdCw8R) {
                    scanf ("%d", &qIcGjOQ[toSd4O][h3L78cEmAxp1]);
                    h3L78cEmAxp1++;
                }
            }
            toSd4O++;
        }
    }
    scanf ("%d %d", &efAawhY, &y4w3Pa95);
    {
        toSd4O = 1;
        while (toSd4O <= efAawhY) {
            {
                h3L78cEmAxp1 = 1;
                while (y4w3Pa95 >= h3L78cEmAxp1) {
                    scanf ("%d", &F8H62CtyZSo[toSd4O][h3L78cEmAxp1]);
                    h3L78cEmAxp1++;
                }
            }
            toSd4O++;
        }
    }
    {
        toSd4O = 1;
        while (toSd4O <= F9umc1xr) {
            h3L78cEmAxp1 = 1;
            while (h3L78cEmAxp1 <= y4w3Pa95) {
                XPIVlbvroaF[toSd4O][h3L78cEmAxp1] = 0;
                {
                    dQ80gX6 = 0;
                    while (dQ80gX6 <= efAawhY) {
                        XPIVlbvroaF[toSd4O][h3L78cEmAxp1] = XPIVlbvroaF[toSd4O][h3L78cEmAxp1] + qIcGjOQ[toSd4O][dQ80gX6] * F8H62CtyZSo[dQ80gX6][h3L78cEmAxp1];
                        dQ80gX6++;
                    }
                }
                h3L78cEmAxp1++;
            }
            toSd4O++;
        }
    }
    {
        toSd4O = 1;
        while (toSd4O <= (F9umc1xr -1)) {
            printf ("%d", XPIVlbvroaF[toSd4O][1]);
            {
                h3L78cEmAxp1 = (453 - 451);
                while (h3L78cEmAxp1 <= y4w3Pa95) {
                    printf (" %d", XPIVlbvroaF[toSd4O][h3L78cEmAxp1]);
                    h3L78cEmAxp1++;
                }
            }
            printf ("\n");
            toSd4O++;
        }
    }
    printf ("%d", XPIVlbvroaF[F9umc1xr][1]);
    {
        h3L78cEmAxp1 = 2;
        while (h3L78cEmAxp1 <= y4w3Pa95) {
            printf (" %d", XPIVlbvroaF[F9umc1xr][h3L78cEmAxp1]);
            h3L78cEmAxp1++;
        }
    }
}

