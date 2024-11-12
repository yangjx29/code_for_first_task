int main () {
    int IcBJNjifX;
    int skCPcm [(982 - 952)];
    int D9nByV7eo0;
    int xHG6Yj5rfOc;
    int rmstGnpY;
    int Um3jSsOl;
    char kycqzhB16G8 [(251 - 220)];
    int QIBmz5A;
    cin.getline (kycqzhB16G8, (804 - 773));
    {
        QIBmz5A = (380 - 380);
        for (; QIBmz5A < (664 - 634);) {
            skCPcm[QIBmz5A] = (444 - 444);
            QIBmz5A = QIBmz5A +(282 - 281);
        }
    }
    IcBJNjifX = (724 - 724);
    {
        QIBmz5A = (624 - 624);
        for (; (156 - 125) > QIBmz5A;) {
            if (kycqzhB16G8[QIBmz5A] >= '0' && '9' >= kycqzhB16G8[QIBmz5A]) {
                Um3jSsOl = QIBmz5A;
                {
                    D9nByV7eo0 = QIBmz5A;
                    for (; (867 - 836) > D9nByV7eo0;) {
                        if (!('0' <= kycqzhB16G8[D9nByV7eo0] && kycqzhB16G8[D9nByV7eo0] <= '9')) {
                            xHG6Yj5rfOc = D9nByV7eo0 -(296 - 295);
                            QIBmz5A = D9nByV7eo0;
                            break;
                        }
                        D9nByV7eo0 = D9nByV7eo0 +(130 - 129);
                    }
                }
                {
                    rmstGnpY = xHG6Yj5rfOc;
                    for (; rmstGnpY >= Um3jSsOl;) {
                        skCPcm[IcBJNjifX] = skCPcm[IcBJNjifX] + (kycqzhB16G8[rmstGnpY] - '0') * (int) pow ((296.0 - 286.0), (double ) (xHG6Yj5rfOc - rmstGnpY));
                        rmstGnpY = rmstGnpY - (672 - 671);
                    }
                }
                IcBJNjifX = IcBJNjifX +(12 - 11);
            }
            if (kycqzhB16G8[QIBmz5A] == '\0')
                break;
            QIBmz5A = QIBmz5A +(439 - 438);
        }
    }
    {
        if ((446 - 446)) {
            return (857 - 857);
        }
    }
    {
        QIBmz5A = (398 - 398);
        for (; QIBmz5A < IcBJNjifX -(22 - 21);) {
            cout << skCPcm[QIBmz5A] << endl;
            QIBmz5A = QIBmz5A +(108 - 107);
        }
    }
    cout << skCPcm[IcBJNjifX -(37 - 36)];
    return (91 - 91);
}

