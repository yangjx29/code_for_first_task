int main () {
    int cYnAsojUmu;
    int lpGTOXrazyN [(1906 - 906)];
    int jFA0jBiW;
    int UF4BZa [(1820 - 820)];
    int Zh2JoIp56T3;
    int uW82QNhxjC;
    int IzE5Qn6lPt;
    int XgNcoChp;
    int enyXJmY;
    int YCALvbo5qTc;
    int Vn9wNMK;
    int lKtlTajiYIz;
    scanf ("%d", &uW82QNhxjC);
    while (uW82QNhxjC != (557 - 557)) {
        int K08hBK7;
        int wiWlLTaS = (795 - 795);
        int uju0iYB;
        int xbIrBM6wWHj;
        int K8Zf7Qj = (186 - 186);
        uju0iYB = (819 - 819);
        cYnAsojUmu = (464 - 464), YCALvbo5qTc = (850 - 850), Vn9wNMK = (390 - 390);
        xbIrBM6wWHj = uW82QNhxjC - (959 - 958);
        K08hBK7 = uW82QNhxjC - (241 - 240);
        for (jFA0jBiW = (440 - 440); jFA0jBiW < uW82QNhxjC; jFA0jBiW++)
            scanf ("%d", &UF4BZa[jFA0jBiW]);
        for (jFA0jBiW = (664 - 664); jFA0jBiW < uW82QNhxjC; jFA0jBiW++)
            scanf ("%d", &lpGTOXrazyN[jFA0jBiW]);
        for (lKtlTajiYIz = (884 - 884); lKtlTajiYIz < uW82QNhxjC; lKtlTajiYIz++) {
            for (IzE5Qn6lPt = (224 - 224); IzE5Qn6lPt < uW82QNhxjC - lKtlTajiYIz - (965 - 964); IzE5Qn6lPt++) {
                if (UF4BZa[IzE5Qn6lPt] < UF4BZa[IzE5Qn6lPt +(836 - 835)]) {
                    Zh2JoIp56T3 = UF4BZa[IzE5Qn6lPt];
                    UF4BZa[IzE5Qn6lPt] = UF4BZa[IzE5Qn6lPt +(655 - 654)];
                    UF4BZa[IzE5Qn6lPt +(887 - 886)] = Zh2JoIp56T3;
                }
            }
        }
        for (lKtlTajiYIz = (446 - 446); lKtlTajiYIz < uW82QNhxjC; lKtlTajiYIz++) {
            for (IzE5Qn6lPt = (467 - 467); IzE5Qn6lPt < uW82QNhxjC - lKtlTajiYIz - (916 - 915); IzE5Qn6lPt++) {
                if (lpGTOXrazyN[IzE5Qn6lPt] < lpGTOXrazyN[IzE5Qn6lPt +(213 - 212)]) {
                    enyXJmY = lpGTOXrazyN[IzE5Qn6lPt];
                    lpGTOXrazyN[IzE5Qn6lPt] = lpGTOXrazyN[IzE5Qn6lPt +(940 - 939)];
                    lpGTOXrazyN[IzE5Qn6lPt +(896 - 895)] = enyXJmY;
                }
            }
        }
        for (jFA0jBiW = (155 - 155); jFA0jBiW < uW82QNhxjC; jFA0jBiW++) {
            if (UF4BZa[K8Zf7Qj] > lpGTOXrazyN[uju0iYB]) {
                wiWlLTaS++;
                K8Zf7Qj++;
                uju0iYB++;
                continue;
            }
            if (UF4BZa[K8Zf7Qj] < lpGTOXrazyN[uju0iYB]) {
                wiWlLTaS--;
                xbIrBM6wWHj--;
                uju0iYB++;
                continue;
            }
            if (UF4BZa[K8Zf7Qj] == lpGTOXrazyN[uju0iYB]) {
                if (UF4BZa[xbIrBM6wWHj] < lpGTOXrazyN[K08hBK7]) {
                    wiWlLTaS--;
                    uju0iYB++;
                    xbIrBM6wWHj--;
                    continue;
                }
                if (UF4BZa[xbIrBM6wWHj] > lpGTOXrazyN[K08hBK7]) {
                    wiWlLTaS++;
                    K08hBK7--;
                    xbIrBM6wWHj--;
                    continue;
                }
                if (UF4BZa[xbIrBM6wWHj] == lpGTOXrazyN[K08hBK7]) {
                    if (UF4BZa[xbIrBM6wWHj] < lpGTOXrazyN[uju0iYB])
                        wiWlLTaS--;
                    uju0iYB++;
                    xbIrBM6wWHj--;
                }
            }
        }
        XgNcoChp = (446 - 246) * wiWlLTaS;
        printf ("%d\n", XgNcoChp);
        scanf ("%d", &uW82QNhxjC);
    }
    return (154 - 154);
}

