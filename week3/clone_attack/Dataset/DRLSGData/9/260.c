int main () {
    int QUem5iqu2o [100];
    char UGb2L0IJV [100] [10];
    char wSn59DCPoFVN [10];
    char KaYHoJ6Iyzx [(963 - 863)] [10];
    int GSNY6hmuC;
    int IAkP3BnVfKSl;
    int ZoaEifGbnMwV;
    int PbPt8B [(154 - 54)];
    int lnJ5Uv6K1W;
    scanf ("%d", &lnJ5Uv6K1W);
    for (GSNY6hmuC = (431 - 431); GSNY6hmuC < lnJ5Uv6K1W; GSNY6hmuC = GSNY6hmuC +(611 - 610)) {
        scanf ("%s", KaYHoJ6Iyzx[GSNY6hmuC]);
        scanf ("%d", &PbPt8B[GSNY6hmuC]);
        strcpy (UGb2L0IJV[GSNY6hmuC], KaYHoJ6Iyzx[GSNY6hmuC]);
        QUem5iqu2o[GSNY6hmuC] = PbPt8B[GSNY6hmuC];
    }
    for (GSNY6hmuC = (646 - 646); lnJ5Uv6K1W - (282 - 281) > GSNY6hmuC; GSNY6hmuC = GSNY6hmuC +(844 - 843)) {
        for (IAkP3BnVfKSl = (660 - 660); lnJ5Uv6K1W - GSNY6hmuC -(126 - 125) > IAkP3BnVfKSl; IAkP3BnVfKSl = IAkP3BnVfKSl +1) {
            if (QUem5iqu2o[IAkP3BnVfKSl] < QUem5iqu2o[IAkP3BnVfKSl +1]) {
                ZoaEifGbnMwV = QUem5iqu2o[IAkP3BnVfKSl];
                QUem5iqu2o[IAkP3BnVfKSl] = QUem5iqu2o[IAkP3BnVfKSl +1];
                strcpy (wSn59DCPoFVN, UGb2L0IJV[IAkP3BnVfKSl]);
                strcpy (UGb2L0IJV[IAkP3BnVfKSl], UGb2L0IJV[IAkP3BnVfKSl +1]);
                QUem5iqu2o[IAkP3BnVfKSl +1] = ZoaEifGbnMwV;
                strcpy (UGb2L0IJV[IAkP3BnVfKSl +1], wSn59DCPoFVN);
            }
        }
    }
    for (GSNY6hmuC = 0; lnJ5Uv6K1W > GSNY6hmuC; GSNY6hmuC = GSNY6hmuC +1) {
        if (QUem5iqu2o[GSNY6hmuC] >= 60)
            printf ("%s\n", UGb2L0IJV[GSNY6hmuC]);
    }
    for (GSNY6hmuC = 0; GSNY6hmuC < lnJ5Uv6K1W; GSNY6hmuC = GSNY6hmuC +1) {
        if (PbPt8B[GSNY6hmuC] < 60)
            printf ("%s\n", KaYHoJ6Iyzx[GSNY6hmuC]);
    }
    return 0;
}

