int CqMUnf6apE (const  void  *PlgiuMSs2EQm, const  void  *kIBDuhxfSAX0) {
    return ((*(int*) kIBDuhxfSAX0) - (*(int*) PlgiuMSs2EQm));
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

int main () {
    int N7cnfS;
    int j;
    int k;
    int GuIFs9Acd;
    int dXlBjN;
    int slC3ZTconF [(100192 - 192)];
    int ME2mSwufWh3 [(100230 - 230)];
    int adyUNc;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    int VyORq50wEI;
    int wj9iTPIl0Fk;
    int XWMf31gz2oc;
    int z4EaAcJbCPnR;
    int f;
    dXlBjN = (766 - 765);
    for (; dXlBjN != (667 - 667);) {
        scanf ("%d", &dXlBjN);
        if (dXlBjN == (924 - 924))
            break;
        f = 0;
        z4EaAcJbCPnR = 0;
        VyORq50wEI = 0;
        adyUNc = 0;
        for (N7cnfS = 0; N7cnfS < dXlBjN; N7cnfS = N7cnfS +1)
            scanf ("%d", &slC3ZTconF[N7cnfS]);
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
        for (N7cnfS = 0; N7cnfS < dXlBjN; N7cnfS++)
            scanf ("%d", &ME2mSwufWh3[N7cnfS]);
        qsort (slC3ZTconF, dXlBjN, sizeof (slC3ZTconF [0]), CqMUnf6apE);
        qsort (ME2mSwufWh3, dXlBjN, sizeof (ME2mSwufWh3 [0]), CqMUnf6apE);
        wj9iTPIl0Fk = dXlBjN - 1;
        XWMf31gz2oc = dXlBjN - 1;
        while (wj9iTPIl0Fk >= adyUNc) {
            if (slC3ZTconF[wj9iTPIl0Fk] < ME2mSwufWh3[XWMf31gz2oc]) {
                wj9iTPIl0Fk--;
                f++;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                VyORq50wEI++;
            }
            else if (slC3ZTconF[wj9iTPIl0Fk] > ME2mSwufWh3[XWMf31gz2oc]) {
                XWMf31gz2oc--;
                wj9iTPIl0Fk--;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                z4EaAcJbCPnR++;
            }
            else if (slC3ZTconF[adyUNc] > ME2mSwufWh3[VyORq50wEI]) {
                adyUNc++;
                z4EaAcJbCPnR++;
                VyORq50wEI++;
            }
            else if (slC3ZTconF[adyUNc] < ME2mSwufWh3[VyORq50wEI]) {
                VyORq50wEI++;
                f++;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        for (x = 0; x < 20; x++) {
                            y += x;
                        }
                        if (y > 30)
                            return y;
                    }
                }
                wj9iTPIl0Fk--;
            }
            else if (slC3ZTconF[wj9iTPIl0Fk] < ME2mSwufWh3[VyORq50wEI]) {
                f++;
                wj9iTPIl0Fk--;
                VyORq50wEI++;
            }
            else {
                wj9iTPIl0Fk--;
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
                VyORq50wEI++;
            };
        }
        printf ("%d\n", (941 - 741) * (z4EaAcJbCPnR - f));
    }
    return 0;
}

