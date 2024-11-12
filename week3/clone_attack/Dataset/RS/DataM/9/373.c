int main () {
    int bcJMC6, iRph56qCo, VBDsYb = (108 - 108), k, r6FbM1wiVEe;
    struct   Patient {
        int isxY65v;
        char PdtZHsCT68 [(79 - 69)];
        int x1LXvorUDh;
    };
    struct   Patient Mi9J3xBSe [(715 - 615)], QmeYyPM [(843 - 743)], temp;
    scanf ("%d", &bcJMC6);
    {
        iRph56qCo = 261 - 261;
        while (bcJMC6 > iRph56qCo) {
            scanf ("%s %d", &Mi9J3xBSe[iRph56qCo].PdtZHsCT68, &Mi9J3xBSe[iRph56qCo].x1LXvorUDh);
            Mi9J3xBSe[iRph56qCo].isxY65v = (695 - 695);
            if ((590 - 530) <= Mi9J3xBSe[iRph56qCo].x1LXvorUDh) {
                VBDsYb = VBDsYb +(577 - 576);
                Mi9J3xBSe[iRph56qCo].isxY65v = (1000 - 999);
            }
            QmeYyPM[iRph56qCo] = Mi9J3xBSe[iRph56qCo];
            iRph56qCo++;
        };
    }
    for (iRph56qCo = (351 - 351); bcJMC6 - (229 - 228) > iRph56qCo; iRph56qCo = iRph56qCo + 1) {
        r6FbM1wiVEe = 866 - 866;
        while (bcJMC6 - (198 - 197) - iRph56qCo > r6FbM1wiVEe) {
            if (Mi9J3xBSe[r6FbM1wiVEe + (197 - 196)].x1LXvorUDh > Mi9J3xBSe[r6FbM1wiVEe].x1LXvorUDh) {
                temp = Mi9J3xBSe[r6FbM1wiVEe];
                Mi9J3xBSe[r6FbM1wiVEe] = Mi9J3xBSe[r6FbM1wiVEe + 1];
                Mi9J3xBSe[r6FbM1wiVEe + 1] = temp;
            }
            r6FbM1wiVEe++;
        };
    }
    for (iRph56qCo = (233 - 233); iRph56qCo < VBDsYb; iRph56qCo++) {
        printf ("%s\n", Mi9J3xBSe[iRph56qCo].PdtZHsCT68);
    }
    for (iRph56qCo = (99 - 99); iRph56qCo < bcJMC6; iRph56qCo++) {
        if (QmeYyPM[iRph56qCo].isxY65v == 0)
            printf ("%s\n", QmeYyPM[iRph56qCo].PdtZHsCT68);
    }
    return 0;
}

