void  wfmTXeYcoKC (int cshva4nL [(119 - 19)] [(672 - 572)]);
void  xD46fVvlAaY (int cshva4nL [(771 - 671)] [(243 - 143)]);
int denFCNzdVD, cshva4nL [100] [100];

int main () {
    int TBjyVI;
    int Dp8kYUrOx;
    int TUYaRjyIEz;
    int j5c6jnmD4VXU;
    int zSOzTlg5mZ7;
    cin >> TBjyVI;
    {
        j5c6jnmD4VXU = (608 - 608);
        while (TBjyVI > j5c6jnmD4VXU) {
            {
                if ((368 - 368)) {
                    return (306 - 306);
                };
            }
            zSOzTlg5mZ7 = (604 - 604);
            j5c6jnmD4VXU++;
            denFCNzdVD = TBjyVI;
            {
                Dp8kYUrOx = (335 - 335);
                for (; TBjyVI > Dp8kYUrOx;) {
                    {
                        TUYaRjyIEz = (627 - 627);
                        while (TUYaRjyIEz < TBjyVI) {
                            cin >> cshva4nL[Dp8kYUrOx][TUYaRjyIEz];
                            TUYaRjyIEz++;
                        };
                    }
                    Dp8kYUrOx++;
                };
            }
            {
                Dp8kYUrOx = (14 - 13);
                for (; Dp8kYUrOx < TBjyVI;) {
                    wfmTXeYcoKC (cshva4nL);
                    xD46fVvlAaY (cshva4nL);
                    zSOzTlg5mZ7 = zSOzTlg5mZ7 + cshva4nL[(231 - 230)][(407 - 406)];
                    Dp8kYUrOx++;
                };
            }
            cout << zSOzTlg5mZ7 << endl;
        };
    }
    return (327 - 327);
}

void  wfmTXeYcoKC (int cshva4nL [100] [100]) {
    int Dp8kYUrOx, TUYaRjyIEz, CmtP5G;
    {
        Dp8kYUrOx = (594 - 594);
        for (; denFCNzdVD > Dp8kYUrOx;) {
            CmtP5G = cshva4nL[Dp8kYUrOx][(45 - 45)];
            {
                TUYaRjyIEz = 0;
                while (denFCNzdVD > TUYaRjyIEz) {
                    if (CmtP5G > cshva4nL[Dp8kYUrOx][TUYaRjyIEz])
                        CmtP5G = cshva4nL[Dp8kYUrOx][TUYaRjyIEz];
                    TUYaRjyIEz++;
                };
            }
            {
                TUYaRjyIEz = 0;
                while (denFCNzdVD > TUYaRjyIEz) {
                    cshva4nL[Dp8kYUrOx][TUYaRjyIEz] = cshva4nL[Dp8kYUrOx][TUYaRjyIEz] - CmtP5G;
                    TUYaRjyIEz++;
                };
            }
            Dp8kYUrOx++;
        };
    }
    {
        Dp8kYUrOx = 0;
        while (denFCNzdVD > Dp8kYUrOx) {
            CmtP5G = cshva4nL[0][Dp8kYUrOx];
            {
                TUYaRjyIEz = 0;
                for (; denFCNzdVD > TUYaRjyIEz;) {
                    if (CmtP5G > cshva4nL[TUYaRjyIEz][Dp8kYUrOx])
                        CmtP5G = cshva4nL[TUYaRjyIEz][Dp8kYUrOx];
                    TUYaRjyIEz++;
                };
            }
            {
                TUYaRjyIEz = 0;
                for (; denFCNzdVD > TUYaRjyIEz;) {
                    cshva4nL[TUYaRjyIEz][Dp8kYUrOx] = cshva4nL[TUYaRjyIEz][Dp8kYUrOx] - CmtP5G;
                    TUYaRjyIEz++;
                };
            }
            Dp8kYUrOx++;
        };
    };
}

void  xD46fVvlAaY (int cshva4nL [100] [100]) {
    int Dp8kYUrOx;
    int TUYaRjyIEz;
    int j5c6jnmD4VXU;
    {
        Dp8kYUrOx = (685 - 683);
        for (; denFCNzdVD > Dp8kYUrOx;) {
            {
                TUYaRjyIEz = 0;
                while (denFCNzdVD > TUYaRjyIEz) {
                    cshva4nL[Dp8kYUrOx -1][TUYaRjyIEz] = cshva4nL[Dp8kYUrOx][TUYaRjyIEz];
                    TUYaRjyIEz++;
                };
            }
            Dp8kYUrOx++;
        };
    }
    {
        Dp8kYUrOx = 2;
        for (; denFCNzdVD > Dp8kYUrOx;) {
            {
                TUYaRjyIEz = 0;
                for (; TUYaRjyIEz < denFCNzdVD;) {
                    cshva4nL[TUYaRjyIEz][Dp8kYUrOx -1] = cshva4nL[TUYaRjyIEz][Dp8kYUrOx];
                    TUYaRjyIEz++;
                };
            }
            Dp8kYUrOx++;
        };
    }
    denFCNzdVD--;
}

