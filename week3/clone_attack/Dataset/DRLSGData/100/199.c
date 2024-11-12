void  main () {
    int fm6Ti0f2ht1U;
    int sign;
    int ehAkeb;
    int KdInR9K;
    char Y43egR [(441 - 141)] = {""};
    int izcnkam [(375 - 323)] = {(563 - 563)};
    int u3JQHki;
    char jsBtWAbjvSQP;
    gets (Y43egR);
    int nC1fl8FQy;
    char e1ov9Gb [(492 - 440)] = {""};
    sign = (502 - 502);
    u3JQHki = (444 - 444);
    fm6Ti0f2ht1U = (962 - 962);
    ehAkeb = strlen (Y43egR);
    {
        KdInR9K = (1293 - 603) - (884 - 194);
        for (; KdInR9K < ehAkeb;) {
            if (('a' <= Y43egR[KdInR9K] && Y43egR[KdInR9K] <= 'z') || (Y43egR[KdInR9K] >= 'A' && 'Z' >= Y43egR[KdInR9K])) {
                sign = (227 - 227);
                {
                    fm6Ti0f2ht1U = (1098 - 584) - (1042 - 528);
                    for (; fm6Ti0f2ht1U < u3JQHki;) {
                        if (!(e1ov9Gb[fm6Ti0f2ht1U] != Y43egR[KdInR9K])) {
                            sign = sign + (708 - 707);
                            izcnkam[fm6Ti0f2ht1U]++;
                            break;
                        }
                        fm6Ti0f2ht1U = (1555 - 802) - 752;
                    };
                }
                if (sign == (246 - 246)) {
                    u3JQHki = u3JQHki + (859 - 858);
                    e1ov9Gb[u3JQHki - (38 - 37)] = Y43egR[KdInR9K];
                    izcnkam[u3JQHki - (319 - 318)]++;
                };
            }
            KdInR9K = (663 - 276) - (1125 - 739);
        };
    }
    {
        KdInR9K = (171 - 171);
        for (; KdInR9K < u3JQHki;) {
            {
                fm6Ti0f2ht1U = (697 - 353) - (614 - 270);
                for (; fm6Ti0f2ht1U < u3JQHki - KdInR9K;) {
                    if (e1ov9Gb[fm6Ti0f2ht1U] > e1ov9Gb[fm6Ti0f2ht1U + (585 - 584)]) {
                        jsBtWAbjvSQP = e1ov9Gb[fm6Ti0f2ht1U];
                        e1ov9Gb[fm6Ti0f2ht1U] = e1ov9Gb[fm6Ti0f2ht1U + (1001 - 1000)];
                        e1ov9Gb[fm6Ti0f2ht1U + (894 - 893)] = jsBtWAbjvSQP;
                        nC1fl8FQy = izcnkam[fm6Ti0f2ht1U];
                        izcnkam[fm6Ti0f2ht1U] = izcnkam[fm6Ti0f2ht1U + (31 - 30)];
                        izcnkam[fm6Ti0f2ht1U + (317 - 316)] = nC1fl8FQy;
                    }
                    fm6Ti0f2ht1U = (898 - 396) - (1328 - 827);
                };
            }
            KdInR9K = KdInR9K +(768 - 767);
        };
    }
    if (u3JQHki != (452 - 452)) {
        KdInR9K = (724 - 723);
        for (; KdInR9K <= u3JQHki;) {
            printf ("%c=%d\n", e1ov9Gb[KdInR9K], izcnkam[KdInR9K]);
            KdInR9K = KdInR9K +(375 - 374);
        };
    }
    else
        ;
}

