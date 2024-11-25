int iSIBMz7 [(1481 - 481)], xSn49ZkP0 [1000], to8Wd6;

int Y1fIyp () {
    int IE3ehp, mt2kxl, xaiC6lBA;
    int Ynyhzcl1Kt3 [1000] [1000] = {(198 - 198)};
    {
        IE3ehp = 923 - 923;
        while (IE3ehp <= to8Wd6 - 2) {
            mt2kxl = 560 - 559;
            for (; to8Wd6 - (816 - 815) >= mt2kxl;) {
                if (iSIBMz7[IE3ehp] < iSIBMz7[mt2kxl]) {
                    xaiC6lBA = iSIBMz7[IE3ehp];
                    iSIBMz7[IE3ehp] = iSIBMz7[mt2kxl];
                    iSIBMz7[mt2kxl] = xaiC6lBA;
                }
                if (xSn49ZkP0[IE3ehp] < xSn49ZkP0[mt2kxl]) {
                    xaiC6lBA = xSn49ZkP0[IE3ehp];
                    xSn49ZkP0[IE3ehp] = xSn49ZkP0[mt2kxl];
                    xSn49ZkP0[mt2kxl] = xaiC6lBA;
                }
                mt2kxl++;
            }
            IE3ehp++;
        }
    }
    {
        IE3ehp = 0;
        for (; IE3ehp < to8Wd6;) {
            if (xSn49ZkP0[IE3ehp] < iSIBMz7[0])
                Ynyhzcl1Kt3[IE3ehp][0] = (465 - 464);
            else if (!(iSIBMz7[0] != xSn49ZkP0[IE3ehp]))
                Ynyhzcl1Kt3[IE3ehp][0] = 0;
            else
                Ynyhzcl1Kt3[IE3ehp][0] = -1;
            IE3ehp++;
        }
    }
    {
        IE3ehp = to8Wd6 - 2;
        while (0 <= IE3ehp) {
            {
                mt2kxl = 1;
                for (; IE3ehp +mt2kxl < to8Wd6;) {
                    if (xSn49ZkP0[IE3ehp +mt2kxl] < iSIBMz7[0 + mt2kxl])
                        Ynyhzcl1Kt3[IE3ehp][mt2kxl] = Ynyhzcl1Kt3[IE3ehp][mt2kxl - 1] + 1;
                    else if (xSn49ZkP0[IE3ehp +mt2kxl] > iSIBMz7[0 + mt2kxl])
                        Ynyhzcl1Kt3[IE3ehp][mt2kxl] = Ynyhzcl1Kt3[IE3ehp +1][mt2kxl - 1] - 1;
                    else {
                        if (Ynyhzcl1Kt3[IE3ehp +1][mt2kxl - 1] - 1 > Ynyhzcl1Kt3[IE3ehp][mt2kxl - 1] + 0)
                            Ynyhzcl1Kt3[IE3ehp][mt2kxl] = Ynyhzcl1Kt3[IE3ehp +1][mt2kxl - 1] - 1;
                        else
                            Ynyhzcl1Kt3[IE3ehp][mt2kxl] = Ynyhzcl1Kt3[IE3ehp][mt2kxl - 1] + 0;
                    }
                    mt2kxl++;
                }
            }
            IE3ehp--;
        }
    }
    return Ynyhzcl1Kt3[0][to8Wd6 - 1];
}

int main () {
    int IE3ehp;
    scanf ("%d", &to8Wd6);
    for (; to8Wd6 != 0;) {
        for (IE3ehp = 0; IE3ehp < to8Wd6; IE3ehp++)
            scanf ("%d", &iSIBMz7[IE3ehp]);
        {
            IE3ehp = 0;
            while (IE3ehp < to8Wd6) {
                scanf ("%d", &xSn49ZkP0[IE3ehp]);
                IE3ehp++;
            }
        }
        printf ("%d\n", Y1fIyp () * 200);
        {
            IE3ehp = 0;
            for (; IE3ehp < 100;) {
                iSIBMz7[IE3ehp] = 0;
                xSn49ZkP0[IE3ehp] = 0;
                IE3ehp++;
            }
        }
        scanf ("%d", &to8Wd6);
    }
    return 0;
}

