int amHD19Uonsj (const  void  *kSkML2, const  void  *HwfV2par9F) {
    return *(int*) HwfV2par9F -*(int*) kSkML2;
}

int main () {
    int QbCWUuF [1010];
    int krSFm6;
    int BWoZ8mEG6JzQ [1010];
    for (; cin >> krSFm6, krSFm6 != 0;) {
        int nZnh5lwz;
        int QTtUaygVh;
        int RZVu9Qyml;
        int nMvNOzuQ;
        int rMXheU = 0;
        int WiM1rL;
        int iK0JYRrH79;
        RZVu9Qyml = 0;
        WiM1rL = krSFm6 - 1;
        nMvNOzuQ = krSFm6 - 1;
        {
            QTtUaygVh = 0;
            while (krSFm6 > QTtUaygVh) {
                cin >> QbCWUuF[QTtUaygVh];
                QTtUaygVh = QTtUaygVh +1;
            }
        }
        {
            QTtUaygVh = 0;
            while (krSFm6 > QTtUaygVh) {
                cin >> BWoZ8mEG6JzQ[QTtUaygVh];
                QTtUaygVh = QTtUaygVh +1;
            }
        }
        qsort (QbCWUuF, krSFm6, sizeof (QbCWUuF [0]), amHD19Uonsj);
        qsort (BWoZ8mEG6JzQ, krSFm6, sizeof (BWoZ8mEG6JzQ [0]), amHD19Uonsj);
        {
            QTtUaygVh = 0;
            while (QTtUaygVh < krSFm6) {
                if (QbCWUuF[RZVu9Qyml] > BWoZ8mEG6JzQ[QTtUaygVh]) {
                    rMXheU = rMXheU + 1;
                    RZVu9Qyml = RZVu9Qyml +1;
                }
                else if (QbCWUuF[RZVu9Qyml] < BWoZ8mEG6JzQ[QTtUaygVh]) {
                    rMXheU = rMXheU - 1;
                    WiM1rL--;
                }
                else {
                    for (; WiM1rL >= RZVu9Qyml;) {
                        if (QbCWUuF[WiM1rL] > BWoZ8mEG6JzQ[nMvNOzuQ]) {
                            nMvNOzuQ--;
                            rMXheU++;
                            WiM1rL--;
                        }
                        else {
                            if (QbCWUuF[WiM1rL] < BWoZ8mEG6JzQ[QTtUaygVh])
                                rMXheU = rMXheU - 1;
                            WiM1rL--;
                            break;
                        }
                    }
                }
                if (RZVu9Qyml > WiM1rL)
                    break;
                QTtUaygVh++;
            }
        }
        cout << 200 * rMXheU << endl;
    }
    return 0;
}

