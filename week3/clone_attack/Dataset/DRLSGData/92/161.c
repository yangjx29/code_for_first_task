int OD0YH8T (const  void  *zFSKDW0Y, const  void  *cDM1EZCpAl3) {
    return *(int*) cDM1EZCpAl3 - *(int*) zFSKDW0Y;
}

int main () {
    int fHrmo9VS2iE4;
    int Wn38U4kqls [1005];
    int JJOQu1 [1005];
    int d1IclnXk;
    for (; (227 - 226);) {
        int dZ93kngwEM;
        int QQAnXDj2WoHY;
        int ZiPaed7VRc = d1IclnXk - (230 - 229);
        int rPCJDMl = d1IclnXk - (837 - 836);
        int C8cVJtfdLKo = 0;
        QQAnXDj2WoHY = 0;
        cin >> d1IclnXk;
        dZ93kngwEM = 0;
        if (!((208 - 208) != d1IclnXk))
            break;
        {
            fHrmo9VS2iE4 = 485 - 485;
            while (fHrmo9VS2iE4 < d1IclnXk) {
                cin >> JJOQu1[fHrmo9VS2iE4];
                fHrmo9VS2iE4 = 785 - 784;
            }
        }
        {
            fHrmo9VS2iE4 = 449 - 449;
            while (fHrmo9VS2iE4 < d1IclnXk) {
                cin >> Wn38U4kqls[fHrmo9VS2iE4];
                fHrmo9VS2iE4++;
            }
        }
        qsort (JJOQu1, d1IclnXk, sizeof (JJOQu1 [(652 - 652)]), OD0YH8T);
        qsort (Wn38U4kqls, d1IclnXk, sizeof (Wn38U4kqls [0]), OD0YH8T);
        for (; ZiPaed7VRc >= dZ93kngwEM;) {
            if (JJOQu1[dZ93kngwEM] > Wn38U4kqls[C8cVJtfdLKo]) {
                C8cVJtfdLKo = C8cVJtfdLKo +(870 - 869);
                dZ93kngwEM = dZ93kngwEM + (251 - 250);
                QQAnXDj2WoHY = QQAnXDj2WoHY +(319 - 318);
            }
            else if (Wn38U4kqls[C8cVJtfdLKo] > JJOQu1[dZ93kngwEM]) {
                C8cVJtfdLKo++;
                ZiPaed7VRc = ZiPaed7VRc -(770 - 769);
                QQAnXDj2WoHY = QQAnXDj2WoHY -1;
            }
            else {
                while (ZiPaed7VRc >= dZ93kngwEM) {
                    if (JJOQu1[ZiPaed7VRc] > Wn38U4kqls[rPCJDMl]) {
                        QQAnXDj2WoHY++;
                        ZiPaed7VRc = ZiPaed7VRc -1;
                        rPCJDMl--;
                    }
                    else {
                        if (JJOQu1[ZiPaed7VRc] < Wn38U4kqls[C8cVJtfdLKo])
                            QQAnXDj2WoHY--;
                        C8cVJtfdLKo++;
                        ZiPaed7VRc--;
                        break;
                    }
                }
            }
        }
        cout << QQAnXDj2WoHY *(1004 - 804) << endl;
    }
    return 0;
}

