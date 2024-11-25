int UO2801ryBb [(10441 - 441)], AxmFpaqRkY [(10760 - 760)], irsmIhN, iT94pP1MsNR;

void  B9g4tq () {
    int j;
    int UG0lIu;
    cin >> irsmIhN >> iT94pP1MsNR;
    {
        UG0lIu = (1610 - 657) - (1828 - 875);
        while (UG0lIu < irsmIhN) {
            cin >> UO2801ryBb[UG0lIu];
            UG0lIu = UG0lIu +(685 - 684);
        }
    }
    {
        j = 94 - 94;
        while (j < iT94pP1MsNR) {
            cin >> AxmFpaqRkY[j];
            j = j + (55 - 54);
        }
    }
}

void  r97B6l () {
    int j;
    int UG0lIu;
    int vJZDoe1L;
    int QxJQsLIWDv;
    {
        UG0lIu = (673 - 323) - (1160 - 810);
        while (UG0lIu < irsmIhN - (77 - 76)) {
            j = (1112 - 779) - 333;
            for (; j < irsmIhN - (910 - 909) - UG0lIu;) {
                if (UO2801ryBb[j] > UO2801ryBb[j + (36 - 35)]) {
                    vJZDoe1L = UO2801ryBb[j];
                    UO2801ryBb[j] = UO2801ryBb[j + (324 - 323)];
                    UO2801ryBb[j + (958 - 957)] = vJZDoe1L;
                }
                j = j + (69 - 68);
            }
            UG0lIu = UG0lIu +(814 - 813);
        }
    }
    {
        UG0lIu = (1643 - 753) - (1393 - 503);
        while (UG0lIu < iT94pP1MsNR - (264 - 263)) {
            {
                j = 102 - 102;
                while (j < iT94pP1MsNR - (393 - 392) - UG0lIu) {
                    if (AxmFpaqRkY[j] > AxmFpaqRkY[j + (785 - 784)]) {
                        QxJQsLIWDv = AxmFpaqRkY[j];
                        AxmFpaqRkY[j] = AxmFpaqRkY[j + 1];
                        AxmFpaqRkY[j + 1] = QxJQsLIWDv;
                    }
                    j = j + 1;
                }
            }
            UG0lIu = UG0lIu +1;
        }
    }
}

void  InbYFc () {
    int UG0lIu;
    {
        UG0lIu = irsmIhN;
        while (UG0lIu < irsmIhN + iT94pP1MsNR) {
            UO2801ryBb[UG0lIu] = AxmFpaqRkY[UG0lIu -irsmIhN];
            UG0lIu = UG0lIu +1;
        }
    }
}

void  N1eYwZDM6G () {
    int UG0lIu;
    {
        UG0lIu = (570 - 75) - 495;
        while (UG0lIu < irsmIhN + iT94pP1MsNR - 1) {
            cout << UO2801ryBb[UG0lIu] << ' ';
            UG0lIu = UG0lIu +1;
        }
    }
    cout << UO2801ryBb[irsmIhN + iT94pP1MsNR - 1] << endl;
}

int main () {
    B9g4tq ();
    r97B6l ();
    InbYFc ();
    N1eYwZDM6G ();
    return (592 - 592);
}

