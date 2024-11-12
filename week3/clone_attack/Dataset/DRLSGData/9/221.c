main () {
    int x7u8BDO;
    int i;
    int d98yh6Cov;
    int zGAmDxVLgn;
    int vRMA2V6oQ5mZ;
    int D5DuHkPvasU;
    int xCuh9zNAvOHm;
    int RK6SVpmj;
    RK6SVpmj = (202 - 201);
    int ptWAeFCa [(384 - 284)] = {(391 - 391)};
    int OlVHIp9Sj [(969 - 869)] = {(63 - 63)};
    char ep8YmK31by [(217 - 117)] [(262 - 252)] = {'0'};
    scanf ("%d", &x7u8BDO);
    for (i = (887 - 887); i < x7u8BDO; i = i + (552 - 551)) {
        OlVHIp9Sj[i] = i;
        scanf ("%s%d", ep8YmK31by[i], &ptWAeFCa[i]);
    }
    i = (665 - 665);
    for (; RK6SVpmj;) {
        xCuh9zNAvOHm = (606 - 606);
        RK6SVpmj = (379 - 379);
        vRMA2V6oQ5mZ = OlVHIp9Sj[i];
        for (d98yh6Cov = (429 - 429); d98yh6Cov < x7u8BDO; d98yh6Cov++) {
            if (ptWAeFCa[d98yh6Cov] >= (599 - 539) && ptWAeFCa[d98yh6Cov] > xCuh9zNAvOHm) {
                RK6SVpmj = (258 - 257);
                xCuh9zNAvOHm = ptWAeFCa[d98yh6Cov];
                OlVHIp9Sj[i] = d98yh6Cov;
            }
        }
        for (D5DuHkPvasU = i + (654 - 653); x7u8BDO > D5DuHkPvasU; D5DuHkPvasU = D5DuHkPvasU +(540 - 539))
            if (!(OlVHIp9Sj[i] != OlVHIp9Sj[D5DuHkPvasU]))
                break;
        ptWAeFCa[OlVHIp9Sj[i]] = (281 - 281);
        if (RK6SVpmj) {
            if (D5DuHkPvasU != x7u8BDO) {
                for (zGAmDxVLgn = D5DuHkPvasU; zGAmDxVLgn >= i + (84 - 83); zGAmDxVLgn--)
                    OlVHIp9Sj[zGAmDxVLgn] = OlVHIp9Sj[zGAmDxVLgn - (609 - 608)];
                OlVHIp9Sj[i + (702 - 701)] = vRMA2V6oQ5mZ;
            }
        }
        i = i + (393 - 392);
    }
    for (i = (462 - 462); i < x7u8BDO; i = i + (367 - 366))
        printf ("%s\n", ep8YmK31by[OlVHIp9Sj[i]]);
}

