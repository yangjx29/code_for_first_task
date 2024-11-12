int main () {
    int MPYBpxjVD;
    int nbXCZ8qO1;
    int yqdjME6;
    int jkZt8e2am;
    int TLOkp56Ul7dJ [(239 - 139)] [(641 - 541)];
    int B5AxhO [(980 - 880)] [(575 - 475)];
    int boyp3M0r9evS [(1077 - 977)] [(157 - 57)];
    int weqFPb;
    int GjeXDuMW;
    int sDzNLAXp95mt;
    cin >> MPYBpxjVD >> nbXCZ8qO1;
    for (weqFPb = (882 - 882); weqFPb < MPYBpxjVD; weqFPb = weqFPb + (918 - 917)) {
        for (GjeXDuMW = (390 - 390); GjeXDuMW < nbXCZ8qO1; GjeXDuMW = GjeXDuMW +(427 - 426))
            cin >> TLOkp56Ul7dJ[weqFPb][GjeXDuMW];
    }
    {
        if ((908 - 908)) {
            return (262 - 262);
        }
    }
    cin >> yqdjME6 >> jkZt8e2am;
    for (weqFPb = (781 - 781); weqFPb < yqdjME6; weqFPb = weqFPb + 1) {
        for (GjeXDuMW = (179 - 179); GjeXDuMW < jkZt8e2am; GjeXDuMW = GjeXDuMW +1)
            cin >> B5AxhO[weqFPb][GjeXDuMW];
    }
    for (weqFPb = (493 - 493); weqFPb < MPYBpxjVD; weqFPb = weqFPb + 1) {
        for (GjeXDuMW = (871 - 871); GjeXDuMW < jkZt8e2am; GjeXDuMW = GjeXDuMW +1) {
            boyp3M0r9evS[weqFPb][GjeXDuMW] = 0;
            for (sDzNLAXp95mt = 0; sDzNLAXp95mt < nbXCZ8qO1; sDzNLAXp95mt = sDzNLAXp95mt + 1) {
                boyp3M0r9evS[weqFPb][GjeXDuMW] = boyp3M0r9evS[weqFPb][GjeXDuMW] + TLOkp56Ul7dJ[weqFPb][sDzNLAXp95mt] * B5AxhO[sDzNLAXp95mt][GjeXDuMW];
            }
        }
    }
    for (weqFPb = 0; weqFPb < MPYBpxjVD; weqFPb = weqFPb + 1) {
        for (GjeXDuMW = 0; GjeXDuMW < jkZt8e2am - (863 - 862); GjeXDuMW = GjeXDuMW +1)
            cout << boyp3M0r9evS[weqFPb][GjeXDuMW] << ' ';
        cout << boyp3M0r9evS[weqFPb][jkZt8e2am - (734 - 733)] << endl;
    }
    return 0;
}

