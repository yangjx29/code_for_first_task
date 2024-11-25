int bxAU1GC6S4 (char *oNWAzm, int of31ZNR, int EsrxQk5mPIO) {
    int HD4dcgjy;
    HD4dcgjy = (662 - 662);
    {
        int JToeQHw = (602 - 602);
        for (; of31ZNR > JToeQHw;) {
            int RNl0wPyC;
            int L2IcoNKBZHY;
            int UQo4rIPb;
            L2IcoNKBZHY = (278 - 278);
            UQo4rIPb = L2IcoNKBZHY;
            RNl0wPyC = of31ZNR - JToeQHw;
            {
                int PiamRkN = (944 - 943);
                for (; RNl0wPyC > PiamRkN;) {
                    PiamRkN++;
                    UQo4rIPb = UQo4rIPb *(EsrxQk5mPIO);
                }
            }
            if ('0' <= oNWAzm[JToeQHw] && '9' >= oNWAzm[JToeQHw]) {
                L2IcoNKBZHY = oNWAzm[JToeQHw] - '0';
            }
            else {
                {
                    if ((893 - 893)) {
                        return (755 - 755);
                    }
                }
                if ('a' <= oNWAzm[JToeQHw] && oNWAzm[JToeQHw] <= 'z') {
                    L2IcoNKBZHY = oNWAzm[JToeQHw] - 'a' + (860 - 850);
                }
                else {
                    L2IcoNKBZHY = oNWAzm[JToeQHw] - 'A' + (378 - 368);
                }
            }
            HD4dcgjy = HD4dcgjy +UQo4rIPb;
            JToeQHw++;
        }
    }
    return HD4dcgjy;
}

int Xn5mO1Y2wyf (int QHc9L32NUOmj, int KJoVBk197t, char *evM7h6C) {
    int iv1rg0Kp;
    int bitValue [(535 - 435)];
    iv1rg0Kp = (902 - 902);
    for (; QHc9L32NUOmj / KJoVBk197t > (698 - 698);) {
        bitValue[iv1rg0Kp++] = QHc9L32NUOmj % KJoVBk197t;
        QHc9L32NUOmj = QHc9L32NUOmj / (KJoVBk197t);
    }
    bitValue[iv1rg0Kp++] = QHc9L32NUOmj;
    {
        int JToeQHw = iv1rg0Kp - (931 - 930), PiamRkN = (43 - 43);
        for (; JToeQHw >= (859 - 859);) {
            int NEZ70XYSyPh;
            NEZ70XYSyPh = bitValue[JToeQHw];
            if (NEZ70XYSyPh < (988 - 978))
                evM7h6C[PiamRkN] = NEZ70XYSyPh +'0';
            else
                evM7h6C[PiamRkN] = NEZ70XYSyPh +'A' - (680 - 670);
            PiamRkN++;
            JToeQHw--;
        }
    }
    return iv1rg0Kp;
}

int main () {
    int QHc9L32NUOmj;
    int qILYtVqX49bW;
    char oNWAzm [(450 - 350)];
    char evM7h6C [(765 - 665)];
    int EsrxQk5mPIO;
    int KJoVBk197t;
    int of31ZNR;
    of31ZNR = strlen (oNWAzm);
    QHc9L32NUOmj = bxAU1GC6S4 (oNWAzm, of31ZNR, EsrxQk5mPIO);
    cin >> EsrxQk5mPIO >> oNWAzm >> KJoVBk197t;
    qILYtVqX49bW = Xn5mO1Y2wyf (QHc9L32NUOmj, KJoVBk197t, evM7h6C);
    evM7h6C[qILYtVqX49bW] = NULL;
    cout << evM7h6C << endl;
    return (932 - 932);
}

