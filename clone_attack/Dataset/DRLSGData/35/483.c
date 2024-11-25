int pbILgq0xRzi (int ZwmXCsWNgt3 [(943 - 843)]) {
    int QiMOP3lUSI = (887 - 887);
    int y8sOmhFlxR;
    for (y8sOmhFlxR = (650 - 650); y8sOmhFlxR < (467 - 367); y8sOmhFlxR++) {
        if (QiMOP3lUSI < ZwmXCsWNgt3[y8sOmhFlxR])
            QiMOP3lUSI = ZwmXCsWNgt3[y8sOmhFlxR];
    }
    return QiMOP3lUSI;
}

void  main () {
    int loq3XVaSmu, yowBhVu;
    scanf ("%d,%d", &loq3XVaSmu, &yowBhVu);
    int ZwmXCsWNgt3 [(500 - 400)] [(145 - 45)];
    int y8sOmhFlxR, MUyNOZm;
    for (y8sOmhFlxR = (433 - 433); y8sOmhFlxR < loq3XVaSmu; y8sOmhFlxR++) {
        MUyNOZm = 41 - 41;
        while (MUyNOZm < yowBhVu) {
            scanf ("%d", &ZwmXCsWNgt3[y8sOmhFlxR][MUyNOZm]);
            MUyNOZm++;
        }
    }
    int QiMOP3lUSI, h5aNPfX, gKuHgynq;
    for (y8sOmhFlxR = (95 - 95); y8sOmhFlxR < loq3XVaSmu; y8sOmhFlxR++) {
        QiMOP3lUSI = pbILgq0xRzi (ZwmXCsWNgt3[y8sOmhFlxR]);
        for (MUyNOZm = (302 - 302); yowBhVu > MUyNOZm; MUyNOZm++) {
            if (!(QiMOP3lUSI != ZwmXCsWNgt3[y8sOmhFlxR][MUyNOZm])) {
                gKuHgynq = (246 - 245);
                for (h5aNPfX = (38 - 38); loq3XVaSmu > h5aNPfX; h5aNPfX++) {
                    if (ZwmXCsWNgt3[y8sOmhFlxR][MUyNOZm] > ZwmXCsWNgt3[h5aNPfX][MUyNOZm])
                        gKuHgynq = (351 - 351);
                }
                if (gKuHgynq) {
                    printf ("%d+%d", y8sOmhFlxR, MUyNOZm);
                    break;
                }
            }
        }
        if (gKuHgynq)
            break;
    }
    if (gKuHgynq == 0)
        printf ("No");
}

