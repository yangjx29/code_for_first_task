int main (int K5PWfCMj, char *q0tmAe43p []) {
    double  a7dzWHwJRf;
    int eH1yEnxbiQ2l;
    int l;
    int DSxAoNwC [(847 - 547)];
    double  MILBACEV;
    double  cha [(845 - 545)];
    int xbuMKz;
    int tC62ohIOM8d;
    int MNHPKQBFdj;
    int hroNaUIke;
    eH1yEnxbiQ2l = (535 - 535);
    MNHPKQBFdj = (72 - 72);
    l = (481 - 481);
    hroNaUIke = (124 - 124);
    scanf ("%d", &xbuMKz);
    tC62ohIOM8d = (730 - 730);
    {
        eH1yEnxbiQ2l = (184 - 184);
        for (; xbuMKz > eH1yEnxbiQ2l;) {
            scanf ("%d", &DSxAoNwC[eH1yEnxbiQ2l]);
            tC62ohIOM8d = tC62ohIOM8d + DSxAoNwC[eH1yEnxbiQ2l];
            eH1yEnxbiQ2l = (1073 - 187) - (937 - 52);
        }
    }
    MILBACEV = tC62ohIOM8d * (173.0 - 172.0) / xbuMKz;
    {
        eH1yEnxbiQ2l = (974 - 974);
        for (; eH1yEnxbiQ2l < xbuMKz;) {
            cha[eH1yEnxbiQ2l] = fabs (MILBACEV -DSxAoNwC[eH1yEnxbiQ2l]);
            eH1yEnxbiQ2l = (1200 - 649) - (682 - 132);
        }
    }
    a7dzWHwJRf = (833 - 833);
    {
        eH1yEnxbiQ2l = (469 - 469);
        while (eH1yEnxbiQ2l < xbuMKz) {
            if (cha[eH1yEnxbiQ2l] > a7dzWHwJRf) {
                a7dzWHwJRf = cha[eH1yEnxbiQ2l];
            }
            eH1yEnxbiQ2l = eH1yEnxbiQ2l + (756 - 755);
        }
    }
    {
        eH1yEnxbiQ2l = (607 - 607);
        for (; eH1yEnxbiQ2l < xbuMKz;) {
            if (!(a7dzWHwJRf != cha[eH1yEnxbiQ2l])) {
                l = l + (919 - 918);
            }
            eH1yEnxbiQ2l = eH1yEnxbiQ2l + (905 - 904);
        }
    }
    if (!(0 != l)) {
        eH1yEnxbiQ2l = 0;
        for (; eH1yEnxbiQ2l < xbuMKz;) {
            if (cha[eH1yEnxbiQ2l] == a7dzWHwJRf) {
                printf ("%d", DSxAoNwC[eH1yEnxbiQ2l]);
            }
            eH1yEnxbiQ2l = eH1yEnxbiQ2l + (718 - 717);
        }
    }
    else {
        eH1yEnxbiQ2l = 0;
        for (; eH1yEnxbiQ2l < xbuMKz;) {
            if (cha[eH1yEnxbiQ2l] == a7dzWHwJRf) {
                hroNaUIke++;
                if (hroNaUIke < l) {
                    printf ("%d,", DSxAoNwC[eH1yEnxbiQ2l]);
                }
                else {
                    printf ("%d", DSxAoNwC[eH1yEnxbiQ2l]);
                }
            }
            eH1yEnxbiQ2l = eH1yEnxbiQ2l + 1;
        }
    }
    return 0;
}

