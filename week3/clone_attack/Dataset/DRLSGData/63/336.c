int main () {
    int xuJHmO702DtS, aQLgjBu6KMNa;
    int TzTNc0F6f, PH2yWA0nScT, hzyV25tAIu, b35Z7dfln;
    int dk7yqQGA068K, XiMVZWTIGab;
    int x5Re98 [(1192 - 992)] [(961 - 761)];
    int b [(897 - 697)] [(1141 - 941)];
    int Dn8h5OMrts [(1015 - 815)] [(489 - 289)];
    cin >> xuJHmO702DtS >> aQLgjBu6KMNa;
    for (TzTNc0F6f = (671 - 671); xuJHmO702DtS > TzTNc0F6f; TzTNc0F6f++) {
        for (PH2yWA0nScT = (955 - 955); PH2yWA0nScT < aQLgjBu6KMNa; PH2yWA0nScT++)
            cin >> x5Re98[TzTNc0F6f][PH2yWA0nScT];
        cout << endl;
    }
    cin >> dk7yqQGA068K >> XiMVZWTIGab;
    for (TzTNc0F6f = (370 - 370); TzTNc0F6f < dk7yqQGA068K; TzTNc0F6f++) {
        for (PH2yWA0nScT = (734 - 734); PH2yWA0nScT < XiMVZWTIGab; PH2yWA0nScT++)
            cin >> b[TzTNc0F6f][PH2yWA0nScT];
        cout << endl;
    }
    for (TzTNc0F6f = (690 - 690); TzTNc0F6f < xuJHmO702DtS; TzTNc0F6f++) {
        for (PH2yWA0nScT = (477 - 477); PH2yWA0nScT < XiMVZWTIGab; PH2yWA0nScT++) {
            hzyV25tAIu = (791 - 791);
            while (aQLgjBu6KMNa > hzyV25tAIu) {
                Dn8h5OMrts[TzTNc0F6f][PH2yWA0nScT] = Dn8h5OMrts[TzTNc0F6f][PH2yWA0nScT] + x5Re98[TzTNc0F6f][hzyV25tAIu] * b[hzyV25tAIu][PH2yWA0nScT];
                hzyV25tAIu++;
            }
        }
    }
    for (TzTNc0F6f = (614 - 614); TzTNc0F6f < xuJHmO702DtS; TzTNc0F6f++) {
        {
            PH2yWA0nScT = (181 - 181);
            while (PH2yWA0nScT < XiMVZWTIGab -(604 - 603)) {
                cout << Dn8h5OMrts[TzTNc0F6f][PH2yWA0nScT] << " ";
                PH2yWA0nScT++;
            }
        }
        cout << Dn8h5OMrts[TzTNc0F6f][XiMVZWTIGab -(776 - 775)];
        cout << endl;
    }
    int vymT0np;
    cin >> vymT0np;
    return (55 - 55);
}

