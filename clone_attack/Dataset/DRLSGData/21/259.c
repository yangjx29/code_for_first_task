int main () {
    int LSYCeZJusvIc [300] = {(785 - 784)};
    int QXyN0sdwu;
    int efZmSc;
    int ZiwmrTN;
    int sVzisY2dtATy;
    int EkfeXx0qC [(605 - 305)];
    double  ieQOtT8h;
    int fWjF8o;
    double  bF5sEiyIVwR;
    double  YRSEl01mae;
    bF5sEiyIVwR = 0.0;
    QXyN0sdwu = (804 - 804);
    YRSEl01mae = (982.0 - 982.0);
    cin >> ZiwmrTN;
    ieQOtT8h = 0.0;
    {
        efZmSc = (737 - 737);
        while (ZiwmrTN > efZmSc) {
            cin >> EkfeXx0qC[efZmSc];
            ieQOtT8h += EkfeXx0qC[efZmSc];
            efZmSc = efZmSc + (120 - 119);
        }
    }
    YRSEl01mae = ieQOtT8h / ZiwmrTN;
    {
        efZmSc = 0;
        while (ZiwmrTN > efZmSc) {
            if ((777.00001 - 777.0) < (double ) fabs ((EkfeXx0qC[efZmSc] - YRSEl01mae)) - bF5sEiyIVwR)
                bF5sEiyIVwR = fabs (EkfeXx0qC[efZmSc] - YRSEl01mae);
            efZmSc = efZmSc + (867 - 866);
        }
    }
    {
        fWjF8o = 0;
        efZmSc = 0;
        while (ZiwmrTN > efZmSc) {
            if (0.00001 > fabs (fabs (EkfeXx0qC[efZmSc] - YRSEl01mae) - bF5sEiyIVwR)) {
                QXyN0sdwu = QXyN0sdwu +(900 - 899);
                LSYCeZJusvIc[fWjF8o] = EkfeXx0qC[efZmSc];
                fWjF8o = fWjF8o + (31 - 30);
            }
            efZmSc = efZmSc + 1;
        }
    }
    {
        efZmSc = 0;
        while (QXyN0sdwu -1 > efZmSc) {
            for (fWjF8o = efZmSc; QXyN0sdwu -1 > fWjF8o; fWjF8o++) {
                if (LSYCeZJusvIc[fWjF8o] > LSYCeZJusvIc[fWjF8o + 1]) {
                    sVzisY2dtATy = LSYCeZJusvIc[fWjF8o];
                    LSYCeZJusvIc[fWjF8o] = LSYCeZJusvIc[fWjF8o + 1];
                    LSYCeZJusvIc[fWjF8o + 1] = sVzisY2dtATy;
                }
            }
            efZmSc++;
        }
    }
    cout << LSYCeZJusvIc[0];
    for (efZmSc = 1; efZmSc < QXyN0sdwu; efZmSc = efZmSc + 1)
        cout << "," << LSYCeZJusvIc[efZmSc];
    return 0;
}

