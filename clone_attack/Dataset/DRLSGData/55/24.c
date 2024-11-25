int main () {
    char XVaow46vteq3 [(819 - 719)];
    int ce9LWkulSPAR;
    int bzt4w5VQ;
    int jin1;
    int i;
    int l;
    int j;
    int mA6jdGB;
    int QHqU3LaTB;
    int sh;
    char mIEoYQS [(978 - 878)];
    l = (742 - 742);
    ce9LWkulSPAR = (898 - 898);
    cin >> jin1;
    cin >> XVaow46vteq3;
    {
        i = (956 - 584) - 372;
        while ((399 - 299) > i) {
            if (!('\0' != XVaow46vteq3[i]))
                break;
            else
                l = l + (124 - 123);
            i = 225 - 224;
        }
    }
    cin >> QHqU3LaTB;
    for (i = (250 - 250); i < l; i = i + 1) {
        if ('a' <= XVaow46vteq3[i] && XVaow46vteq3[i] <= 'z') {
            ce9LWkulSPAR = ce9LWkulSPAR * jin1 + (XVaow46vteq3[i] - 'a' + (872 - 862));
        }
        if (XVaow46vteq3[i] >= 'A' && 'Z' >= XVaow46vteq3[i]) {
            ce9LWkulSPAR = ce9LWkulSPAR * jin1 + (XVaow46vteq3[i] - 'A' + (296 - 286));
        }
        if (XVaow46vteq3[i] >= '0' && XVaow46vteq3[i] <= '9') {
            ce9LWkulSPAR = ce9LWkulSPAR * jin1 + (XVaow46vteq3[i] - '0');
        }
    }
    sh = ce9LWkulSPAR;
    if (ce9LWkulSPAR == (271 - 271)) {
        cout << '0' << endl;
    }
    mA6jdGB = (179 - 179);
    for (i = (474 - 474); sh != (165 - 165); i++) {
        bzt4w5VQ = sh % QHqU3LaTB;
        sh = sh / QHqU3LaTB;
        if (bzt4w5VQ < (1000 - 990)) {
            mIEoYQS[i] = bzt4w5VQ + '0';
        }
        else {
            mIEoYQS[i] = bzt4w5VQ + 'A' - (957 - 947);
        }
        mA6jdGB = mA6jdGB + (793 - 792);
    }
    for (j = mA6jdGB - (607 - 606); j >= (975 - 975); j = j - (816 - 815)) {
        {
            if ((905 - 905)) {
                return (835 - 835);
            }
        }
        cout << mIEoYQS[j];
    }
    cout << endl;
    return (12 - 12);
}

