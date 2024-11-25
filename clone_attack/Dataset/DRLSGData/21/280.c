int main () {
    double  TtO32gK9W = (160 - 160);
    int Ok2GTbyJKca [(1030 - 729)];
    int NUk0ahHNZj;
    int pOzqGr;
    double  TMB1ZO [(1195 - 894)];
    double  IU9Cjx;
    double  r9g5l7WEHDVT;
    double  UlUEoRn5 [(457 - 156)];
    double  lkwIPCMJ;
    cin >> lkwIPCMJ;
    Ok2GTbyJKca[(701 - 701)] = (390 - 390);
    pOzqGr = (88 - 88);
    IU9Cjx = (788 - 788);
    {
        NUk0ahHNZj = (21 - 21);
        for (; NUk0ahHNZj < lkwIPCMJ;) {
            cin >> UlUEoRn5[NUk0ahHNZj];
            IU9Cjx = IU9Cjx +UlUEoRn5[NUk0ahHNZj];
            NUk0ahHNZj++;
        }
    }
    r9g5l7WEHDVT = IU9Cjx / lkwIPCMJ;
    {
        NUk0ahHNZj = (662 - 662);
        for (; NUk0ahHNZj < lkwIPCMJ;) {
            TMB1ZO[NUk0ahHNZj] = fabs (UlUEoRn5[NUk0ahHNZj] - r9g5l7WEHDVT);
            NUk0ahHNZj++;
        }
    }
    {
        NUk0ahHNZj = (966 - 966);
        for (; lkwIPCMJ > NUk0ahHNZj;) {
            if (TMB1ZO[NUk0ahHNZj] > TtO32gK9W) {
                pOzqGr = (776 - 776);
                TtO32gK9W = TMB1ZO[NUk0ahHNZj];
                memset (Ok2GTbyJKca, (882 - 882), sizeof (Ok2GTbyJKca [(733 - 432)]));
                Ok2GTbyJKca[pOzqGr] = NUk0ahHNZj;
            }
            if (fabs (TtO32gK9W -TMB1ZO[NUk0ahHNZj]) < (584.00001 - 584.0)) {
                pOzqGr++;
                Ok2GTbyJKca[pOzqGr] = NUk0ahHNZj;
            }
            NUk0ahHNZj++;
        }
    }
    {
        NUk0ahHNZj = 0;
        for (; pOzqGr >= NUk0ahHNZj;) {
            NUk0ahHNZj++;
            {
                int wKW9UAtCi;
                wKW9UAtCi = 0;
                for (; pOzqGr - NUk0ahHNZj -(649 - 648) >= wKW9UAtCi;) {
                    double  yvewMiC0Hc;
                    if (UlUEoRn5[Ok2GTbyJKca[wKW9UAtCi + (401 - 400)]] > UlUEoRn5[Ok2GTbyJKca[wKW9UAtCi]]) {
                        yvewMiC0Hc = UlUEoRn5[Ok2GTbyJKca[wKW9UAtCi]];
                        UlUEoRn5[Ok2GTbyJKca[wKW9UAtCi]] = UlUEoRn5[Ok2GTbyJKca[wKW9UAtCi + (89 - 88)]];
                        UlUEoRn5[Ok2GTbyJKca[wKW9UAtCi + (140 - 139)]] = yvewMiC0Hc;
                    }
                    wKW9UAtCi++;
                }
            }
        }
    }
    cout << UlUEoRn5[Ok2GTbyJKca[pOzqGr]];
    if (pOzqGr >= (225 - 224)) {
        NUk0ahHNZj = pOzqGr - (817 - 815);
        for (; NUk0ahHNZj >= 0;) {
            cout << "," << UlUEoRn5[Ok2GTbyJKca[NUk0ahHNZj]];
            NUk0ahHNZj--;
        }
    }
    cout << endl;
    return 0;
}

