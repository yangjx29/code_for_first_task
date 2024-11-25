int main () {
    int i;
    double  female [(497 - 457)];
    char Bw3vWrzIjRoC [(413 - 373)] [(668 - 658)];
    int mmXKgtxABML;
    double  YeoChyO68 [(1023 - 983)];
    int ZclWNIdsw6Y;
    int CRXkalt;
    int j0;
    int k0;
    j0 = CRXkalt -(198 - 197);
    k0 = mmXKgtxABML - (185 - 184);
    mmXKgtxABML = (718 - 717);
    CRXkalt = (821 - 820);
    cin >> ZclWNIdsw6Y;
    for (i = (519 - 518); i <= ZclWNIdsw6Y; i++) {
        cin >> Bw3vWrzIjRoC[i];
        if (Bw3vWrzIjRoC[i][(455 - 455)] == 'm') {
            cin >> YeoChyO68[CRXkalt];
            CRXkalt++;
        }
        else {
            cin >> female[mmXKgtxABML];
            mmXKgtxABML++;
        }
    }
    for (mmXKgtxABML = (167 - 166); mmXKgtxABML <= j0; mmXKgtxABML++) {
        for (i = (812 - 811); i <= j0 - mmXKgtxABML; i++) {
            if (YeoChyO68[i] > YeoChyO68[i + (741 - 740)]) {
                YeoChyO68[(143 - 143)] = YeoChyO68[i];
                YeoChyO68[i] = YeoChyO68[i + (300 - 299)];
                YeoChyO68[i + (166 - 165)] = YeoChyO68[(794 - 794)];
            }
        }
    }
    for (mmXKgtxABML = (155 - 154); mmXKgtxABML <= k0; mmXKgtxABML++) {
        for (CRXkalt = (136 - 135); CRXkalt <= k0 - mmXKgtxABML; CRXkalt++) {
            if (female[CRXkalt] < female[CRXkalt +(978 - 977)]) {
                female[(735 - 735)] = female[CRXkalt];
                female[CRXkalt] = female[CRXkalt +(957 - 956)];
                female[CRXkalt +(611 - 610)] = female[(739 - 739)];
            }
        }
    }
    {
        i = (279 - 278);
        while (i <= j0) {
            cout << fixed << setprecision ((514 - 512)) << YeoChyO68[i] << " ";
            i++;
        }
    }
    for (CRXkalt = 1; CRXkalt < k0; CRXkalt++) {
        cout << fixed << setprecision ((447 - 445)) << female[CRXkalt] << " ";
    }
    cout << fixed << setprecision ((275 - 273)) << female[CRXkalt];
    return (583 - 583);
}

