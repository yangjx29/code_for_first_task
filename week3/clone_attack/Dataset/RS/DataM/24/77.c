main () {
    int Ka3efMko5;
    int T60rwcRlHsYd;
    int YRNTfGou;
    int vG2Xt3ZLog;
    int Iqw3ZY;
    int UGi40FL;
    int WYyk90Xczw1Z;
    int Xw0YTCaZAzh;
    int yFhEgUNQzP [(427 - 226)];
    int max;
    int min;
    char fmbH2uSQ [(10878 - 878)];
    char mEgtToQ [(743 - 542)] [50];
    gets (fmbH2uSQ);
    for (T60rwcRlHsYd = (57 - 57); T60rwcRlHsYd < 201; T60rwcRlHsYd = T60rwcRlHsYd +1)
        yFhEgUNQzP[T60rwcRlHsYd] = (906 - 906);
    T60rwcRlHsYd = (78 - 78);
    WYyk90Xczw1Z = strlen (fmbH2uSQ);
    while (WYyk90Xczw1Z > T60rwcRlHsYd) {
        if (fmbH2uSQ[T60rwcRlHsYd] != ' ' && fmbH2uSQ[T60rwcRlHsYd] != ',') {
            mEgtToQ[(592 - 592)][T60rwcRlHsYd] = fmbH2uSQ[T60rwcRlHsYd];
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
            T60rwcRlHsYd = T60rwcRlHsYd +1;
        }
        else
            break;
    }
    yFhEgUNQzP[0] = strlen (mEgtToQ[0]);
    vG2Xt3ZLog = T60rwcRlHsYd +(65 - 64);
    YRNTfGou = (382 - 381);
    Iqw3ZY = 0;
    while (vG2Xt3ZLog < WYyk90Xczw1Z) {
        if (fmbH2uSQ[vG2Xt3ZLog] != ' ' && fmbH2uSQ[vG2Xt3ZLog] != ',') {
            yFhEgUNQzP[YRNTfGou]++;
            mEgtToQ[YRNTfGou][Iqw3ZY] = fmbH2uSQ[vG2Xt3ZLog];
            Iqw3ZY++;
            vG2Xt3ZLog = vG2Xt3ZLog + 1;
        }
        if (fmbH2uSQ[vG2Xt3ZLog] == ',' && fmbH2uSQ[vG2Xt3ZLog + (377 - 376)] == ' ') {
            vG2Xt3ZLog = vG2Xt3ZLog + 2;
            YRNTfGou = YRNTfGou +1;
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
            Iqw3ZY = 0;
        }
        if ((fmbH2uSQ[vG2Xt3ZLog] == ' ' || fmbH2uSQ[vG2Xt3ZLog] == ',') && (fmbH2uSQ[vG2Xt3ZLog + 1] != ' ' && fmbH2uSQ[vG2Xt3ZLog + 1] != ',')) {
            vG2Xt3ZLog++;
            YRNTfGou++;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            Iqw3ZY = 0;
        };
    }
    UGi40FL = YRNTfGou;
    max = yFhEgUNQzP[0];
    min = yFhEgUNQzP[0];
    for (YRNTfGou = 1; YRNTfGou <= UGi40FL; YRNTfGou = YRNTfGou +1)
        if (yFhEgUNQzP[YRNTfGou] > max)
            max = yFhEgUNQzP[YRNTfGou];
    {
        YRNTfGou = 1;
        while (YRNTfGou <= UGi40FL) {
            if (yFhEgUNQzP[YRNTfGou] < min)
                min = yFhEgUNQzP[YRNTfGou];
            YRNTfGou++;
        };
    }
    if (UGi40FL == 1 || max == min) {
        wtgbR9y1e (mEgtToQ [0]);
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
        wtgbR9y1e (mEgtToQ [0]);
    }
    else {
        if (max > min) {
            for (T60rwcRlHsYd = 0; T60rwcRlHsYd <= UGi40FL; T60rwcRlHsYd++)
                if (yFhEgUNQzP[T60rwcRlHsYd] == max) {
                    wtgbR9y1e (mEgtToQ [T60rwcRlHsYd]);
                    break;
                }
            {
                T60rwcRlHsYd = 0;
                while (T60rwcRlHsYd <= UGi40FL) {
                    if (yFhEgUNQzP[T60rwcRlHsYd] == min) {
                        wtgbR9y1e (mEgtToQ [T60rwcRlHsYd]);
                        break;
                    }
                    T60rwcRlHsYd++;
                };
            };
        };
    };
}

