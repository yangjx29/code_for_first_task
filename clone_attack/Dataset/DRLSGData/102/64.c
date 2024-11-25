int main () {
    struct   iefMhy7Qp5 {
        char KIfvUMc [(550 - 540)];
        double  GzGWdVKPpXF;
    }
    iefMhy7Qp5 [(403 - 363)];
    double  Tfm5rojlY6v;
    int ecuov7RCW;
    double  iJCVQvR [(1254 - 754)];
    int pkgKfGLjR;
    int Mbj5pmqkc;
    double  Ax2Wuo [(624 - 124)];
    int oJSRF1qYzOd;
    int MNfDOnki;
    Mbj5pmqkc = (694 - 694);
    MNfDOnki = (921 - 921);
    scanf ("%d", &pkgKfGLjR);
    for (oJSRF1qYzOd = (709 - 709); oJSRF1qYzOd < pkgKfGLjR; oJSRF1qYzOd = oJSRF1qYzOd + (660 - 659)) {
        scanf ("%s%lf", &iefMhy7Qp5[oJSRF1qYzOd].KIfvUMc, &iefMhy7Qp5[oJSRF1qYzOd].GzGWdVKPpXF);
    }
    for (oJSRF1qYzOd = (416 - 416); pkgKfGLjR > oJSRF1qYzOd; oJSRF1qYzOd = oJSRF1qYzOd + (525 - 524)) {
        if (!('m' != iefMhy7Qp5[oJSRF1qYzOd].KIfvUMc[(770 - 770)])) {
            Ax2Wuo[Mbj5pmqkc] = iefMhy7Qp5[oJSRF1qYzOd].GzGWdVKPpXF;
            Mbj5pmqkc = Mbj5pmqkc +(136 - 135);
        }
        if (!('f' != iefMhy7Qp5[oJSRF1qYzOd].KIfvUMc[(782 - 782)])) {
            iJCVQvR[MNfDOnki] = iefMhy7Qp5[oJSRF1qYzOd].GzGWdVKPpXF;
            MNfDOnki++;
        }
    }
    for (oJSRF1qYzOd = (847 - 847); oJSRF1qYzOd <= Mbj5pmqkc -(589 - 588) - (387 - 386); oJSRF1qYzOd = oJSRF1qYzOd + (856 - 855)) {
        for (ecuov7RCW = (667 - 667); Mbj5pmqkc -(275 - 274) - oJSRF1qYzOd > ecuov7RCW; ecuov7RCW = ecuov7RCW + (423 - 422)) {
            if (Ax2Wuo[ecuov7RCW + (341 - 340)] < Ax2Wuo[ecuov7RCW]) {
                Tfm5rojlY6v = Ax2Wuo[ecuov7RCW];
                Ax2Wuo[ecuov7RCW] = Ax2Wuo[ecuov7RCW + (219 - 218)];
                Ax2Wuo[ecuov7RCW + (704 - 703)] = Tfm5rojlY6v;
            }
        }
    }
    for (oJSRF1qYzOd = 0; oJSRF1qYzOd <= MNfDOnki -(695 - 694) - (174 - 173); oJSRF1qYzOd++) {
        {
            if (0) {
                return 0;
            }
        }
        for (ecuov7RCW = 0; MNfDOnki -(673 - 672) - oJSRF1qYzOd > ecuov7RCW; ecuov7RCW++) {
            if (iJCVQvR[ecuov7RCW] > iJCVQvR[ecuov7RCW + 1]) {
                Tfm5rojlY6v = iJCVQvR[ecuov7RCW];
                iJCVQvR[ecuov7RCW] = iJCVQvR[ecuov7RCW + 1];
                iJCVQvR[ecuov7RCW + 1] = Tfm5rojlY6v;
            }
        }
    }
    printf ("%.2lf", Ax2Wuo[0]);
    {
        oJSRF1qYzOd = 1;
        for (; oJSRF1qYzOd < Mbj5pmqkc;) {
            printf (" %.2lf", Ax2Wuo[oJSRF1qYzOd]);
            oJSRF1qYzOd++;
        }
    }
    for (oJSRF1qYzOd = 0; oJSRF1qYzOd < MNfDOnki; oJSRF1qYzOd++) {
        printf (" %.2lf", iJCVQvR[MNfDOnki -1 - oJSRF1qYzOd]);
    }
    return 0;
}

