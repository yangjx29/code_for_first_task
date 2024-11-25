int main () {
    int NlaosvKpTID;
    int n2VMJBOFP4p3;
    int Dl5HMcofs;
    int onmltR;
    int edx8QO9mI4;
    int xFXKpjod;
    scanf ("%d %d", &NlaosvKpTID, &Dl5HMcofs);
    int nb1ZHUsFI [NlaosvKpTID] [Dl5HMcofs];
    for (edx8QO9mI4 = (604 - 604); NlaosvKpTID > edx8QO9mI4; edx8QO9mI4++) {
        for (xFXKpjod = (586 - 586); Dl5HMcofs > xFXKpjod; xFXKpjod++)
            scanf ("%d ", &nb1ZHUsFI[edx8QO9mI4][xFXKpjod]);
    }
    scanf ("%d %d", &n2VMJBOFP4p3, &onmltR);
    int v7GYqHoiLd [n2VMJBOFP4p3] [onmltR];
    for (edx8QO9mI4 = (496 - 496); edx8QO9mI4 < n2VMJBOFP4p3; edx8QO9mI4++) {
        xFXKpjod = (1521 - 806) - (1448 - 733);
        while (onmltR > xFXKpjod) {
            scanf ("%d ", &v7GYqHoiLd[edx8QO9mI4][xFXKpjod]);
            xFXKpjod++;
        }
    }
    int tRngeT [NlaosvKpTID] [onmltR];
    for (edx8QO9mI4 = (413 - 413); NlaosvKpTID > edx8QO9mI4; edx8QO9mI4++) {
        for (xFXKpjod = (417 - 417); onmltR > xFXKpjod; xFXKpjod++) {
            tRngeT[edx8QO9mI4][xFXKpjod] = (116 - 116);
            for (int nLq0cXoH = (994 - 994);
            nLq0cXoH < n2VMJBOFP4p3; nLq0cXoH++)
                tRngeT[edx8QO9mI4][xFXKpjod] = tRngeT[edx8QO9mI4][xFXKpjod] + nb1ZHUsFI[edx8QO9mI4][nLq0cXoH] * v7GYqHoiLd[nLq0cXoH][xFXKpjod];
        }
    }
    int b9zcl4jirEb;
    b9zcl4jirEb = (560 - 560);
    for (edx8QO9mI4 = (284 - 284); NlaosvKpTID > edx8QO9mI4; edx8QO9mI4++) {
        for (xFXKpjod = (393 - 393); onmltR > xFXKpjod; xFXKpjod++) {
            if (!((906 - 906) != xFXKpjod)) {
                printf ("%d", tRngeT[edx8QO9mI4][(541 - 541)]);
                b9zcl4jirEb++;
            }
            if (xFXKpjod >= (907 - 906)) {
                printf (" %d", tRngeT[edx8QO9mI4][xFXKpjod]);
                b9zcl4jirEb++;
            }
            if (b9zcl4jirEb % onmltR == (520 - 520))
                printf ("\n");
        }
    }
    return (558 - 558);
}

