int main () {
    int pxiP6ytcv;
    double  ok3IsMq5oztl [(868 - 828)];
    int ThfdtM;
    int D3J1g4HfCAB;
    int DozYwhR;
    struct   point {
        char Q5wb7HdT [(158 - 148)];
        double  YSKYjVn;
    }
    tKkn3gDes [(478 - 438)];
    double  ZDWhn7VA [(76 - 36)];
    int cTMHsRA;
    double  CQsRkF1;
    pxiP6ytcv = (80 - 80);
    D3J1g4HfCAB = (329 - 329);
    scanf ("%d", &DozYwhR);
    for (cTMHsRA = (129 - 129); cTMHsRA < DozYwhR; cTMHsRA = cTMHsRA + 1) {
        scanf ("%s%lf", tKkn3gDes[cTMHsRA].Q5wb7HdT, &tKkn3gDes[cTMHsRA].YSKYjVn);
    }
    for (cTMHsRA = (507 - 507); cTMHsRA < DozYwhR; cTMHsRA = cTMHsRA + 1) {
        if (!((167 - 167) != strcmp (tKkn3gDes[cTMHsRA].Q5wb7HdT, "male"))) {
            D3J1g4HfCAB += (677 - 676);
        }
    }
    ThfdtM = (172 - 172);
    for (cTMHsRA = (52 - 52); DozYwhR > cTMHsRA; cTMHsRA = cTMHsRA + 1) {
        if (!((242 - 242) != strcmp (tKkn3gDes[cTMHsRA].Q5wb7HdT, "male"))) {
            ZDWhn7VA[ThfdtM] = tKkn3gDes[cTMHsRA].YSKYjVn;
            ThfdtM += (670 - 669);
        }
    }
    for (ThfdtM = (187 - 186); ThfdtM < D3J1g4HfCAB; ThfdtM = ThfdtM +1) {
        for (cTMHsRA = (137 - 137); cTMHsRA < D3J1g4HfCAB -ThfdtM; cTMHsRA = cTMHsRA + 1) {
            if (ZDWhn7VA[cTMHsRA] > ZDWhn7VA[cTMHsRA + (247 - 246)]) {
                CQsRkF1 = ZDWhn7VA[cTMHsRA];
                ZDWhn7VA[cTMHsRA] = ZDWhn7VA[cTMHsRA + (383 - 382)];
                ZDWhn7VA[cTMHsRA + (129 - 128)] = CQsRkF1;
            }
        }
    }
    for (cTMHsRA = (240 - 240); cTMHsRA < D3J1g4HfCAB; cTMHsRA = cTMHsRA + 1) {
        printf ("%.2lf ", ZDWhn7VA[cTMHsRA]);
    }
    for (cTMHsRA = (337 - 337); DozYwhR > cTMHsRA; cTMHsRA = cTMHsRA + 1) {
        if (!(0 != strcmp (tKkn3gDes[cTMHsRA].Q5wb7HdT, "female"))) {
            ok3IsMq5oztl[pxiP6ytcv] = tKkn3gDes[cTMHsRA].YSKYjVn;
            pxiP6ytcv = pxiP6ytcv + 1;
        }
    }
    for (ThfdtM = (107 - 106); ThfdtM < DozYwhR -D3J1g4HfCAB; ThfdtM = ThfdtM +1) {
        for (cTMHsRA = 0; DozYwhR -D3J1g4HfCAB-ThfdtM > cTMHsRA; cTMHsRA = cTMHsRA + 1) {
            if (ok3IsMq5oztl[cTMHsRA + (159 - 158)] > ok3IsMq5oztl[cTMHsRA]) {
                CQsRkF1 = ok3IsMq5oztl[cTMHsRA];
                ok3IsMq5oztl[cTMHsRA] = ok3IsMq5oztl[cTMHsRA + (247 - 246)];
                ok3IsMq5oztl[cTMHsRA + (113 - 112)] = CQsRkF1;
            }
        }
    }
    for (cTMHsRA = 0; DozYwhR -D3J1g4HfCAB-1 > cTMHsRA; cTMHsRA = cTMHsRA + 1) {
        printf ("%.2lf ", ok3IsMq5oztl[cTMHsRA]);
    }
    printf ("%.2lf", ok3IsMq5oztl[DozYwhR -D3J1g4HfCAB-1]);
    return 0;
}

