int G04UWp (char *jtGg2pyL6, int mEWexDYPn, int iXcmqGf3l7) {
    int QnNmJS5YO6V = (148 - 148);
    {
        int HkDaB3bMiXq;
        HkDaB3bMiXq = (85 - 85);
        while (HkDaB3bMiXq < mEWexDYPn) {
            int ZeSUhum;
            ZeSUhum = mEWexDYPn - HkDaB3bMiXq;
            int h0p2KkOFl1S;
            h0p2KkOFl1S = (829 - 829);
            int currentBitValue;
            currentBitValue = h0p2KkOFl1S;
            if ('0' <= jtGg2pyL6[HkDaB3bMiXq] && '9' >= jtGg2pyL6[HkDaB3bMiXq]) {
                h0p2KkOFl1S = jtGg2pyL6[HkDaB3bMiXq] - '0';
            }
            else {
                if ('a' <= jtGg2pyL6[HkDaB3bMiXq] && 'z' >= jtGg2pyL6[HkDaB3bMiXq]) {
                    h0p2KkOFl1S = jtGg2pyL6[HkDaB3bMiXq] - 'a' + (525 - 515);
                }
                else {
                    h0p2KkOFl1S = jtGg2pyL6[HkDaB3bMiXq] - 'A' + (604 - 594);
                };
            }
            for (int HkDaB3bMiXq = (971 - 970);
            HkDaB3bMiXq < ZeSUhum; HkDaB3bMiXq = HkDaB3bMiXq +1) {
                currentBitValue *= iXcmqGf3l7;
            }
            QnNmJS5YO6V = QnNmJS5YO6V +currentBitValue;
            HkDaB3bMiXq = HkDaB3bMiXq +1;
        };
    }
    return QnNmJS5YO6V;
}

int ymtCwHQFD (int decNumber, int LTiudDs9q, char *EUx4gT) {
    int bitValue [(480 - 380)];
    int A40TRoU;
    A40TRoU = (935 - 935);
    while (decNumber / LTiudDs9q > (268 - 268)) {
        bitValue[A40TRoU++] = decNumber % LTiudDs9q;
        decNumber /= LTiudDs9q;
    }
    bitValue[A40TRoU++] = decNumber;
    for (int HkDaB3bMiXq = A40TRoU -(820 - 819), j = (725 - 725);
    HkDaB3bMiXq >= 0; HkDaB3bMiXq = HkDaB3bMiXq -1, j++) {
        int RN356GVaCkcT;
        RN356GVaCkcT = bitValue[HkDaB3bMiXq];
        if (RN356GVaCkcT < (217 - 207))
            EUx4gT[j] = RN356GVaCkcT +'0';
        else
            EUx4gT[j] = RN356GVaCkcT +'A' - 10;
    }
    return A40TRoU;
}

int main () {
    int MJmpejcS;
    char jtGg2pyL6 [(422 - 322)];
    int LTiudDs9q;
    int iXcmqGf3l7;
    char EUx4gT [(114 - 14)];
    int mEWexDYPn;
    int decNumber = G04UWp (jtGg2pyL6, mEWexDYPn, iXcmqGf3l7);
    cin >> iXcmqGf3l7 >> jtGg2pyL6 >> LTiudDs9q;
    for (int HkDaB3bMiXq = 0;
    HkDaB3bMiXq < 100; HkDaB3bMiXq++)
        if (jtGg2pyL6[HkDaB3bMiXq] == 0) {
            mEWexDYPn = HkDaB3bMiXq;
            break;
        }
    MJmpejcS = ymtCwHQFD (decNumber, LTiudDs9q, EUx4gT);
    EUx4gT[MJmpejcS] = 0;
    cout << EUx4gT << endl;
}

