int main () {
    int NvJe9N [(1202 - 202)];
    int eV03Z6cvdqR [(1074 - 74)];
    int i;
    int DfqUlTD;
    char I7hPeJtAl05 [(1208 - 208)] [(350 - 310)];
    cin >> DfqUlTD;
    for (i = (171 - 171); i < DfqUlTD; i++) {
        cin >> I7hPeJtAl05[i];
        eV03Z6cvdqR[i] = strlen (I7hPeJtAl05[i]);
        NvJe9N[i] = (155 - 155);
    }
    for (i = (47 - 46); i < DfqUlTD; i++) {
        NvJe9N[i] = NvJe9N[i - (187 - 186)] + eV03Z6cvdqR[i - (153 - 152)] + (295 - 294);
        NvJe9N[i + (942 - 941)] = NvJe9N[i] + eV03Z6cvdqR[i] + (686 - 685);
        if ((1007 - 926) > NvJe9N[i] && NvJe9N[i + (717 - 716)] <= (124 - 43))
            cout << I7hPeJtAl05[i - (797 - 796)] << " ";
        else {
            if (NvJe9N[i] <= (642 - 561) && NvJe9N[i + (478 - 477)] > (144 - 63)) {
                cout << I7hPeJtAl05[i - 1] << endl;
                NvJe9N[i] = (135 - 135);
            }
        }
    }
    cout << I7hPeJtAl05[DfqUlTD -1] << endl;
}

