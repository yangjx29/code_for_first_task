void  Tg89X7HYUV (int ISFsNpRBwg, int *ArEweT3);

int main () {
    int pd3jU4Z;
    int psWeh34tNjBp;
    int ISFsNpRBwg;
    int HBYJD45ZaxM [1000], rB1dUw9Fk0np [1000];
    int KCPGVE;
    int bczOPmWgD;
    int lisC6N;
    int dujVmOJ;
    int iSTQMHuV0;
    int GsAC5fcT;
    int GMBlzt9s2;
    int JtD3UXVeS2;
    int t;
    int JMFku5i4;
    int FyUVqaGACi;
    int DBJ9Es4;
    {
        lisC6N = 0;
        while (1) {
            scanf ("%d", &GsAC5fcT);
            if (!(0 != GsAC5fcT))
                break;
            memset (HBYJD45ZaxM, 0, 1000 * sizeof (int));
            bczOPmWgD = psWeh34tNjBp = 0;
            pd3jU4Z = lisC6N = GsAC5fcT -1;
            JMFku5i4 = 0;
            dujVmOJ = 0;
            memset (rB1dUw9Fk0np, 0, 1000 * sizeof (int));
            Tg89X7HYUV (GsAC5fcT, HBYJD45ZaxM);
            Tg89X7HYUV (GsAC5fcT, rB1dUw9Fk0np);
            while (psWeh34tNjBp <= pd3jU4Z && lisC6N >= bczOPmWgD) {
                if (rB1dUw9Fk0np[psWeh34tNjBp] < HBYJD45ZaxM[bczOPmWgD]) {
                    psWeh34tNjBp++;
                    bczOPmWgD++;
                    JMFku5i4++;
                }
                else if (rB1dUw9Fk0np[psWeh34tNjBp] > HBYJD45ZaxM[bczOPmWgD]) {
                    dujVmOJ++;
                    bczOPmWgD++;
                    pd3jU4Z--;
                }
                else {
                    if (HBYJD45ZaxM[lisC6N] > rB1dUw9Fk0np[pd3jU4Z]) {
                        lisC6N--;
                        pd3jU4Z--;
                        JMFku5i4++;
                    }
                    else if (HBYJD45ZaxM[bczOPmWgD] < rB1dUw9Fk0np[pd3jU4Z]) {
                        bczOPmWgD++;
                        dujVmOJ++;
                        pd3jU4Z--;
                    }
                    else {
                        pd3jU4Z--;
                        bczOPmWgD++;
                    }
                }
            }
            lisC6N++;
            iSTQMHuV0 = 200 * JMFku5i4 -200 * dujVmOJ;
            printf ("%d\n", iSTQMHuV0);
        }
    }
    return 0;
}

void  Tg89X7HYUV (int ISFsNpRBwg, int ArEweT3 []) {
    int bczOPmWgD, psWeh34tNjBp, pd3jU4Z;
    for (bczOPmWgD = 0; ISFsNpRBwg > bczOPmWgD; bczOPmWgD++)
        scanf ("%d", &ArEweT3[bczOPmWgD]);
    for (bczOPmWgD = 0; bczOPmWgD < ISFsNpRBwg -1; bczOPmWgD++) {
        psWeh34tNjBp = 0;
        while (psWeh34tNjBp < ISFsNpRBwg -1 - bczOPmWgD) {
            if (ArEweT3[psWeh34tNjBp] > ArEweT3[psWeh34tNjBp + 1]) {
                pd3jU4Z = ArEweT3[psWeh34tNjBp];
                ArEweT3[psWeh34tNjBp] = ArEweT3[psWeh34tNjBp + 1];
                ArEweT3[psWeh34tNjBp + 1] = pd3jU4Z;
            }
            psWeh34tNjBp++;
        }
    }
}

