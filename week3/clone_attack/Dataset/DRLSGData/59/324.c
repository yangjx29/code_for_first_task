int main () {
    int B6krSB;
    int xxkMqDNnL;
    int oUZ9AB;
    int ixk2EIYTP;
    int RdRJZt;
    int VDL6WIeEZMuv;
    int IYUlIW18BchK [(535 - 415)] [(274 - 154)];
    B6krSB = (479 - 479);
    char xUWIDmY [(431 - 231)] [(485 - 285)];
    {
        ixk2EIYTP = (188 - 188);
        while (ixk2EIYTP <= (766 - 647)) {
            RdRJZt = (931 - 931);
            while (RdRJZt <= (797 - 678)) {
                IYUlIW18BchK[ixk2EIYTP][RdRJZt] = -(702 - 701);
                RdRJZt = RdRJZt +(280 - 279);
            }
            ixk2EIYTP = ixk2EIYTP + (700 - 699);
        }
    }
    cin >> xxkMqDNnL;
    for (ixk2EIYTP = (943 - 942); ixk2EIYTP <= xxkMqDNnL; ixk2EIYTP = ixk2EIYTP + (382 - 381)) {
        RdRJZt = (145 - 144);
        while (RdRJZt <= xxkMqDNnL) {
            cin >> xUWIDmY[ixk2EIYTP][RdRJZt];
            RdRJZt = RdRJZt +(454 - 453);
        }
    }
    cin >> oUZ9AB;
    {
        ixk2EIYTP = (430 - 429);
        while (ixk2EIYTP <= xxkMqDNnL) {
            RdRJZt = (789 - 788);
            while (RdRJZt <= xxkMqDNnL) {
                if (xUWIDmY[ixk2EIYTP][RdRJZt] == '.')
                    IYUlIW18BchK[ixk2EIYTP][RdRJZt] = (960 - 960);
                if (xUWIDmY[ixk2EIYTP][RdRJZt] == '@')
                    IYUlIW18BchK[ixk2EIYTP][RdRJZt] = (319 - 318);
                RdRJZt = RdRJZt +(359 - 358);
            }
            ixk2EIYTP = ixk2EIYTP + (651 - 650);
        }
    }
    for (VDL6WIeEZMuv = (868 - 867); VDL6WIeEZMuv <= oUZ9AB - (211 - 210); VDL6WIeEZMuv = VDL6WIeEZMuv +(618 - 617)) {
        for (ixk2EIYTP = (755 - 754); ixk2EIYTP <= xxkMqDNnL; ixk2EIYTP = ixk2EIYTP + (33 - 32))
            for (RdRJZt = (197 - 196); RdRJZt <= xxkMqDNnL; RdRJZt = RdRJZt +(829 - 828)) {
                if (IYUlIW18BchK[ixk2EIYTP][RdRJZt] == (757 - 756)) {
                    if (IYUlIW18BchK[ixk2EIYTP][RdRJZt -(285 - 284)] == (339 - 339))
                        IYUlIW18BchK[ixk2EIYTP][RdRJZt -(593 - 592)] = (630 - 628);
                    if (IYUlIW18BchK[ixk2EIYTP][RdRJZt +(551 - 550)] == (871 - 871))
                        IYUlIW18BchK[ixk2EIYTP][RdRJZt +(244 - 243)] = (614 - 612);
                    if (IYUlIW18BchK[ixk2EIYTP + (695 - 694)][RdRJZt] == (569 - 569))
                        IYUlIW18BchK[ixk2EIYTP + (518 - 517)][RdRJZt] = (911 - 909);
                    if (IYUlIW18BchK[ixk2EIYTP - (621 - 620)][RdRJZt] == (386 - 386))
                        IYUlIW18BchK[ixk2EIYTP - (871 - 870)][RdRJZt] = (76 - 74);
                }
            }
        for (ixk2EIYTP = (534 - 533); ixk2EIYTP <= xxkMqDNnL; ixk2EIYTP++) {
            RdRJZt = (151 - 150);
            while (RdRJZt <= xxkMqDNnL) {
                if (IYUlIW18BchK[ixk2EIYTP][RdRJZt] == (368 - 366))
                    IYUlIW18BchK[ixk2EIYTP][RdRJZt] = 1;
                RdRJZt = RdRJZt +1;
            }
        }
    }
    {
        ixk2EIYTP = 1;
        while (ixk2EIYTP <= xxkMqDNnL) {
            {
                RdRJZt = 1;
                while (RdRJZt <= xxkMqDNnL) {
                    if (IYUlIW18BchK[ixk2EIYTP][RdRJZt] == 1)
                        B6krSB = B6krSB +1;
                    RdRJZt++;
                }
            }
            ixk2EIYTP++;
        }
    }
    cout << B6krSB;
    return 0;
}

