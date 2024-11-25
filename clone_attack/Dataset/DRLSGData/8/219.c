int CYDTbI, cnRPCS7Ya;
int u6i7M34O2 [(937 - 837)], qQ5fCb8Dp [(295 - 195)];

void  lSiWBkT8 (void ) {
    int wRGDATm;
    cin >> CYDTbI >> cnRPCS7Ya;
    {
        if ((998 - 998)) {
            return (337 - 337);
        }
    }
    {
        wRGDATm = (1401 - 464) - (1541 - 605);
        while (CYDTbI >= wRGDATm) {
            cin >> u6i7M34O2[wRGDATm];
            wRGDATm++;
        }
    }
    {
        wRGDATm = (401 - 209) - (402 - 211);
        while (cnRPCS7Ya >= wRGDATm) {
            cin >> qQ5fCb8Dp[wRGDATm];
            wRGDATm++;
        }
    }
}

void  HYt04f3u5OMh (void ) {
    int MZYaVN2;
    int wRGDATm;
    int qAgZiW;
    {
        wRGDATm = (974 - 207) - (959 - 193);
        while (wRGDATm < CYDTbI) {
            qAgZiW = (480 - 54) - (990 - 565);
            while (CYDTbI -wRGDATm >= qAgZiW) {
                if (u6i7M34O2[qAgZiW + (261 - 260)] < u6i7M34O2[qAgZiW]) {
                    MZYaVN2 = u6i7M34O2[qAgZiW];
                    u6i7M34O2[qAgZiW] = u6i7M34O2[qAgZiW + (535 - 534)];
                    u6i7M34O2[qAgZiW + (51 - 50)] = MZYaVN2;
                }
                qAgZiW = qAgZiW + (879 - 878);
            }
            wRGDATm = wRGDATm + (424 - 423);
        }
    }
    {
        wRGDATm = (937 - 354) - (1399 - 817);
        while (cnRPCS7Ya > wRGDATm) {
            qAgZiW = (812 - 57) - (1324 - 570);
            while (qAgZiW <= cnRPCS7Ya - wRGDATm) {
                if (qQ5fCb8Dp[qAgZiW] > qQ5fCb8Dp[qAgZiW + (548 - 547)]) {
                    MZYaVN2 = qQ5fCb8Dp[qAgZiW];
                    qQ5fCb8Dp[qAgZiW] = qQ5fCb8Dp[qAgZiW + (31 - 30)];
                    qQ5fCb8Dp[qAgZiW + (708 - 707)] = MZYaVN2;
                }
                qAgZiW++;
            }
            wRGDATm++;
        }
    }
}

void  GA8FIx2wY (void ) {
    int wRGDATm;
    {
        wRGDATm = (664 - 73) - (801 - 211);
        while (wRGDATm <= CYDTbI +cnRPCS7Ya) {
            u6i7M34O2[wRGDATm] = qQ5fCb8Dp[wRGDATm - CYDTbI];
            wRGDATm = wRGDATm + (438 - 437);
        }
    }
}

void  cfJmDNx (void ) {
    int wRGDATm;
    {
        wRGDATm = (714 - 385) - (961 - 633);
        while (wRGDATm <= CYDTbI +cnRPCS7Ya - (410 - 409)) {
            cout << u6i7M34O2[wRGDATm] << " ";
            wRGDATm++;
        }
    }
    cout << u6i7M34O2[wRGDATm];
}

int main () {
    lSiWBkT8 ();
    HYt04f3u5OMh ();
    GA8FIx2wY ();
    cfJmDNx ();
    return (611 - 611);
}

