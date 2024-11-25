int AtPmOGBFc08W [(1012 - 912)] [(233 - 133)] = {(583 - 583)}, faRmiA07IMV [100] [100];

void  PbNHJIT (int AZk54JI0, int y2ayUHWR) {
    void  ikMevmt4zNF (int AZk54JI0, int y2ayUHWR);
    printf ("%d\n", faRmiA07IMV[AZk54JI0][y2ayUHWR]);
    AtPmOGBFc08W[AZk54JI0][y2ayUHWR] = (897 - 897);
    if (AtPmOGBFc08W[AZk54JI0][y2ayUHWR + (579 - 578)] != (676 - 676)) {
        PbNHJIT (AZk54JI0, y2ayUHWR + (427 - 426));
    }
    else {
        if (AtPmOGBFc08W[AZk54JI0 +(556 - 555)][y2ayUHWR] != (274 - 274)) {
            ikMevmt4zNF (AZk54JI0 +(859 - 858), y2ayUHWR);
        }
    }
}

void  dpo1EsJA (int AZk54JI0, int y2ayUHWR) {
    void  mN6eWscbkT (int AZk54JI0, int y2ayUHWR);
    printf ("%d\n", faRmiA07IMV[AZk54JI0][y2ayUHWR]);
    AtPmOGBFc08W[AZk54JI0][y2ayUHWR] = (969 - 969);
    if (AtPmOGBFc08W[AZk54JI0][y2ayUHWR - (620 - 619)] != 0 && 0 < y2ayUHWR) {
        dpo1EsJA (AZk54JI0, y2ayUHWR - 1);
    }
    else {
        if (AtPmOGBFc08W[AZk54JI0 -1][y2ayUHWR] != 0) {
            mN6eWscbkT (AZk54JI0 -1, y2ayUHWR);
        }
    }
}

void  mN6eWscbkT (int AZk54JI0, int y2ayUHWR) {
    void  PbNHJIT (int AZk54JI0, int y2ayUHWR);
    printf ("%d\n", faRmiA07IMV[AZk54JI0][y2ayUHWR]);
    AtPmOGBFc08W[AZk54JI0][y2ayUHWR] = 0;
    if (AtPmOGBFc08W[AZk54JI0 -1][y2ayUHWR] != 0 && 0 < AZk54JI0) {
        mN6eWscbkT (AZk54JI0 -1, y2ayUHWR);
    }
    else {
        if (AtPmOGBFc08W[AZk54JI0][y2ayUHWR + 1] != 0) {
            PbNHJIT (AZk54JI0, y2ayUHWR + 1);
        }
    }
}

void  ikMevmt4zNF (int AZk54JI0, int y2ayUHWR) {
    void  dpo1EsJA (int AZk54JI0, int y2ayUHWR);
    printf ("%d\n", faRmiA07IMV[AZk54JI0][y2ayUHWR]);
    AtPmOGBFc08W[AZk54JI0][y2ayUHWR] = 0;
    if (AtPmOGBFc08W[AZk54JI0 +1][y2ayUHWR] != 0) {
        ikMevmt4zNF (AZk54JI0 +1, y2ayUHWR);
    }
    else {
        if (AtPmOGBFc08W[AZk54JI0][y2ayUHWR - 1] != 0) {
            dpo1EsJA (AZk54JI0, y2ayUHWR - 1);
        }
    }
}

int main () {
    int voFBswPU;
    int xoGJILwi9;
    void  dpo1EsJA (int AZk54JI0, int y2ayUHWR);
    void  PbNHJIT (int AZk54JI0, int y2ayUHWR);
    void  mN6eWscbkT (int AZk54JI0, int y2ayUHWR);
    void  ikMevmt4zNF (int AZk54JI0, int y2ayUHWR);
    int y2ayUHWR;
    int AZk54JI0;
    PbNHJIT (0, 0);
    scanf ("%d %d", &xoGJILwi9, &voFBswPU);
    {
        AZk54JI0 = 0;
        for (; xoGJILwi9 > AZk54JI0;) {
            {
                y2ayUHWR = 0;
                while (voFBswPU > y2ayUHWR) {
                    scanf ("%d", &faRmiA07IMV[AZk54JI0][y2ayUHWR]);
                    AtPmOGBFc08W[AZk54JI0][y2ayUHWR] = 1;
                    y2ayUHWR = y2ayUHWR + 1;
                }
            }
            AZk54JI0 = AZk54JI0 +1;
        }
    }
    return 0;
}

