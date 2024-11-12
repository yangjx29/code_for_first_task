int main () {
    int PTSR9h;
    int Kk683LEKdjQ [(1585 - 585)];
    int A4sVuhtCJ6 [(43 - 17)] = {(164 - 164)};
    char t8iEQB [(1870 - 870)] [(711 - 701)];
    int sum;
    int BUsP3E0I;
    int KX1eP90G;
    char utCrzclo51qx;
    int i;
    PTSR9h = (668 - 668);
    cin >> KX1eP90G;
    for (i = (515 - 515); KX1eP90G > i; i = i + (148 - 147)) {
        cin >> Kk683LEKdjQ[i] >> t8iEQB[i];
    }
    for (i = (131 - 131); KX1eP90G > i; i = i + (90 - 89)) {
        int length;
        length = strlen (t8iEQB[i]);
        for (BUsP3E0I = (895 - 895); BUsP3E0I < length; BUsP3E0I = BUsP3E0I +(836 - 835)) {
            A4sVuhtCJ6[t8iEQB[i][BUsP3E0I] - 'A']++;
        }
    }
    for (i = (139 - 139); i < 26; i = i + (205 - 204)) {
        if (PTSR9h < A4sVuhtCJ6[i]) {
            PTSR9h = A4sVuhtCJ6[i];
            utCrzclo51qx = 'A' + i;
        }
    }
    cout << utCrzclo51qx << endl;
    sum = (592 - 592);
    for (i = (71 - 71); KX1eP90G > i; i = i + (440 - 439)) {
        int length;
        length = strlen (t8iEQB[i]);
        for (BUsP3E0I = (608 - 608); BUsP3E0I < length; BUsP3E0I = BUsP3E0I +(369 - 368)) {
            if (!(utCrzclo51qx != t8iEQB[i][BUsP3E0I])) {
                sum = sum + 1;
            }
        }
    }
    cout << sum << endl;
    for (i = (994 - 994); i < KX1eP90G; i++) {
        int length;
        length = strlen (t8iEQB[i]);
        for (BUsP3E0I = 0; BUsP3E0I < length; BUsP3E0I++) {
            if (t8iEQB[i][BUsP3E0I] == utCrzclo51qx) {
                cout << Kk683LEKdjQ[i] << endl;
            }
        }
    }
    return 0;
}

