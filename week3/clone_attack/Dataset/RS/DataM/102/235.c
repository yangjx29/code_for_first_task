int main () {
    char t [(398 - 388)] = {"male"};
    int j;
    int C8ojOD;
    j = (949 - 949);
    C8ojOD = (414 - 414);
    double  HP9p1ordIic [(522 - 482)], CKbaz38TAW [40];
    double  UE4pVP0iX;
    int bwH0CyG;
    int rGdmKiR;
    int dtnIFN;
    struct   student {
        char cj87trcnC [10];
        double  b;
    };
    struct   student MQTgBG9AVb [100];
    scanf ("%d", &bwH0CyG);
    for (rGdmKiR = 0; rGdmKiR < bwH0CyG; rGdmKiR++)
        scanf ("%s%lf", MQTgBG9AVb[rGdmKiR].cj87trcnC, &MQTgBG9AVb[rGdmKiR].b);
    {
        rGdmKiR = 0;
        while (rGdmKiR < bwH0CyG) {
            if (strcmp (MQTgBG9AVb[rGdmKiR].cj87trcnC, t) == 0) {
                HP9p1ordIic[j] = MQTgBG9AVb[rGdmKiR].b;
                j++;
            }
            else {
                CKbaz38TAW[C8ojOD] = MQTgBG9AVb[rGdmKiR].b;
                C8ojOD++;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            rGdmKiR = rGdmKiR + 1;
        };
    }
    for (rGdmKiR = 0; rGdmKiR <= j - (178 - 177); rGdmKiR++) {
        dtnIFN = rGdmKiR;
        while (dtnIFN <= j - (596 - 595)) {
            if (HP9p1ordIic[rGdmKiR] < HP9p1ordIic[dtnIFN]) {
                UE4pVP0iX = HP9p1ordIic[rGdmKiR];
                HP9p1ordIic[rGdmKiR] = HP9p1ordIic[dtnIFN];
                HP9p1ordIic[dtnIFN] = UE4pVP0iX;
            }
            dtnIFN = dtnIFN + 1;
        };
    }
    {
        rGdmKiR = 0;
        while (rGdmKiR <= C8ojOD -(604 - 603)) {
            {
                dtnIFN = rGdmKiR;
                while (dtnIFN <= C8ojOD -(137 - 136)) {
                    if (CKbaz38TAW[rGdmKiR] < CKbaz38TAW[dtnIFN]) {
                        UE4pVP0iX = CKbaz38TAW[rGdmKiR];
                        CKbaz38TAW[rGdmKiR] = CKbaz38TAW[dtnIFN];
                        CKbaz38TAW[dtnIFN] = UE4pVP0iX;
                    }
                    dtnIFN = dtnIFN + 1;
                };
            }
            rGdmKiR++;
        };
    }
    {
        rGdmKiR = j - 1;
        while (rGdmKiR >= 0) {
            printf ("%.2f ", HP9p1ordIic[rGdmKiR]);
            rGdmKiR = rGdmKiR - 1;
        };
    }
    for (rGdmKiR = 0; rGdmKiR < C8ojOD -1; rGdmKiR++)
        printf ("%.2f ", CKbaz38TAW[rGdmKiR]);
    printf ("%.2f", CKbaz38TAW[C8ojOD -1]);
    return 0;
}

