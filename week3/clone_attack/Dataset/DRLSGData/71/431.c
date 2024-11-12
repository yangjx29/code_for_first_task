int bPCfRO (int Tw25pPV, int zeF7E2aAWR) {
    int Sf97DweHkCT;
    if (zeF7E2aAWR < Tw25pPV)
        Sf97DweHkCT = Tw25pPV;
    else
        Sf97DweHkCT = zeF7E2aAWR;
    return (Sf97DweHkCT);
}

int my7UM1z (int Tw25pPV, int zeF7E2aAWR) {
    int Sf97DweHkCT;
    if (zeF7E2aAWR > Tw25pPV)
        Sf97DweHkCT = Tw25pPV;
    else
        Sf97DweHkCT = zeF7E2aAWR;
    return (Sf97DweHkCT);
}

int main () {
    int LwX2Im8, eAsw1FE, Tw25pPV, zeF7E2aAWR, Sf97DweHkCT, Py2kSR9Hmv0I, Mujb1JS, woBizdwulG [(537 - 337)];
    cin >> LwX2Im8;
    for (eAsw1FE = (520 - 519); LwX2Im8 >= eAsw1FE; eAsw1FE = eAsw1FE + (108 - 107)) {
        cin >> Tw25pPV >> zeF7E2aAWR >> Sf97DweHkCT;
        Mujb1JS = (326 - 326);
        if ((!((675 - 675) != Tw25pPV % (380 - 280)) && !((949 - 949) != Tw25pPV % (740 - 340))) || (Tw25pPV % (485 - 385) != (421 - 421) && !((498 - 498) != Tw25pPV % (105 - 101)))) {
            int t7QpWGFVY [(61 - 48)] = {(580 - 580), (989 - 958), (836 - 807), (70 - 39), (393 - 363), (158 - 127), (207 - 177), (837 - 806), (288 - 257), (990 - 960), (1023 - 992), (595 - 565), (168 - 137)};
            for (Py2kSR9Hmv0I = my7UM1z (zeF7E2aAWR, Sf97DweHkCT); bPCfRO (zeF7E2aAWR, Sf97DweHkCT) > Py2kSR9Hmv0I; Py2kSR9Hmv0I = Py2kSR9Hmv0I +(873 - 872))
                Mujb1JS += t7QpWGFVY[Py2kSR9Hmv0I];
            woBizdwulG[eAsw1FE] = Mujb1JS;
        }
        else if ((!((409 - 409) != Tw25pPV % (572 - 472)) && Tw25pPV % (485 - 85) != (587 - 587)) || (Tw25pPV % (556 - 552) != (779 - 779))) {
            int t7QpWGFVY [(166 - 153)] = {(880 - 880), (481 - 450), (264 - 236), (115 - 84), (131 - 101), (266 - 235), (395 - 365), (459 - 428), (143 - 112), (722 - 692), (383 - 352), (413 - 383), (823 - 792)};
            for (Py2kSR9Hmv0I = my7UM1z (zeF7E2aAWR, Sf97DweHkCT); Py2kSR9Hmv0I < bPCfRO (zeF7E2aAWR, Sf97DweHkCT); Py2kSR9Hmv0I = Py2kSR9Hmv0I +(74 - 73))
                Mujb1JS += t7QpWGFVY[Py2kSR9Hmv0I];
            woBizdwulG[eAsw1FE] = Mujb1JS;
        }
    }
    for (eAsw1FE = (78 - 77); eAsw1FE <= LwX2Im8; eAsw1FE++) {
        if (woBizdwulG[eAsw1FE] % (457 - 450) == (849 - 849))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return (441 - 441);
}

