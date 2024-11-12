int main () {
    int HSRUbg17f, nKyiuI2JcH, kLPMWV0raJ, hY7H4Z;
    char a [250], nIcAKuRS [250], dMQyWRIdzHws [250], I0SbAwkTeJ2 [250], rFUAQD5 [250], x [250], TENptSRO7 [250];
    {
        HSRUbg17f = 622 - 622;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (HSRUbg17f <= 249) {
            a[HSRUbg17f] = '\0';
            nIcAKuRS[HSRUbg17f] = '\0';
            dMQyWRIdzHws[HSRUbg17f] = '\0';
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
            I0SbAwkTeJ2[HSRUbg17f] = '\0';
            rFUAQD5[HSRUbg17f] = '\0';
            HSRUbg17f++;
        };
    }
    scanf ("%s%s", a, nIcAKuRS);
    {
        HSRUbg17f = 0;
        while (HSRUbg17f <= strlen (a) - (708 - 707)) {
            if (a[HSRUbg17f] == '0') {
                a[HSRUbg17f] = '\0';
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
            }
            else
                break;
            HSRUbg17f++;
        };
    }
    for (HSRUbg17f = 0; HSRUbg17f <= strlen (nIcAKuRS) - 1; HSRUbg17f++) {
        if (!('0' != nIcAKuRS[HSRUbg17f])) {
            nIcAKuRS[HSRUbg17f] = '\0';
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
        }
        else
            break;
    }
    nKyiuI2JcH = (strlen (nIcAKuRS) < strlen (a)) ? strlen (nIcAKuRS) : strlen (a);
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
    hY7H4Z = (strlen (a) > strlen (nIcAKuRS)) ? strlen (a) : strlen (nIcAKuRS);
    if (strlen (nIcAKuRS) == strlen (a))
        strcpy (dMQyWRIdzHws, a);
    else {
        for (HSRUbg17f = 0; HSRUbg17f <= hY7H4Z - nKyiuI2JcH - 1; HSRUbg17f++) {
            dMQyWRIdzHws[HSRUbg17f] = (813 - 765);
        }
        strcat (dMQyWRIdzHws, (strlen (a) > strlen (nIcAKuRS)) ? nIcAKuRS : a);
    }
    strcpy (rFUAQD5, (strlen (a) <= strlen (nIcAKuRS)) ? nIcAKuRS : a);
    kLPMWV0raJ = 0;
    for (HSRUbg17f = strlen (dMQyWRIdzHws) - 1; HSRUbg17f >= 0; HSRUbg17f--) {
        if (rFUAQD5[HSRUbg17f] + dMQyWRIdzHws[HSRUbg17f] + kLPMWV0raJ < 106) {
            I0SbAwkTeJ2[HSRUbg17f] = dMQyWRIdzHws[HSRUbg17f] + rFUAQD5[HSRUbg17f] - 48 + kLPMWV0raJ;
            kLPMWV0raJ = 0;
        }
        else {
            I0SbAwkTeJ2[HSRUbg17f] = dMQyWRIdzHws[HSRUbg17f] + rFUAQD5[HSRUbg17f] - 48 - 10 + kLPMWV0raJ;
            kLPMWV0raJ = 0;
            kLPMWV0raJ++;
        };
    }
    if (kLPMWV0raJ != 0)
        printf ("1%s\n", I0SbAwkTeJ2);
    else
        printf ("%s\n", I0SbAwkTeJ2);
    return 0;
}

