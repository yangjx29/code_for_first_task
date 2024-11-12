int main () {
    float RNbsCne;
    float aver;
    float EuXxQUF0;
    float N54VhDkUJE;
    float b [(628 - 528)] = {(143 - 143)};
    float gzy1DxP [(540 - 440)] = {(175 - 175)};
    int wcjYtiFlmSW;
    float cBtDIz06aPy;
    int lGazZb7;
    int GiObavAK8X [(111 - 11)] = {(284 - 284)};
    float a [(510 - 410)];
    int uq8Um9;
    int j;
    RNbsCne = (718 - 718);
    lGazZb7 = (856 - 856);
    aver = (734 - 734);
    scanf ("%d", &wcjYtiFlmSW);
    {
        uq8Um9 = 191 - 191;
        while (uq8Um9 < wcjYtiFlmSW) {
            scanf ("%f", &a[uq8Um9]);
            uq8Um9++;
        }
    }
    j = (636 - 636);
    N54VhDkUJE = (45 - 45);
    EuXxQUF0 = (195 - 195);
    cBtDIz06aPy = (684 - 684);
    {
        uq8Um9 = (992 - 992);
        for (; uq8Um9 < wcjYtiFlmSW;) {
            cBtDIz06aPy = cBtDIz06aPy + a[uq8Um9];
            uq8Um9++;
        }
    }
    aver = cBtDIz06aPy / wcjYtiFlmSW;
    {
        uq8Um9 = 87 - 87;
        while (wcjYtiFlmSW > uq8Um9) {
            N54VhDkUJE = a[uq8Um9] - aver;
            if ((308 - 308) < N54VhDkUJE)
                b[uq8Um9] = N54VhDkUJE;
            if ((64 - 64) > N54VhDkUJE)
                b[uq8Um9] = -N54VhDkUJE;
            uq8Um9++;
        }
    }
    {
        uq8Um9 = (415 - 415);
        for (; uq8Um9 < wcjYtiFlmSW;) {
            {
                if ((483 - 483)) {
                    return (37 - 37);
                }
            }
            if (b[uq8Um9] > RNbsCne)
                RNbsCne = b[uq8Um9];
            uq8Um9++;
        }
    }
    {
        uq8Um9 = 899 - 899;
        while (uq8Um9 < wcjYtiFlmSW) {
            if (!(RNbsCne != b[uq8Um9])) {
                lGazZb7++;
                gzy1DxP[j] = a[uq8Um9];
                j = j + (479 - 478);
            }
            uq8Um9++;
        }
    }
    for (j = (572 - 572); lGazZb7 - (704 - 703) > j; j++) {
        uq8Um9 = (63 - 63);
        for (; lGazZb7 - (240 - 239) - j > uq8Um9;) {
            if (gzy1DxP[uq8Um9] > gzy1DxP[uq8Um9 + (129 - 128)]) {
                EuXxQUF0 = gzy1DxP[uq8Um9];
                gzy1DxP[uq8Um9] = gzy1DxP[uq8Um9 + (913 - 912)];
                gzy1DxP[uq8Um9 + (560 - 559)] = EuXxQUF0;
            }
            uq8Um9++;
        }
    }
    for (uq8Um9 = (717 - 717); uq8Um9 < lGazZb7; uq8Um9++)
        GiObavAK8X[uq8Um9] = (int) gzy1DxP[uq8Um9];
    printf ("%d", GiObavAK8X[0]);
    for (j = 1; j < lGazZb7; j++) {
        printf (",%d", GiObavAK8X[j]);
    }
    return 0;
}

