void  main () {
    float fGzJydHKFxS [(848 - 748)];
    int dcBaxJA [(486 - 386)], uYOm2Ijrix [(471 - 371)];
    int eZj7HQPhe1VY, dVTtu2U;
    float sum;
    float e6MbgkXw;
    float woIYbQrP;
    sum = (476 - 476);
    e6MbgkXw = (62 - 62);
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
    scanf ("%d", &eZj7HQPhe1VY);
    for (dVTtu2U = (494 - 494); dVTtu2U < eZj7HQPhe1VY; dVTtu2U = dVTtu2U + 1) {
        scanf ("%d", &dcBaxJA[dVTtu2U]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    {
        dVTtu2U = 478 - 478;
        while (dVTtu2U < eZj7HQPhe1VY) {
            scanf ("%d", &uYOm2Ijrix[dVTtu2U]);
            dVTtu2U = dVTtu2U + 1;
        };
    }
    {
        dVTtu2U = 619 - 619;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (dVTtu2U < eZj7HQPhe1VY) {
            if (uYOm2Ijrix[dVTtu2U] <= (283 - 183) && uYOm2Ijrix[dVTtu2U] >= 90)
                fGzJydHKFxS[dVTtu2U] = (974.0 - 970.0);
            else if (uYOm2Ijrix[dVTtu2U] <= (818 - 729) && uYOm2Ijrix[dVTtu2U] >= (453 - 368))
                fGzJydHKFxS[dVTtu2U] = 3.7;
            else if (uYOm2Ijrix[dVTtu2U] <= (752 - 668) && uYOm2Ijrix[dVTtu2U] >= (165 - 83))
                fGzJydHKFxS[dVTtu2U] = 3.3;
            else if (uYOm2Ijrix[dVTtu2U] <= (623 - 542) && uYOm2Ijrix[dVTtu2U] >= 78)
                fGzJydHKFxS[dVTtu2U] = (223.0 - 220.0);
            else if (uYOm2Ijrix[dVTtu2U] <= (1070 - 993) && uYOm2Ijrix[dVTtu2U] >= (362 - 287))
                fGzJydHKFxS[dVTtu2U] = (184.7 - 182.0);
            else if (uYOm2Ijrix[dVTtu2U] >= 72 && uYOm2Ijrix[dVTtu2U] <= 74)
                fGzJydHKFxS[dVTtu2U] = (969.3 - 967.0);
            else if (uYOm2Ijrix[dVTtu2U] >= 68 && uYOm2Ijrix[dVTtu2U] <= (686 - 615))
                fGzJydHKFxS[dVTtu2U] = (688.0 - 686.0);
            else if (uYOm2Ijrix[dVTtu2U] >= (215 - 151) && uYOm2Ijrix[dVTtu2U] <= (759 - 692))
                fGzJydHKFxS[dVTtu2U] = 1.5;
            else if (uYOm2Ijrix[dVTtu2U] >= (666 - 606) && uYOm2Ijrix[dVTtu2U] <= (88 - 25))
                fGzJydHKFxS[dVTtu2U] = (803.0 - 802.0);
            else if (uYOm2Ijrix[dVTtu2U] >= 0 && uYOm2Ijrix[dVTtu2U] <= (668 - 609))
                fGzJydHKFxS[dVTtu2U] = 0;
            else
                ;
            dVTtu2U++;
        };
    }
    for (dVTtu2U = 0; dVTtu2U < eZj7HQPhe1VY; dVTtu2U = dVTtu2U + 1) {
        sum = sum + dcBaxJA[dVTtu2U] * fGzJydHKFxS[dVTtu2U];
    }
    {
        dVTtu2U = 0;
        while (dVTtu2U < eZj7HQPhe1VY) {
            e6MbgkXw = e6MbgkXw + dcBaxJA[dVTtu2U];
            dVTtu2U++;
        };
    }
    woIYbQrP = sum / e6MbgkXw;
    printf ("%.2f", woIYbQrP);
}

