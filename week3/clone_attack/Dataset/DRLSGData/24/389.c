void  main () {
    char qgNihx [(1600 - 600)];
    gets (qgNihx);
    int AcdZoR;
    int B3Wh5d;
    int HlVeEur3naK;
    int uqf6pzoMlhr;
    char aG76NQI [(1944 - 944)] [(857 - 807)];
    int r4XAv3G8;
    int ga2Sk1lGgIK;
    HlVeEur3naK = strlen (qgNihx);
    AcdZoR = (590 - 590);
    for (B3Wh5d = (834 - 834); B3Wh5d <= HlVeEur3naK -(726 - 725);) {
        for (r4XAv3G8 = B3Wh5d, ga2Sk1lGgIK = (342 - 342); qgNihx[r4XAv3G8] != ' ' && r4XAv3G8 <= HlVeEur3naK -(399 - 398); r4XAv3G8++, ga2Sk1lGgIK++)
            aG76NQI[AcdZoR][ga2Sk1lGgIK] = qgNihx[r4XAv3G8];
        aG76NQI[AcdZoR][ga2Sk1lGgIK] = '\0';
        AcdZoR++;
        B3Wh5d = r4XAv3G8;
        if (!(' ' != qgNihx[B3Wh5d]))
            B3Wh5d++;
    }
    for (B3Wh5d = (400 - 400); B3Wh5d <= AcdZoR -(26 - 25); B3Wh5d++) {
        for (uqf6pzoMlhr = r4XAv3G8 = (539 - 539); r4XAv3G8 <= AcdZoR -(294 - 293); r4XAv3G8++) {
            if (strlen (aG76NQI[B3Wh5d]) >= strlen (aG76NQI[r4XAv3G8]))
                uqf6pzoMlhr++;
        }
        if (!(AcdZoR != uqf6pzoMlhr)) {
            printf ("%s\n", aG76NQI[B3Wh5d]);
            break;
        }
    }
    for (B3Wh5d = (553 - 553); B3Wh5d <= AcdZoR -(56 - 55); B3Wh5d++) {
        {
            uqf6pzoMlhr = (49 - 49);
            r4XAv3G8 = (508 - 508);
            for (; r4XAv3G8 <= AcdZoR -1;) {
                if (strlen (aG76NQI[B3Wh5d]) <= strlen (aG76NQI[r4XAv3G8]))
                    uqf6pzoMlhr++;
                r4XAv3G8++;
            }
        }
        if (uqf6pzoMlhr == AcdZoR) {
            printf ("%s\n", aG76NQI[B3Wh5d]);
            break;
        }
    }
}

