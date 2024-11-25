int I9RtPfxbNC (const  void  *FAhuOfPkpW, const  void  *CvgHL0) {
    return *(int*) CvgHL0 -*(int*) FAhuOfPkpW;
}

int main () {
    int scPXz2;
    int QkK1M280OnF;
    int QjlykLVmDic4;
    int yC8Uv3uK;
    int LIXkfG;
    int X5XTZdVqN [(1256 - 256)];
    int FiGentCUf [(1643 - 643)];
    int ZO5jge;
    int q61bLkASP;
    while ((378 - 377)) {
        yC8Uv3uK = (485 - 485);
        cin >> scPXz2;
        if (!((499 - 499) != scPXz2))
            break;
        QkK1M280OnF = (517 - 517);
        ZO5jge = (132 - 132);
        {
            q61bLkASP = 560 - 560;
            while (scPXz2 > q61bLkASP) {
                cin >> FiGentCUf[q61bLkASP];
                q61bLkASP++;
            }
        }
        {
            q61bLkASP = (969 - 129) - 840;
            while (scPXz2 > q61bLkASP) {
                cin >> X5XTZdVqN[q61bLkASP];
                q61bLkASP++;
            }
        }
        q61bLkASP = (494 - 494);
        qsort (X5XTZdVqN, scPXz2, sizeof (int), I9RtPfxbNC);
        qsort (FiGentCUf, scPXz2, sizeof (int), I9RtPfxbNC);
        QjlykLVmDic4 = scPXz2 - (776 - 775);
        LIXkfG = scPXz2 - 1;
        while (LIXkfG >= q61bLkASP) {
            if (FiGentCUf[QkK1M280OnF] > X5XTZdVqN[q61bLkASP]) {
                q61bLkASP++;
                ZO5jge++;
                QkK1M280OnF++;
            }
            else if (FiGentCUf[QkK1M280OnF] < X5XTZdVqN[q61bLkASP]) {
                q61bLkASP++;
                yC8Uv3uK++;
                QjlykLVmDic4--;
            }
            else if (!(FiGentCUf[QkK1M280OnF] != X5XTZdVqN[q61bLkASP])) {
                while (FiGentCUf[QjlykLVmDic4] > X5XTZdVqN[LIXkfG] && q61bLkASP < LIXkfG &&QjlykLVmDic4 > QkK1M280OnF) {
                    ZO5jge++;
                    QjlykLVmDic4--;
                    LIXkfG--;
                }
                if (X5XTZdVqN[LIXkfG] > FiGentCUf[QjlykLVmDic4]) {
                    QjlykLVmDic4--;
                    yC8Uv3uK++;
                    q61bLkASP++;
                }
                else {
                    if (X5XTZdVqN[LIXkfG] == FiGentCUf[QjlykLVmDic4]) {
                        if (X5XTZdVqN[q61bLkASP] > FiGentCUf[QjlykLVmDic4]) {
                            q61bLkASP++;
                            yC8Uv3uK++;
                            QjlykLVmDic4--;
                        }
                        else {
                            if (X5XTZdVqN[q61bLkASP] == FiGentCUf[QjlykLVmDic4]) {
                                q61bLkASP++;
                                QjlykLVmDic4--;
                            }
                        }
                    }
                }
            }
        }
        cout << (ZO5jge -yC8Uv3uK) * (696 - 496) << endl;
    }
    return 0;
}

