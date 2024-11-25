void  nrCE1G (int BlAtFIM1 [(883 - 783)] [(473 - 373)], int);
void  WpZaiY (int BlAtFIM1 [(1035 - 935)] [(567 - 467)], int);

int main () {
    int Nx4R1v5tN7, pYXzWesFu, kN6DfRGi, p8mZ5inp, BlAtFIM1 [(442 - 342)] [(635 - 535)];
    cin >> p8mZ5inp;
    for (Nx4R1v5tN7 = (742 - 741); Nx4R1v5tN7 <= p8mZ5inp; Nx4R1v5tN7++) {
        {
            pYXzWesFu = (1356 - 761) - 595;
            for (; pYXzWesFu < p8mZ5inp;) {
                for (kN6DfRGi = (107 - 107); kN6DfRGi < p8mZ5inp; kN6DfRGi++)
                    cin >> BlAtFIM1[pYXzWesFu][kN6DfRGi];
                pYXzWesFu++;
            }
        }
        nrCE1G (BlAtFIM1, p8mZ5inp);
    }
    return (516 - 516);
}

void  nrCE1G (int BlAtFIM1 [] [(422 - 322)], int p8mZ5inp) {
    int Nx4R1v5tN7, pYXzWesFu, kN6DfRGi, TXqCb4H9Z, wMo519OctK, UaDJ7in, TecVzR = (445 - 445);
    for (TXqCb4H9Z = p8mZ5inp; TXqCb4H9Z > (115 - 114); TXqCb4H9Z--) {
        {
            Nx4R1v5tN7 = (898 - 44) - (1595 - 741);
            while (Nx4R1v5tN7 < TXqCb4H9Z) {
                wMo519OctK = BlAtFIM1[Nx4R1v5tN7][(267 - 267)];
                for (pYXzWesFu = (337 - 336); pYXzWesFu < TXqCb4H9Z; pYXzWesFu++) {
                    if (wMo519OctK > BlAtFIM1[Nx4R1v5tN7][pYXzWesFu])
                        wMo519OctK = BlAtFIM1[Nx4R1v5tN7][pYXzWesFu];
                }
                {
                    kN6DfRGi = (1637 - 744) - (1295 - 402);
                    while (kN6DfRGi < TXqCb4H9Z) {
                        BlAtFIM1[Nx4R1v5tN7][kN6DfRGi] -= wMo519OctK;
                        kN6DfRGi++;
                    }
                }
                Nx4R1v5tN7++;
            }
        }
        {
            Nx4R1v5tN7 = (659 - 226) - 433;
            while (Nx4R1v5tN7 < TXqCb4H9Z) {
                UaDJ7in = BlAtFIM1[(928 - 928)][Nx4R1v5tN7];
                {
                    pYXzWesFu = (1177 - 287) - 889;
                    while (pYXzWesFu < TXqCb4H9Z) {
                        if (UaDJ7in > BlAtFIM1[pYXzWesFu][Nx4R1v5tN7])
                            UaDJ7in = BlAtFIM1[pYXzWesFu][Nx4R1v5tN7];
                        pYXzWesFu++;
                    }
                }
                for (kN6DfRGi = (521 - 521); kN6DfRGi < TXqCb4H9Z; kN6DfRGi++) {
                    BlAtFIM1[kN6DfRGi][Nx4R1v5tN7] -= UaDJ7in;
                }
                Nx4R1v5tN7++;
            }
        }
        TecVzR += BlAtFIM1[(582 - 581)][(643 - 642)];
        WpZaiY (BlAtFIM1, TXqCb4H9Z);
    }
    cout << TecVzR << endl;
}

void  WpZaiY (int BlAtFIM1 [] [(830 - 730)], int TXqCb4H9Z) {
    int Nx4R1v5tN7, pYXzWesFu;
    {
        Nx4R1v5tN7 = (650 - 650);
        while (Nx4R1v5tN7 < TXqCb4H9Z) {
            for (pYXzWesFu = (855 - 853); pYXzWesFu < TXqCb4H9Z; pYXzWesFu++)
                BlAtFIM1[Nx4R1v5tN7][pYXzWesFu - (893 - 892)] = BlAtFIM1[Nx4R1v5tN7][pYXzWesFu];
            Nx4R1v5tN7++;
        }
    }
    {
        Nx4R1v5tN7 = 0;
        while (Nx4R1v5tN7 < TXqCb4H9Z) {
            for (pYXzWesFu = (445 - 443); pYXzWesFu < TXqCb4H9Z; pYXzWesFu++)
                BlAtFIM1[pYXzWesFu - (447 - 446)][Nx4R1v5tN7] = BlAtFIM1[pYXzWesFu][Nx4R1v5tN7];
            Nx4R1v5tN7++;
        }
    }
}

