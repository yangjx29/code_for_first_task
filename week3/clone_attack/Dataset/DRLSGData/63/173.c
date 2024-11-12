int main () {
    int IfK1TBLuAQ, QG2SrXZsADf, XNZarcD4j3, ax1l2FW;
    cin >> IfK1TBLuAQ >> QG2SrXZsADf;
    int dVqt6hBw [IfK1TBLuAQ] [QG2SrXZsADf];
    {
        int jfoTAUH0xMy = (272 - 272);
        while (jfoTAUH0xMy < IfK1TBLuAQ) {
            int HPDAQdr3 = (398 - 398);
            while (HPDAQdr3 < QG2SrXZsADf) {
                cin >> dVqt6hBw[jfoTAUH0xMy][HPDAQdr3];
                HPDAQdr3++;
            }
            jfoTAUH0xMy++;
        }
    }
    cin >> XNZarcD4j3 >> ax1l2FW;
    int FpTP3w [XNZarcD4j3] [ax1l2FW];
    {
        int jfoTAUH0xMy = (101 - 101);
        for (; jfoTAUH0xMy < XNZarcD4j3;) {
            {
                int HPDAQdr3 = (638 - 638);
                while (HPDAQdr3 < ax1l2FW) {
                    cin >> FpTP3w[jfoTAUH0xMy][HPDAQdr3];
                    HPDAQdr3++;
                }
            }
            jfoTAUH0xMy++;
        }
    }
    int mQzFVj45U, aDNSeK;
    if (QG2SrXZsADf <= IfK1TBLuAQ)
        mQzFVj45U = XNZarcD4j3 < IfK1TBLuAQ ? IfK1TBLuAQ : XNZarcD4j3;
    else
        mQzFVj45U = XNZarcD4j3 > IfK1TBLuAQ ? IfK1TBLuAQ : XNZarcD4j3;
    if (ax1l2FW >= XNZarcD4j3)
        aDNSeK = QG2SrXZsADf > ax1l2FW ? QG2SrXZsADf : ax1l2FW;
    else
        aDNSeK = ax1l2FW > QG2SrXZsADf ? QG2SrXZsADf : ax1l2FW;
    int FcKSRxuhCG [mQzFVj45U] [aDNSeK];
    {
        int jfoTAUH0xMy = (939 - 939);
        while (jfoTAUH0xMy < mQzFVj45U) {
            {
                int HPDAQdr3 = (488 - 488);
                while (HPDAQdr3 < aDNSeK) {
                    FcKSRxuhCG[jfoTAUH0xMy][HPDAQdr3] = (358 - 358);
                    HPDAQdr3++;
                }
            }
            jfoTAUH0xMy++;
        }
    }
    {
        int jfoTAUH0xMy = (606 - 606);
        while (jfoTAUH0xMy < mQzFVj45U) {
            {
                int HPDAQdr3 = (410 - 410);
                for (; HPDAQdr3 < aDNSeK;) {
                    {
                        int sHBglDSj3Jx = (920 - 920);
                        while (sHBglDSj3Jx < QG2SrXZsADf) {
                            FcKSRxuhCG[jfoTAUH0xMy][HPDAQdr3] = FcKSRxuhCG[jfoTAUH0xMy][HPDAQdr3] + dVqt6hBw[jfoTAUH0xMy][sHBglDSj3Jx] * FpTP3w[sHBglDSj3Jx][HPDAQdr3];
                            sHBglDSj3Jx++;
                        }
                    }
                    HPDAQdr3++;
                }
            }
            jfoTAUH0xMy++;
        }
    }
    {
        int jfoTAUH0xMy = (390 - 390);
        while (jfoTAUH0xMy < mQzFVj45U) {
            {
                int HPDAQdr3 = (652 - 652);
                while (HPDAQdr3 < aDNSeK - (609 - 608)) {
                    cout << FcKSRxuhCG[jfoTAUH0xMy][HPDAQdr3] << " ";
                    HPDAQdr3++;
                }
            }
            cout << FcKSRxuhCG[jfoTAUH0xMy][aDNSeK - (732 - 731)] << endl;
            jfoTAUH0xMy++;
        }
    }
    return 0;
}

