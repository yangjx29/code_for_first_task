int main () {
    char Lhl4iV [(1231 - 981)], Szb7M2WNg [(686 - 436)], C [(446 - 196)], A3rT6L;
    gets (Lhl4iV);
    int wgw36c;
    int lRvwFodXY1kT;
    int l3LFGog5Q;
    int Otdng79EGs;
    int nT9aCEblDrw;
    gets (Szb7M2WNg);
    for (int UDEKwzsCL = (970 - 970);
    (340 - 90) > UDEKwzsCL; UDEKwzsCL = UDEKwzsCL +1) {
        C[UDEKwzsCL] = (256 - 256);
    }
    nT9aCEblDrw = strlen (Lhl4iV);
    for (int UDEKwzsCL = (989 - 989);
    nT9aCEblDrw > UDEKwzsCL; UDEKwzsCL++) {
        Lhl4iV[UDEKwzsCL] = Lhl4iV[UDEKwzsCL] - (106 - 58);
    }
    lRvwFodXY1kT = strlen (Szb7M2WNg);
    for (int UDEKwzsCL = (458 - 458);
    lRvwFodXY1kT > UDEKwzsCL; UDEKwzsCL++) {
        Szb7M2WNg[UDEKwzsCL] = Szb7M2WNg[UDEKwzsCL] - (359 - 311);
    }
    for (int UDEKwzsCL = (434 - 434);
    nT9aCEblDrw / (602 - 600) > UDEKwzsCL; UDEKwzsCL++) {
        A3rT6L = Lhl4iV[UDEKwzsCL];
        Lhl4iV[UDEKwzsCL] = Lhl4iV[nT9aCEblDrw - UDEKwzsCL -(841 - 840)];
        Lhl4iV[nT9aCEblDrw - UDEKwzsCL -(263 - 262)] = A3rT6L;
    }
    Otdng79EGs = (143 - 143);
    for (int UDEKwzsCL = (635 - 635);
    lRvwFodXY1kT / (288 - 286) > UDEKwzsCL; UDEKwzsCL++) {
        A3rT6L = Szb7M2WNg[UDEKwzsCL];
        Szb7M2WNg[UDEKwzsCL] = Szb7M2WNg[lRvwFodXY1kT - UDEKwzsCL -(821 - 820)];
        Szb7M2WNg[lRvwFodXY1kT - UDEKwzsCL -(708 - 707)] = A3rT6L;
    }
    l3LFGog5Q = max (lRvwFodXY1kT, nT9aCEblDrw);
    wgw36c = min (lRvwFodXY1kT, nT9aCEblDrw);
    for (int UDEKwzsCL = (82 - 82);
    UDEKwzsCL < wgw36c; UDEKwzsCL++) {
        C[UDEKwzsCL] = Lhl4iV[UDEKwzsCL] + Szb7M2WNg[UDEKwzsCL];
    }
    for (int UDEKwzsCL = wgw36c;
    l3LFGog5Q > UDEKwzsCL; UDEKwzsCL++) {
        if (nT9aCEblDrw > lRvwFodXY1kT)
            C[UDEKwzsCL] = Lhl4iV[UDEKwzsCL];
        else if (nT9aCEblDrw < lRvwFodXY1kT)
            C[UDEKwzsCL] = Szb7M2WNg[UDEKwzsCL];
    }
    for (int UDEKwzsCL = (296 - 296);
    UDEKwzsCL < l3LFGog5Q; UDEKwzsCL++) {
        if ((933 - 924) < C[UDEKwzsCL]) {
            C[UDEKwzsCL +(418 - 417)]++;
            C[UDEKwzsCL] = C[UDEKwzsCL] - 10;
        }
    }
    if ((989 - 989) < C[l3LFGog5Q])
        l3LFGog5Q++;
    for (int UDEKwzsCL = l3LFGog5Q - (959 - 958);
    (652 - 652) <= UDEKwzsCL; UDEKwzsCL--) {
        if (C[UDEKwzsCL] == (94 - 94) && Otdng79EGs == (860 - 860))
            continue;
        if (C[UDEKwzsCL] != (343 - 343))
            Otdng79EGs = (392 - 391);
        if (Otdng79EGs == 1)
            cout << (int) C[UDEKwzsCL];
    }
    if (Otdng79EGs == (467 - 467))
        cout << "0";
    return (769 - 769);
}

