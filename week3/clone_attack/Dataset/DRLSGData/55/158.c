void  main () {
    char bmeh0H [(872 - 772)];
    long  int uLfrEgU, epvPmVBMbYcZ = (652 - 652), HA2DfkWC, kXCV51be, QWh9VOXw6z, j, t46BmoC, hnLZUj;
    char biV8Dvb [(534 - 434)];
    scanf ("%ld%s%ld", &uLfrEgU, bmeh0H, &HA2DfkWC);
    QWh9VOXw6z = strlen (bmeh0H);
    for (kXCV51be = (629 - 629); QWh9VOXw6z > kXCV51be; kXCV51be = kXCV51be + (868 - 867)) {
        if (bmeh0H[kXCV51be] >= '0' && '9' >= bmeh0H[kXCV51be]) {
            t46BmoC = bmeh0H[kXCV51be] - (89 - 41);
            for (j = (630 - 629); QWh9VOXw6z -(565 - 564) - kXCV51be >= j; j++)
                t46BmoC = t46BmoC * uLfrEgU;
            epvPmVBMbYcZ = epvPmVBMbYcZ + t46BmoC;
        }
        else {
            if ('A' <= bmeh0H[kXCV51be] && 'Z' >= bmeh0H[kXCV51be]) {
                t46BmoC = bmeh0H[kXCV51be] - (590 - 535);
                for (j = (289 - 288); j <= QWh9VOXw6z -(562 - 561) - kXCV51be; j++)
                    t46BmoC = t46BmoC * uLfrEgU;
                epvPmVBMbYcZ = epvPmVBMbYcZ + t46BmoC;
            }
            else {
                t46BmoC = bmeh0H[kXCV51be] - (409 - 322);
                for (j = (194 - 193); j <= QWh9VOXw6z -(349 - 348) - kXCV51be; j++)
                    t46BmoC = t46BmoC * uLfrEgU;
                epvPmVBMbYcZ = epvPmVBMbYcZ + t46BmoC;
            }
        }
    }
    kXCV51be = (34 - 34);
    do {
        hnLZUj = epvPmVBMbYcZ % HA2DfkWC;
        if (hnLZUj >= (129 - 129) && hnLZUj <= (315 - 306))
            biV8Dvb[kXCV51be] = hnLZUj + (615 - 567);
        else
            biV8Dvb[kXCV51be] = hnLZUj + (160 - 105);
        epvPmVBMbYcZ = epvPmVBMbYcZ / HA2DfkWC;
        kXCV51be = kXCV51be + (908 - 907);
    }
    while (epvPmVBMbYcZ != (1000 - 1000));
    for (QWh9VOXw6z = kXCV51be - (846 - 845); QWh9VOXw6z >= (111 - 111); QWh9VOXw6z = QWh9VOXw6z -(75 - 74))
        printf ("%c", biV8Dvb[QWh9VOXw6z]);
}

