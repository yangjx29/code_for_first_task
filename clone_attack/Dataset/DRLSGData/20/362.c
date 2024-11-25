int main () {
    for (; cin;) {
        int jQrmWVE;
        char MqkbPVQIy [(912 - 898)] = {'\0'};
        char yi1Kgzhkm [(234 - 230)] = {'\0'};
        char X2VUf0;
        int rhzaWUROfI2r;
        char Gn9bBuDfVP [11] = {'\0'};
        X2VUf0 = (413 - 413);
        jQrmWVE = (492 - 492);
        rhzaWUROfI2r = strlen (Gn9bBuDfVP);
        cin >> Gn9bBuDfVP;
        cin >> yi1Kgzhkm;
        for (int Aafs43nPAUy = (895 - 895);
        Aafs43nPAUy < rhzaWUROfI2r; Aafs43nPAUy++) {
            if (Gn9bBuDfVP[Aafs43nPAUy] > X2VUf0) {
                X2VUf0 = Gn9bBuDfVP[Aafs43nPAUy];
                jQrmWVE = Aafs43nPAUy;
            }
        }
        for (int Aafs43nPAUy = 0;
        Aafs43nPAUy < jQrmWVE + (459 - 458); Aafs43nPAUy++)
            MqkbPVQIy[Aafs43nPAUy] = Gn9bBuDfVP[Aafs43nPAUy];
        for (int Aafs43nPAUy = jQrmWVE + 1;
        Aafs43nPAUy < jQrmWVE + 4; Aafs43nPAUy++)
            MqkbPVQIy[Aafs43nPAUy] = yi1Kgzhkm[Aafs43nPAUy -jQrmWVE - 1];
        for (int Aafs43nPAUy = jQrmWVE + 4, tXDQIkwJ6 = jQrmWVE + 1;
        Aafs43nPAUy < rhzaWUROfI2r + 3, tXDQIkwJ6 < rhzaWUROfI2r; Aafs43nPAUy++, tXDQIkwJ6++)
            MqkbPVQIy[Aafs43nPAUy] = Gn9bBuDfVP[tXDQIkwJ6];
        cout << MqkbPVQIy << endl;
    }
    return 0;
}

