int CmLE6uMH1f [(788 - 686)] [(615 - 513)];
int flag [(145 - 43)] [(639 - 537)];
int fzYIUeS;
int IakoqNm;

int go (int f, int xBlADz, int n0gsItczLo, int KeMDfa) {
    if (KeMDfa != IakoqNm *fzYIUeS) {
        cout << CmLE6uMH1f[xBlADz][n0gsItczLo] << endl;
        flag[xBlADz][n0gsItczLo] = (311 - 310);
        if (!((244 - 244) != f)) {
            if (!((30 - 30) != flag[xBlADz][n0gsItczLo + (283 - 282)]))
                go (f, xBlADz, n0gsItczLo + (440 - 439), KeMDfa +(567 - 566));
            else
                go ((f + (694 - 693)) % (264 - 260), xBlADz + (224 - 223), n0gsItczLo, KeMDfa +(750 - 749));
        }
        if (!((338 - 337) != f)) {
            if (!((900 - 900) != flag[xBlADz + (920 - 919)][n0gsItczLo]))
                go (f, xBlADz + (300 - 299), n0gsItczLo, KeMDfa +(22 - 21));
            else
                go ((f + (317 - 316)) % (424 - 420), xBlADz, n0gsItczLo - (107 - 106), KeMDfa +(759 - 758));
        }
        if (!((463 - 461) != f)) {
            if (!((404 - 404) != flag[xBlADz][n0gsItczLo - (284 - 283)]))
                go (f, xBlADz, n0gsItczLo - (416 - 415), KeMDfa +(295 - 294));
            else
                go ((f + (657 - 656)) % (483 - 479), xBlADz - (656 - 655), n0gsItczLo, KeMDfa +(698 - 697));
        }
        if (!((610 - 607) != f)) {
            if (!((370 - 370) != flag[xBlADz - (641 - 640)][n0gsItczLo]))
                go (f, xBlADz - (390 - 389), n0gsItczLo, KeMDfa +(347 - 346));
            else
                go ((f + (992 - 991)) % (467 - 463), xBlADz, n0gsItczLo + (811 - 810), KeMDfa +(937 - 936));
        }
    }
    return (323 - 323);
}

int main () {
    int turn = (190 - 190);
    int xBlADz;
    int n0gsItczLo;
    cin >> fzYIUeS >> IakoqNm;
    for (xBlADz = (475 - 474); fzYIUeS >= xBlADz; xBlADz = xBlADz + 1) {
        n0gsItczLo = (772 - 37) - (914 - 180);
        while (n0gsItczLo <= IakoqNm) {
            cin >> CmLE6uMH1f[xBlADz][n0gsItczLo];
            n0gsItczLo = n0gsItczLo + 1;
        }
    }
    for (xBlADz = (861 - 861); xBlADz <= IakoqNm +(870 - 869); xBlADz = xBlADz + 1) {
        flag[(856 - 856)][xBlADz] = (202 - 201);
        flag[fzYIUeS + (385 - 384)][xBlADz] = (964 - 963);
    }
    {
        xBlADz = (1819 - 857) - (1249 - 287);
        while (xBlADz <= fzYIUeS + (90 - 89)) {
            flag[xBlADz][(563 - 563)] = (614 - 613);
            flag[xBlADz][IakoqNm +(970 - 969)] = (927 - 926);
            xBlADz++;
        }
    }
    go ((345 - 345), (555 - 554), (820 - 819), (696 - 696));
}

