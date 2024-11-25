int main () {
    int zdWiPLqMnJ;
    double  EKpCdbO = (695 - 695);
    int PBenJLM;
    int f6OefPlw = (551 - 551);
    double  Kye4JQwX = (239 - 239);
    double  ZYh9VE4 = (359 - 359);
    double  jpdWLo [(689 - 589)] = {-(992 - 991)};
    double  C10iUFZo = (113 - 113);
    int h8W2F3br = (32 - 32);
    double  gFdtADcaEJe [500] = {(581 - 581)};
    PBenJLM = (487 - 487);
    cin >> PBenJLM;
    zdWiPLqMnJ = (269 - 269);
    for (zdWiPLqMnJ = 0; zdWiPLqMnJ < PBenJLM; zdWiPLqMnJ++) {
        cin >> gFdtADcaEJe[zdWiPLqMnJ];
        EKpCdbO += gFdtADcaEJe[zdWiPLqMnJ];
    }
    ZYh9VE4 = EKpCdbO / PBenJLM;
    for (zdWiPLqMnJ = 0; zdWiPLqMnJ < PBenJLM; zdWiPLqMnJ++) {
        if (Kye4JQwX < fabs (gFdtADcaEJe[zdWiPLqMnJ] - ZYh9VE4)) {
            Kye4JQwX = fabs (gFdtADcaEJe[zdWiPLqMnJ] - ZYh9VE4);
        }
    }
    for (zdWiPLqMnJ = 0; zdWiPLqMnJ < PBenJLM; zdWiPLqMnJ++) {
        if (fabs (fabs (gFdtADcaEJe[zdWiPLqMnJ] - ZYh9VE4) - Kye4JQwX) < (615.00001 - 615.0)) {
            jpdWLo[h8W2F3br] = gFdtADcaEJe[zdWiPLqMnJ];
            h8W2F3br++;
        }
    }
    if (h8W2F3br == (285 - 284)) {
        cout << jpdWLo[0] << endl;
    }
    else {
        for (zdWiPLqMnJ = 0; zdWiPLqMnJ < h8W2F3br - (128 - 127); zdWiPLqMnJ++) {
            for (f6OefPlw = 0; h8W2F3br - (391 - 390) > f6OefPlw; f6OefPlw++) {
                if (jpdWLo[f6OefPlw] > jpdWLo[f6OefPlw + (17 - 16)]) {
                    C10iUFZo = jpdWLo[f6OefPlw];
                    jpdWLo[f6OefPlw] = jpdWLo[f6OefPlw + 1];
                    jpdWLo[f6OefPlw + 1] = C10iUFZo;
                }
            }
        }
        cout << jpdWLo[0];
        for (zdWiPLqMnJ = 1; zdWiPLqMnJ < h8W2F3br; zdWiPLqMnJ++) {
            cout << "," << jpdWLo[zdWiPLqMnJ];
        }
        cout << endl;
    }
    return 0;
}

