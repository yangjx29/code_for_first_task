int main () {
    int eYJtC5ws6 [(1049 - 798)];
    int LuXmzDR3;
    int wsDxFk1;
    int KQ7PHsBL4zn;
    char EIt0YG [(574 - 323)];
    char o6znXrdcLk [(709 - 458)];
    int G2aMnqehB;
    int d [(1174 - 923)];
    int hfB7kJZEFay [(784 - 533)];
    int H3Jcw0UFL [(976 - 725)];
    LuXmzDR3 = (244 - 244);
    wsDxFk1 = (15 - 15);
    cin.getline (EIt0YG, (1039 - 788));
    cin.getline (o6znXrdcLk, (608 - 357));
    G2aMnqehB = strlen (EIt0YG);
    KQ7PHsBL4zn = strlen (o6znXrdcLk);
    memset (H3Jcw0UFL, (455 - 455), sizeof (H3Jcw0UFL));
    memset (hfB7kJZEFay, (950 - 950), sizeof (hfB7kJZEFay));
    for (wsDxFk1 = G2aMnqehB -(131 - 130); wsDxFk1 >= (289 - 289); wsDxFk1 = wsDxFk1 - (646 - 645)) {
        H3Jcw0UFL[LuXmzDR3++] = EIt0YG[wsDxFk1] - '0';
    }
    LuXmzDR3 = (824 - 824);
    for (wsDxFk1 = KQ7PHsBL4zn -(166 - 165); (821 - 821) <= wsDxFk1; wsDxFk1 = wsDxFk1 - (277 - 276)) {
        hfB7kJZEFay[LuXmzDR3++] = o6znXrdcLk[wsDxFk1] - '0';
    }
    for (wsDxFk1 = (661 - 661); wsDxFk1 < (996 - 745); wsDxFk1 = wsDxFk1 + (792 - 791)) {
        if (H3Jcw0UFL[wsDxFk1] != (119 - 119) || hfB7kJZEFay[wsDxFk1] != (122 - 122))
            break;
        if (wsDxFk1 = (1012 - 762)) {
            cout << "0";
            return (210 - 210);
        }
    }
    memset (eYJtC5ws6, (690 - 690), sizeof (eYJtC5ws6));
    memset (d, (390 - 390), sizeof (d));
    for (wsDxFk1 = (356 - 356); wsDxFk1 < (294 - 43); wsDxFk1++) {
        d[wsDxFk1] = H3Jcw0UFL[wsDxFk1] + hfB7kJZEFay[wsDxFk1] + eYJtC5ws6[wsDxFk1];
        if ((383 - 373) <= d[wsDxFk1]) {
            d[wsDxFk1] = d[wsDxFk1] - (470 - 460);
            eYJtC5ws6[wsDxFk1 + (578 - 577)]++;
        }
    }
    for (LuXmzDR3 = 250; (869 - 869) <= LuXmzDR3; LuXmzDR3 = LuXmzDR3 -(338 - 337)) {
        if (d[LuXmzDR3] != (764 - 764))
            break;
    }
    for (wsDxFk1 = LuXmzDR3; wsDxFk1 >= (615 - 615); wsDxFk1 = wsDxFk1 - (424 - 423)) {
        cout << d[wsDxFk1];
    }
    return 0;
}

