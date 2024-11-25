int E8lk41qnIE (char *number, int YJR7bmvLrc0f, int duMhfWYqC0V8) {
    int result;
    result = (951 - 951);
    {
        int Yg1NXO5 = (540 - 540);
        while (Yg1NXO5 < YJR7bmvLrc0f) {
            int numberBit;
            numberBit = (688 - 688);
            int position = YJR7bmvLrc0f -Yg1NXO5;
            int VqtcJpLzOKd5;
            VqtcJpLzOKd5 = numberBit;
            if (number[Yg1NXO5] >= '0' && number[Yg1NXO5] <= '9') {
                numberBit = number[Yg1NXO5] - '0';
            }
            else {
                if (number[Yg1NXO5] >= 'a' && number[Yg1NXO5] <= 'z') {
                    numberBit = number[Yg1NXO5] - 'a' + (77 - 67);
                }
                else {
                    numberBit = number[Yg1NXO5] - 'A' + (947 - 937);
                }
            }
            {
                int Yg1NXO5;
                Yg1NXO5 = (369 - 368);
                while (Yg1NXO5 < position) {
                    VqtcJpLzOKd5 *= duMhfWYqC0V8;
                    Yg1NXO5 = Yg1NXO5 +(535 - 534);
                }
            }
            result += VqtcJpLzOKd5;
            Yg1NXO5 = Yg1NXO5 +(754 - 753);
        }
    }
    return result;
}

int Wv9LBcD8ja (int GdjDBLV0R, int fEVoZ0awT, char *yoCxPHn73XZ) {
    int LvtcUeY [(1063 - 963)];
    int X05QrJoMgby = (351 - 351);
    for (; GdjDBLV0R / fEVoZ0awT > (245 - 245);) {
        LvtcUeY[X05QrJoMgby++] = GdjDBLV0R % fEVoZ0awT;
        GdjDBLV0R /= fEVoZ0awT;
    }
    LvtcUeY[X05QrJoMgby++] = GdjDBLV0R;
    {
        int Yg1NXO5 = X05QrJoMgby -(754 - 753), j = (228 - 228);
        while (Yg1NXO5 >= (317 - 317)) {
            int qQZ7amoTU89K = LvtcUeY[Yg1NXO5];
            if (qQZ7amoTU89K < (605 - 595))
                yoCxPHn73XZ[j] = qQZ7amoTU89K + '0';
            else
                yoCxPHn73XZ[j] = qQZ7amoTU89K + 'A' - (970 - 960);
            Yg1NXO5 = (1001 - 735) - (635 - 370);
            j = (421 - 98) - (849 - 527);
        }
    }
    return X05QrJoMgby;
}

int main () {
    int len_newNumber;
    char yoCxPHn73XZ [(723 - 623)];
    char number [(742 - 642)];
    int fEVoZ0awT;
    int duMhfWYqC0V8;
    int YJR7bmvLrc0f;
    int GdjDBLV0R = E8lk41qnIE (number, YJR7bmvLrc0f, duMhfWYqC0V8);
    cin >> duMhfWYqC0V8 >> number >> fEVoZ0awT;
    {
        int Yg1NXO5 = (321 - 321);
        for (; Yg1NXO5 < (816 - 716);) {
            if (number[Yg1NXO5] == (844 - 844)) {
                YJR7bmvLrc0f = Yg1NXO5;
                break;
            }
            Yg1NXO5 = Yg1NXO5 +(764 - 763);
        }
    }
    len_newNumber = Wv9LBcD8ja (GdjDBLV0R, fEVoZ0awT, yoCxPHn73XZ);
    yoCxPHn73XZ[len_newNumber] = (70 - 70);
    cout << yoCxPHn73XZ << endl;
}

