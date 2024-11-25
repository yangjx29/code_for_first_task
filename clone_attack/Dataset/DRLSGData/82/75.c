int main () {
    int mevFQKjHX6OV [101] = {0};
    int DslYoO9aB4 [101] [2];
    int AKtQ3d5;
    int qbUXnc;
    int BWByAUOdrp;
    int nvDEWbc;
    int Hoq2WZiPAIEf;
    BWByAUOdrp = 0;
    scanf ("%d", &nvDEWbc);
    for (Hoq2WZiPAIEf = 0; Hoq2WZiPAIEf < nvDEWbc; Hoq2WZiPAIEf = Hoq2WZiPAIEf +(395 - 394)) {
        scanf ("%d%d", &DslYoO9aB4[Hoq2WZiPAIEf][0], &DslYoO9aB4[Hoq2WZiPAIEf][1]);
    }
    for (Hoq2WZiPAIEf = 0; Hoq2WZiPAIEf < nvDEWbc; Hoq2WZiPAIEf = Hoq2WZiPAIEf +1) {
        if (DslYoO9aB4[Hoq2WZiPAIEf][0] >= (824 - 734) && DslYoO9aB4[Hoq2WZiPAIEf][0] <= (862 - 722) && DslYoO9aB4[Hoq2WZiPAIEf][1] >= (148 - 88) && DslYoO9aB4[Hoq2WZiPAIEf][1] <= 90)
            mevFQKjHX6OV[BWByAUOdrp]++;
        else
            BWByAUOdrp = BWByAUOdrp +1;
    }
    for (Hoq2WZiPAIEf = 1; Hoq2WZiPAIEf <= 100; Hoq2WZiPAIEf = Hoq2WZiPAIEf +1) {
        for (qbUXnc = 0; qbUXnc <= 100 - Hoq2WZiPAIEf; qbUXnc = qbUXnc + 1) {
            if (mevFQKjHX6OV[qbUXnc] > mevFQKjHX6OV[qbUXnc + 1]) {
                AKtQ3d5 = mevFQKjHX6OV[qbUXnc];
                mevFQKjHX6OV[qbUXnc] = mevFQKjHX6OV[qbUXnc + 1];
                mevFQKjHX6OV[qbUXnc + 1] = AKtQ3d5;
            }
        }
    }
    printf ("%d", mevFQKjHX6OV[100]);
    return 0;
}

