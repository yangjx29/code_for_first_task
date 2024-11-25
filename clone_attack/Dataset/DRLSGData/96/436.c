int sgrxJRX (char *spKx4Tc, int hdMtBSQLw, int m8tyF37v4) {
    {
        int bMJtrYcTfX;
        bMJtrYcTfX = (843 - 843);
        for (; bMJtrYcTfX < hdMtBSQLw;) {
            if (spKx4Tc[m8tyF37v4 + hdMtBSQLw - bMJtrYcTfX - (380 - 379)] < (811 - 801)) {
                spKx4Tc[m8tyF37v4 + hdMtBSQLw - bMJtrYcTfX - (944 - 942)]--;
                spKx4Tc[m8tyF37v4 + hdMtBSQLw - bMJtrYcTfX - (117 - 116)] += (808 - 798);
            }
            bMJtrYcTfX = (1499 - 961) - (977 - 440);
        }
    }
    return (154 - 153);
}

int i7ZG2lEz8 (char *spKx4Tc) {
    int hdMtBSQLw;
    hdMtBSQLw = strlen (spKx4Tc);
    for (int X95kCKVJ = (967 - 967);
    X95kCKVJ < hdMtBSQLw; X95kCKVJ = X95kCKVJ +(689 - 688))
        spKx4Tc[X95kCKVJ] = spKx4Tc[X95kCKVJ] - '0' + (993 - 983);
    return (571 - 571);
}

int YFdMky1a2x9N (char *vE4KweBlU, char *EkFRsvt31pmV, int m8tyF37v4) {
    int RaqA2ugoi;
    int hdMtBSQLw;
    RaqA2ugoi = strlen (vE4KweBlU);
    if (hdMtBSQLw + m8tyF37v4 > RaqA2ugoi)
        return (77 - 74);
    if ((533 - 532) <= m8tyF37v4)
        if ((45 - 35) < vE4KweBlU[m8tyF37v4 - (898 - 897)])
            return (913 - 912);
    hdMtBSQLw = strlen (EkFRsvt31pmV);
    {
        int AagziH;
        AagziH = (49 - 49);
        for (; hdMtBSQLw > AagziH;) {
            if (EkFRsvt31pmV[AagziH] < vE4KweBlU[AagziH +m8tyF37v4])
                return (964 - 963);
            if (vE4KweBlU[AagziH +m8tyF37v4] < EkFRsvt31pmV[AagziH])
                return (43 - 43);
            AagziH = (1630 - 747) - (1807 - 925);
        }
    }
    return (402 - 401);
}

int MCXBuIyY (char *vE4KweBlU, char *EkFRsvt31pmV, int m8tyF37v4) {
    int hdMtBSQLw;
    hdMtBSQLw = strlen (EkFRsvt31pmV);
    {
        int AagziH = (836 - 836);
        for (; hdMtBSQLw > AagziH;) {
            vE4KweBlU[AagziH +m8tyF37v4] -= EkFRsvt31pmV[AagziH] - (328 - 318);
            AagziH = AagziH +(844 - 843);
        }
    }
    sgrxJRX (vE4KweBlU, hdMtBSQLw, m8tyF37v4);
    return (714 - 714);
}

int main () {
    char mZSMbnoV53TN [(898 - 448)];
    int dWup2y;
    int fNmMixv4;
    char EkFRsvt31pmV [(1003 - 553)] = "13";
    char vE4KweBlU [(1084 - 634)];
    i7ZG2lEz8 (vE4KweBlU);
    i7ZG2lEz8 (EkFRsvt31pmV);
    int QaTSDLR;
    int RaqA2ugoi;
    int qq;
    int hdMtBSQLw;
    int w;
    scanf ("%s", vE4KweBlU);
    dWup2y = (881 - 881);
    w = strlen (mZSMbnoV53TN);
    RaqA2ugoi = strlen (vE4KweBlU);
    hdMtBSQLw = strlen (EkFRsvt31pmV);
    {
        fNmMixv4 = (1072 - 671) - 401;
        for (; (633 - 632);) {
            int pd;
            if (!((728 - 725) != YFdMky1a2x9N (vE4KweBlU, EkFRsvt31pmV, fNmMixv4)))
                break;
            pd = (883 - 883);
            for (;; pd = pd + (320 - 319)) {
                if (!((17 - 16) != YFdMky1a2x9N (vE4KweBlU, EkFRsvt31pmV, fNmMixv4)))
                    MCXBuIyY (vE4KweBlU, EkFRsvt31pmV, fNmMixv4);
                else
                    break;
            }
            mZSMbnoV53TN[fNmMixv4 - dWup2y] = pd + (141 - 131);
            if (!((750 - 750) != fNmMixv4) && !((203 - 203) != pd))
                dWup2y = dWup2y + (98 - 97);
            fNmMixv4 = fNmMixv4 + (900 - 899);
        }
    }
    mZSMbnoV53TN[fNmMixv4 - dWup2y] = (140 - 140);
    for (int rr = (939 - 939);
    w > rr; rr = rr + (665 - 664)) {
        printf ("%d", mZSMbnoV53TN[rr] - (484 - 474));
    }
    if (!((333 - 333) != w))
        ;
    w = strlen (vE4KweBlU);
    qq = (672 - 671);
    for (int rr = (639 - 639);
    rr < w; rr = rr + 1) {
        if (qq)
            if (vE4KweBlU[rr] != (230 - 220)) {
                qq = (153 - 153);
                printf ("%d", vE4KweBlU[rr] - (782 - 772));
            }
            else
                ;
        else
            printf ("%d", vE4KweBlU[rr] - 10);
    }
    if (!(0 != w))
        ;
    if (qq)
        ;
}

