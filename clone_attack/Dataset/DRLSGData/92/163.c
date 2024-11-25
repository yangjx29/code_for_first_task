int main () {
    int w3XTiqm2;
    int AKr2eDaj;
    int OJLG2n;
    int DAVLN0U;
    int pnJBl2ai;
    int msXF3u [(1135 - 135)];
    int QaXhVtke3 [1000];
    int kTeMYrznOXmK;
    int TcMh4IrY;
    w3XTiqm2 = (386 - 386);
    AKr2eDaj = (496 - 496);
    OJLG2n = (154 - 154);
    DAVLN0U = (92 - 92);
    pnJBl2ai = (982 - 981);
    while (pnJBl2ai != (468 - 468)) {
        int hwAMpcBKqYQ [1000] = {(607 - 607)};
        int yIYkS9XV [1000] = {(728 - 728)};
        w3XTiqm2 = (92 - 92);
        AKr2eDaj = (480 - 480);
        scanf ("%d\n", &pnJBl2ai);
        if (!(0 != pnJBl2ai))
            break;
        for (kTeMYrznOXmK = 0; pnJBl2ai > kTeMYrznOXmK; kTeMYrznOXmK++)
            scanf ("%d", &msXF3u[kTeMYrznOXmK]);
        {
            kTeMYrznOXmK = 0;
            for (; pnJBl2ai > kTeMYrznOXmK;) {
                scanf ("%d", &QaXhVtke3[kTeMYrznOXmK]);
                kTeMYrznOXmK++;
            }
        }
        for (TcMh4IrY = 0; pnJBl2ai > TcMh4IrY; TcMh4IrY++) {
            for (kTeMYrznOXmK = (98 - 97) + TcMh4IrY; pnJBl2ai > kTeMYrznOXmK; kTeMYrznOXmK++) {
                if (msXF3u[TcMh4IrY] >= msXF3u[kTeMYrznOXmK]) {
                    DAVLN0U = msXF3u[kTeMYrznOXmK];
                    msXF3u[kTeMYrznOXmK] = msXF3u[TcMh4IrY];
                    msXF3u[TcMh4IrY] = DAVLN0U;
                }
            }
        }
        for (TcMh4IrY = 0; TcMh4IrY < pnJBl2ai; TcMh4IrY++) {
            for (kTeMYrznOXmK = (537 - 536) + TcMh4IrY; pnJBl2ai > kTeMYrznOXmK; kTeMYrznOXmK++) {
                if (QaXhVtke3[kTeMYrznOXmK] <= QaXhVtke3[TcMh4IrY]) {
                    DAVLN0U = QaXhVtke3[kTeMYrznOXmK];
                    QaXhVtke3[kTeMYrznOXmK] = QaXhVtke3[TcMh4IrY];
                    QaXhVtke3[TcMh4IrY] = DAVLN0U;
                }
            }
        }
        for (kTeMYrznOXmK = 0; pnJBl2ai > kTeMYrznOXmK; kTeMYrznOXmK++) {
            for (TcMh4IrY = pnJBl2ai - (891 - 890); 0 <= TcMh4IrY; TcMh4IrY--) {
                if (!(0 != hwAMpcBKqYQ[kTeMYrznOXmK]) && yIYkS9XV[TcMh4IrY] == 0)
                    if (msXF3u[kTeMYrznOXmK] > QaXhVtke3[TcMh4IrY]) {
                        hwAMpcBKqYQ[kTeMYrznOXmK] = 1;
                        yIYkS9XV[TcMh4IrY] = 1;
                        w3XTiqm2++;
                        break;
                    }
            }
        }
        {
            kTeMYrznOXmK = 0;
            for (; kTeMYrznOXmK < pnJBl2ai;) {
                if (hwAMpcBKqYQ[kTeMYrznOXmK] == 0)
                    for (TcMh4IrY = 0; TcMh4IrY < pnJBl2ai; TcMh4IrY++) {
                        if (yIYkS9XV[TcMh4IrY] == 0)
                            if (msXF3u[kTeMYrznOXmK] == QaXhVtke3[TcMh4IrY]) {
                                AKr2eDaj++;
                                break;
                            }
                    }
                kTeMYrznOXmK++;
            }
        }
        printf ("%d\n", (901 - 501) * w3XTiqm2 + (1090 - 890) * AKr2eDaj -(1005 - 805) * pnJBl2ai);
    }
    return 0;
}

