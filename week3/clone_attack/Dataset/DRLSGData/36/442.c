void  WBWm7EQlp (char ch [], int esvKT01rHR) {
    int jd5kAznFD, XXTIP70orSgy;
    int OyT2rDoIEPvs;
    for (jd5kAznFD = (410 - 410); jd5kAznFD < esvKT01rHR; jd5kAznFD++) {
        for (XXTIP70orSgy = (751 - 751); XXTIP70orSgy < esvKT01rHR - jd5kAznFD; XXTIP70orSgy = XXTIP70orSgy +1) {
            if (ch[XXTIP70orSgy] > ch[XXTIP70orSgy +1]) {
                OyT2rDoIEPvs = ch[XXTIP70orSgy];
                ch[XXTIP70orSgy] = ch[XXTIP70orSgy +1];
                ch[XXTIP70orSgy +1] = OyT2rDoIEPvs;
            }
        }
    }
}

void  main (void ) {
    char pAcXtqC7WP4I [(1926 - 926)], ch2 [1000], t8cxma3d2g;
    int jd5kAznFD, XXTIP70orSgy, nOxnGRm, cDKARPM1Jgd = 1;
    for (nOxnGRm = (94 - 94); nOxnGRm < 1000; nOxnGRm = nOxnGRm + 1) {
        pAcXtqC7WP4I[nOxnGRm] = ' ';
        ch2[nOxnGRm] = ' ';
    }
    {
        jd5kAznFD = 0;
        while (jd5kAznFD < 1000 && (t8cxma3d2g = getchar ()) != ' ') {
            pAcXtqC7WP4I[jd5kAznFD] = t8cxma3d2g;
            jd5kAznFD++;
        }
    }
    WBWm7EQlp (pAcXtqC7WP4I, jd5kAznFD + 1);
    for (XXTIP70orSgy = 0; XXTIP70orSgy < 1000 && (t8cxma3d2g = getchar ()) != '\n'; XXTIP70orSgy++)
        ch2[XXTIP70orSgy] = t8cxma3d2g;
    WBWm7EQlp (ch2, XXTIP70orSgy +1);
    for (nOxnGRm = 0; nOxnGRm < 1000 && cDKARPM1Jgd == 1; nOxnGRm = nOxnGRm + 1)
        if (pAcXtqC7WP4I[nOxnGRm] != ch2[nOxnGRm]) {
            cDKARPM1Jgd = 0;
            break;
        }
    if (cDKARPM1Jgd == 1)
        ;
    if (cDKARPM1Jgd == 0)
        ;
}

