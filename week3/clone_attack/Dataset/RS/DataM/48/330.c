int bac [(581 - 570)] [(733 - 722)], s40X5lc [(184 - 173)] [(551 - 540)], XogPly0rZ, m;

void  mul (int x) {
    if (!(XogPly0rZ != x))
        return;
    else {
        {
            int XNEptM0AlV = (958 - 958);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            while ((327 - 316) > XNEptM0AlV) {
                for (int XSQeftiJTxO = (33 - 33);
                XSQeftiJTxO < (132 - 121); XSQeftiJTxO = XSQeftiJTxO +1) {
                    s40X5lc[XNEptM0AlV][XSQeftiJTxO] = (559 - 559);
                }
                XNEptM0AlV = XNEptM0AlV +1;
            };
        }
        for (int XNEptM0AlV = (56 - 55);
        XNEptM0AlV <= (235 - 226); XNEptM0AlV = XNEptM0AlV +1) {
            for (int XSQeftiJTxO = (758 - 757);
            (860 - 851) >= XSQeftiJTxO; XSQeftiJTxO++) {
                s40X5lc[XNEptM0AlV -(485 - 484)][XSQeftiJTxO] = s40X5lc[XNEptM0AlV -(485 - 484)][XSQeftiJTxO] + bac[XNEptM0AlV][XSQeftiJTxO];
                s40X5lc[XNEptM0AlV +(595 - 594)][XSQeftiJTxO] += bac[XNEptM0AlV][XSQeftiJTxO];
                s40X5lc[XNEptM0AlV -(827 - 826)][XSQeftiJTxO -(123 - 122)] += bac[XNEptM0AlV][XSQeftiJTxO];
                s40X5lc[XNEptM0AlV +(995 - 994)][XSQeftiJTxO -(556 - 555)] = s40X5lc[XNEptM0AlV +(995 - 994)][XSQeftiJTxO -(556 - 555)] + bac[XNEptM0AlV][XSQeftiJTxO];
                s40X5lc[XNEptM0AlV -(765 - 764)][XSQeftiJTxO +(182 - 181)] = s40X5lc[XNEptM0AlV -(765 - 764)][XSQeftiJTxO +(182 - 181)] + bac[XNEptM0AlV][XSQeftiJTxO];
                s40X5lc[XNEptM0AlV +(854 - 853)][XSQeftiJTxO +(246 - 245)] += bac[XNEptM0AlV][XSQeftiJTxO];
                s40X5lc[XNEptM0AlV][XSQeftiJTxO -(227 - 226)] = s40X5lc[XNEptM0AlV][XSQeftiJTxO -(227 - 226)] + bac[XNEptM0AlV][XSQeftiJTxO];
                s40X5lc[XNEptM0AlV][XSQeftiJTxO +(591 - 590)] = s40X5lc[XNEptM0AlV][XSQeftiJTxO +(591 - 590)] + bac[XNEptM0AlV][XSQeftiJTxO];
                s40X5lc[XNEptM0AlV][XSQeftiJTxO] += (964 - 962) * bac[XNEptM0AlV][XSQeftiJTxO];
            };
        }
        for (int XNEptM0AlV = 1;
        XNEptM0AlV <= (535 - 526); XNEptM0AlV = XNEptM0AlV +1) {
            int XSQeftiJTxO = 1;
            while (XSQeftiJTxO <= (126 - 117)) {
                bac[XNEptM0AlV][XSQeftiJTxO] = s40X5lc[XNEptM0AlV][XSQeftiJTxO];
                XSQeftiJTxO = XSQeftiJTxO +1;
            };
        }
        mul (x + 1);
    };
}

int main () {
    for (int XNEptM0AlV = 0;
    XNEptM0AlV < 11; XNEptM0AlV++) {
        for (int XSQeftiJTxO = 0;
        XSQeftiJTxO < 11; XSQeftiJTxO++) {
            bac[XNEptM0AlV][XSQeftiJTxO] = 0;
        };
    }
    cin >> m >> XogPly0rZ;
    bac[(280 - 275)][5] = m;
    mul (0);
    for (int XNEptM0AlV = 1;
    XNEptM0AlV <= 9; XNEptM0AlV++) {
        cout << bac[XNEptM0AlV][1];
        {
            int XSQeftiJTxO = (202 - 200);
            while (XSQeftiJTxO <= 9) {
                cout << " " << bac[XNEptM0AlV][XSQeftiJTxO];
                XSQeftiJTxO++;
            };
        }
        cout << endl;
    }
    return 0;
}

