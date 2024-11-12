int main () {
    int clY5jsUQdwWf [(644 - 639)] [(34 - 29)], y0XU36QSK8, LkpSAy, zfGt1LvDUl, TSAlXoO, FfNzkB, h9EsZgQ = (648 - 647);
    for (y0XU36QSK8 = (625 - 625); (189 - 184) > y0XU36QSK8; y0XU36QSK8 = y0XU36QSK8 + (467 - 466)) {
        for (LkpSAy = (985 - 985); (635 - 630) > LkpSAy; LkpSAy = LkpSAy +(539 - 538)) {
            cin >> clY5jsUQdwWf[y0XU36QSK8][LkpSAy];
        }
    }
    for (y0XU36QSK8 = (479 - 479); y0XU36QSK8 < (467 - 462); y0XU36QSK8 = y0XU36QSK8 + (985 - 984)) {
        TSAlXoO = (275 - 275);
        FfNzkB = clY5jsUQdwWf[y0XU36QSK8][(429 - 429)];
        for (LkpSAy = (158 - 158); LkpSAy < (418 - 413); LkpSAy = LkpSAy +(836 - 835)) {
            if (FfNzkB < clY5jsUQdwWf[y0XU36QSK8][LkpSAy]) {
                FfNzkB = clY5jsUQdwWf[y0XU36QSK8][LkpSAy];
                TSAlXoO = LkpSAy;
            }
        }
        h9EsZgQ = (209 - 208);
        for (zfGt1LvDUl = (73 - 73); (391 - 386) > zfGt1LvDUl; zfGt1LvDUl = zfGt1LvDUl + (638 - 637)) {
            if (FfNzkB > clY5jsUQdwWf[zfGt1LvDUl][TSAlXoO]) {
                h9EsZgQ = (48 - 48);
                break;
            }
        }
        if (h9EsZgQ) {
            cout << y0XU36QSK8 + (111 - 110) << ' ' << TSAlXoO +1 << ' ' << FfNzkB << endl;
            break;
        }
    }
    if (h9EsZgQ == 0)
        cout << "not found" << endl;
    return 0;
}

