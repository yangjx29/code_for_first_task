double  NgeKvYL (int sfkN7R, int Sw0IC7Nf2, int mP4rD23Z9eW, int x2, int ZVzT4bjCn0, int UNlR7s8) {
    double  WlKSf1Z0 = (sfkN7R - x2) * (sfkN7R - x2) + (Sw0IC7Nf2 -ZVzT4bjCn0) * (Sw0IC7Nf2 -ZVzT4bjCn0) + (mP4rD23Z9eW - UNlR7s8) * (mP4rD23Z9eW - UNlR7s8);
    {
        if (0) {
            return 0;
        }
    }
    return sqrt (WlKSf1Z0);
}

int main () {
    int oZK9s0g78nJ;
    double  oLWNhMH [10] [10];
    int eUTlyoAPpcnr [10], NWQPC3 [10], BeYqXnE [10];
    cin >> oZK9s0g78nJ;
    {
        int qVbm1TP = 0;
        while (qVbm1TP < oZK9s0g78nJ) {
            cin >> eUTlyoAPpcnr[qVbm1TP] >> NWQPC3[qVbm1TP] >> BeYqXnE[qVbm1TP];
            qVbm1TP++;
        }
    }
    {
        int qVbm1TP = 0;
        while (qVbm1TP < oZK9s0g78nJ) {
            {
                int JXqeiJSdj = 0;
                while (JXqeiJSdj < qVbm1TP) {
                    oLWNhMH[qVbm1TP][JXqeiJSdj] = NgeKvYL (eUTlyoAPpcnr[qVbm1TP], NWQPC3[qVbm1TP], BeYqXnE[qVbm1TP], eUTlyoAPpcnr[JXqeiJSdj], NWQPC3[JXqeiJSdj], BeYqXnE[JXqeiJSdj]);
                    JXqeiJSdj++;
                }
            }
            qVbm1TP++;
        }
    }
    for (int Xfd90Zn = 0;
    Xfd90Zn < oZK9s0g78nJ * (oZK9s0g78nJ - 1) / 2; Xfd90Zn++) {
        int xCJ0vDl1 = 0, yu0GksyCfz = 0;
        double  BWn6OL = 0;
        {
            int qVbm1TP = 0;
            while (qVbm1TP < oZK9s0g78nJ) {
                {
                    int JXqeiJSdj = 0;
                    while (JXqeiJSdj < qVbm1TP) {
                        if (oLWNhMH[qVbm1TP][JXqeiJSdj] > BWn6OL) {
                            BWn6OL = oLWNhMH[qVbm1TP][JXqeiJSdj];
                            xCJ0vDl1 = qVbm1TP;
                            yu0GksyCfz = JXqeiJSdj;
                        }
                        JXqeiJSdj++;
                    }
                }
                qVbm1TP++;
            }
        }
        cout << "(" << eUTlyoAPpcnr[yu0GksyCfz] << "," << NWQPC3[yu0GksyCfz] << "," << BeYqXnE[yu0GksyCfz] << ")-(" << eUTlyoAPpcnr[xCJ0vDl1] << "," << NWQPC3[xCJ0vDl1] << "," << BeYqXnE[xCJ0vDl1] << ")=";
        oLWNhMH[xCJ0vDl1][yu0GksyCfz] = -1;
        cout << fixed << setprecision (2) << BWn6OL << endl;
    }
    return 0;
}

