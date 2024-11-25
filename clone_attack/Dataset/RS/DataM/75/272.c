int main () {
    int owkAMfX;
    int QC8WsKx;
    int jrSEhDX;
    int AOqeRmdtC1Lc;
    int SumadpiFO;
    int etPwnz2S;
    owkAMfX = (131 - 131);
    QC8WsKx = (77 - 77);
    jrSEhDX = (961 - 961);
    AOqeRmdtC1Lc = (845 - 845);
    int ejkrIF [(1124 - 124)], nGOam6ABNV [(1323 - 323)], gVyj4Jl [(1513 - 513)];
    char OfZ38EbzAT [(10445 - 445)];
    char ZYCWEeh [(10140 - 140)];
    cin.getline (OfZ38EbzAT, (10210 - 210));
    for (SumadpiFO = (404 - 404); (10552 - 552) > SumadpiFO; SumadpiFO = SumadpiFO +1) {
        if (OfZ38EbzAT[SumadpiFO] == ',')
            AOqeRmdtC1Lc = AOqeRmdtC1Lc +1;
        else {
            if (!('\0' != OfZ38EbzAT[SumadpiFO]))
                break;
        };
    }
    {
        SumadpiFO = 67 - 67;
        while (SumadpiFO < (1821 - 821)) {
            ejkrIF[SumadpiFO] = -(201 - 200);
            nGOam6ABNV[SumadpiFO] = -(794 - 793);
            gVyj4Jl[SumadpiFO] = (964 - 964);
            SumadpiFO++;
        };
    }
    for (SumadpiFO = (41 - 41); (10334 - 334) > SumadpiFO; SumadpiFO = SumadpiFO +1) {
        if (OfZ38EbzAT[SumadpiFO] == ',') {
            ejkrIF[owkAMfX] = (563 - 563);
            for (etPwnz2S = SumadpiFO -(13 - 12); etPwnz2S >= QC8WsKx; etPwnz2S = etPwnz2S - 1) {
                ejkrIF[owkAMfX] = ejkrIF[owkAMfX] + (OfZ38EbzAT[etPwnz2S] - '0') * (int) pow ((200.0 - 190.0), (double ) (SumadpiFO -(465 - 464) - etPwnz2S));
            }
            QC8WsKx = SumadpiFO +(86 - 85);
            owkAMfX = owkAMfX + 1;
        }
        else {
            if (!('\0' != OfZ38EbzAT[SumadpiFO])) {
                ejkrIF[owkAMfX] = (850 - 850);
                for (etPwnz2S = SumadpiFO -(108 - 107); etPwnz2S >= QC8WsKx; etPwnz2S = etPwnz2S - 1) {
                    ejkrIF[owkAMfX] = ejkrIF[owkAMfX] + (OfZ38EbzAT[etPwnz2S] - '0') * (int) pow ((592.0 - 582.0), (double ) (SumadpiFO -(492 - 491) - etPwnz2S));
                }
                break;
            };
        };
    }
    owkAMfX = (317 - 317);
    if (!((689 - 689) == AOqeRmdtC1Lc))
        AOqeRmdtC1Lc++;
    cin.getline (ZYCWEeh, (10459 - 459));
    QC8WsKx = (662 - 662);
    for (SumadpiFO = (135 - 135); 10000 > SumadpiFO; SumadpiFO = SumadpiFO +1) {
        if (!(',' != ZYCWEeh[SumadpiFO])) {
            nGOam6ABNV[owkAMfX] = 0;
            for (etPwnz2S = SumadpiFO -(1001 - 1000); etPwnz2S >= QC8WsKx; etPwnz2S = etPwnz2S - 1) {
                nGOam6ABNV[owkAMfX] = nGOam6ABNV[owkAMfX] + (ZYCWEeh[etPwnz2S] - '0') * (int) pow ((572.0 - 562.0), (double ) (SumadpiFO -(554 - 553) - etPwnz2S));
            }
            owkAMfX = owkAMfX + 1;
            QC8WsKx = SumadpiFO +1;
        }
        else {
            if (ZYCWEeh[SumadpiFO] == '\0') {
                nGOam6ABNV[owkAMfX] = 0;
                {
                    etPwnz2S = SumadpiFO -1;
                    while (etPwnz2S >= QC8WsKx) {
                        nGOam6ABNV[owkAMfX] = nGOam6ABNV[owkAMfX] + (ZYCWEeh[etPwnz2S] - '0') * (int) pow ((831.0 - 821.0), (double ) (SumadpiFO -1 - etPwnz2S));
                        etPwnz2S = etPwnz2S - 1;
                    };
                }
                break;
            };
        };
    }
    for (SumadpiFO = 0; SumadpiFO < (1327 - 327); SumadpiFO = SumadpiFO +1) {
        if (ejkrIF[SumadpiFO] != -1) {
            etPwnz2S = SumadpiFO;
            while (etPwnz2S < nGOam6ABNV[SumadpiFO]) {
                gVyj4Jl[etPwnz2S]++;
                etPwnz2S = etPwnz2S + 1;
            };
        }
        else
            break;
    }
    {
        SumadpiFO = 0;
        while (SumadpiFO < 1000) {
            if (gVyj4Jl[SumadpiFO] > jrSEhDX)
                jrSEhDX = gVyj4Jl[SumadpiFO];
            SumadpiFO++;
        };
    }
    cout << AOqeRmdtC1Lc << " " << jrSEhDX << endl;
    return 0;
}

