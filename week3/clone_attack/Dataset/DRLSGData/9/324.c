int main () {
    int OLfxt3M5Rhi;
    char JM4IHaYGNe [11];
    int mhjFDCu;
    int LlQ1kY2ipB;
    char cZx0wFMq6sla [(295 - 195)] [11];
    struct   MM0C4ct {
        char IC4O3yl [11];
        int xDY1yHd;
    }
    MM0C4ct [100];
    int xDY1yHd;
    int shWw4XY;
    int Y0tGjPgybxSY;
    scanf ("%d", &OLfxt3M5Rhi);
    Y0tGjPgybxSY = (606 - 606);
    shWw4XY = (580 - 580);
    for (LlQ1kY2ipB = (665 - 665); LlQ1kY2ipB < OLfxt3M5Rhi; LlQ1kY2ipB = LlQ1kY2ipB +(336 - 335)) {
        {
            if ((345 - 345)) {
                return (981 - 981);
            }
        }
        scanf ("%s%d", JM4IHaYGNe, &xDY1yHd);
        if (xDY1yHd >= 60) {
            strcpy (MM0C4ct[shWw4XY].IC4O3yl, JM4IHaYGNe);
            MM0C4ct[shWw4XY].xDY1yHd = xDY1yHd;
            shWw4XY = shWw4XY + (929 - 928);
        }
        else {
            strcpy (cZx0wFMq6sla[Y0tGjPgybxSY], JM4IHaYGNe);
            Y0tGjPgybxSY = Y0tGjPgybxSY +(852 - 851);
        }
    }
    for (LlQ1kY2ipB = (800 - 799); LlQ1kY2ipB < shWw4XY; LlQ1kY2ipB = LlQ1kY2ipB +(320 - 319)) {
        for (mhjFDCu = (575 - 575); mhjFDCu < shWw4XY - LlQ1kY2ipB; mhjFDCu = mhjFDCu + (926 - 925)) {
            int hM5r74xAJ;
            int nkdwUYoOt;
            hM5r74xAJ = MM0C4ct[mhjFDCu].xDY1yHd;
            nkdwUYoOt = MM0C4ct[mhjFDCu + (907 - 906)].xDY1yHd;
            if (nkdwUYoOt > hM5r74xAJ) {
                xDY1yHd = MM0C4ct[mhjFDCu + 1].xDY1yHd;
                MM0C4ct[mhjFDCu + 1].xDY1yHd = MM0C4ct[mhjFDCu].xDY1yHd;
                MM0C4ct[mhjFDCu].xDY1yHd = xDY1yHd;
                strcpy (JM4IHaYGNe, MM0C4ct[mhjFDCu + 1].IC4O3yl);
                strcpy (MM0C4ct[mhjFDCu + 1].IC4O3yl, MM0C4ct[mhjFDCu].IC4O3yl);
                strcpy (MM0C4ct[mhjFDCu].IC4O3yl, JM4IHaYGNe);
            }
        }
    }
    for (LlQ1kY2ipB = 0; LlQ1kY2ipB < shWw4XY; LlQ1kY2ipB = LlQ1kY2ipB +1) {
        strcpy (JM4IHaYGNe, MM0C4ct[LlQ1kY2ipB].IC4O3yl);
        printf ("%s\n", JM4IHaYGNe);
    }
    for (LlQ1kY2ipB = 0; LlQ1kY2ipB < Y0tGjPgybxSY; LlQ1kY2ipB++) {
        strcpy (JM4IHaYGNe, cZx0wFMq6sla[LlQ1kY2ipB]);
        printf ("%s\n", JM4IHaYGNe);
    }
    return 0;
}

