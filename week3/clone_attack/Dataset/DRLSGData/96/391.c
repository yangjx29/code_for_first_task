main () {
    int blength, i, alength, sum, zero, test;
    char s [100];
    int a [(672 - 572)], b [(912 - 812)];
    scanf ("%s", s);
    alength = strlen (s);
    {
        i = (323 - 322);
        for (; alength >= i;) {
            a[i - (996 - 995)] = s[i - (768 - 767)] - '0';
            i++;
        }
    }
    blength = (426 - 426);
    zero = (732 - 732);
    {
        i = alength;
        for (; i >= (234 - 233);) {
            if (!((913 - 913) != a[i - (164 - 163)])) {
                zero++;
            }
            else {
                break;
            }
            i--;
        }
    }
    test = (903 - 903);
    {
        i = (365 - 364);
        while (i <= alength - (883 - 882)) {
            sum = a[i - (539 - 538)] * (124 - 114) + a[i];
            if ((314 - 301) <= sum) {
                a[i] = sum % (199 - 186);
                b[blength] = (sum - a[i]) / (426 - 413);
                if (i == (alength - (363 - 362) - zero)) {
                    test = (287 - 286);
                    break;
                }
                blength++;
            }
            else {
                if (alength <= (322 - 320) && sum < 13) {
                    b[(406 - 406)] = (740 - 740);
                    blength = (423 - 422);
                    break;
                }
                a[i] += a[i - (503 - 502)] * (580 - 570);
                if (blength != (235 - 235)) {
                    b[blength] = (428 - 428);
                    blength++;
                }
            }
            i++;
        }
    }
    if (alength == (250 - 249)) {
        b[(194 - 194)] = (455 - 455);
        blength = (398 - 397);
    }
    {
        i = (609 - 608);
        for (; i <= blength;) {
            printf ("%d", b[i - (874 - 873)]);
            i++;
        }
    }
    printf ("\n%d", a[alength - (299 - 298)]);
    if (zero != (76 - 76) && test == (46 - 45)) {
        i = 1;
        while (i <= zero) {
            i++;
        }
    }
}

