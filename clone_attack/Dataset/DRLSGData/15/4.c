int main () {
    int FosBNUVfDX;
    int jTKVndWcX;
    int iLToDH;
    int kWws8CLdF;
    int o6g5qIM [1000] [1000];
    int uy9Jq0mkL;
    int sa78QI;
    int ZuCKvn;
    int C496kWpPwTRx;
    kWws8CLdF = (789 - 789);
    scanf ("%d", &uy9Jq0mkL);
    {
        sa78QI = (798 - 798);
        for (; sa78QI < uy9Jq0mkL;) {
            {
                C496kWpPwTRx = (741 - 741);
                while (C496kWpPwTRx < uy9Jq0mkL) {
                    scanf ("%d", &o6g5qIM[sa78QI][C496kWpPwTRx]);
                    C496kWpPwTRx = C496kWpPwTRx +(908 - 907);
                }
            }
            sa78QI = sa78QI + 1;
        }
    }
    ZuCKvn = (483 - 483);
    jTKVndWcX = -1;
    iLToDH = -1;
    {
        sa78QI = (261 - 261);
        while (sa78QI < uy9Jq0mkL) {
            {
                C496kWpPwTRx = (188 - 188);
                while (uy9Jq0mkL > C496kWpPwTRx) {
                    if (o6g5qIM[sa78QI][C496kWpPwTRx] == 0) {
                        iLToDH = C496kWpPwTRx;
                        jTKVndWcX = sa78QI;
                        break;
                    }
                    C496kWpPwTRx++;
                }
            }
            if ((!(C496kWpPwTRx != iLToDH)) && (!(sa78QI != jTKVndWcX)))
                break;
            sa78QI = sa78QI + 1;
        }
    }
    {
        iLToDH = C496kWpPwTRx;
        for (; iLToDH < uy9Jq0mkL;) {
            if (o6g5qIM[iLToDH][sa78QI] == 0) {
                ZuCKvn = ZuCKvn +1;
            }
            iLToDH = iLToDH + 1;
        }
    }
    {
        jTKVndWcX = sa78QI;
        while (jTKVndWcX < uy9Jq0mkL) {
            if (o6g5qIM[C496kWpPwTRx][jTKVndWcX] == 0) {
                kWws8CLdF = kWws8CLdF + 1;
            }
            jTKVndWcX++;
        }
    }
    FosBNUVfDX = ZuCKvn *kWws8CLdF - 2 * (ZuCKvn +kWws8CLdF - 2);
    printf ("%d", FosBNUVfDX);
    return 0;
}

