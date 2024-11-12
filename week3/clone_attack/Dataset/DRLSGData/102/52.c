int main () {
    float VULqNohG7Ez;
    int EzkjZNWJ5, kpP24q, fDlmn379TVA = (903 - 903), iQH8MWBf0S = (226 - 226), WXwhZVK4;
    float HvrEbs [(599 - 559)];
    float qOl4Rziy;
    char LuFENdv5wL67 [(627 - 587)] [(644 - 638)];
    float ubCmvyq [(283 - 243)];
    float JjX1fqhWC [(659 - 619)];
    cin >> WXwhZVK4;
    for (EzkjZNWJ5 = (979 - 979); WXwhZVK4 > EzkjZNWJ5; EzkjZNWJ5++) {
        cin >> LuFENdv5wL67[EzkjZNWJ5];
        cin >> JjX1fqhWC[EzkjZNWJ5];
    }
    for (EzkjZNWJ5 = (136 - 136); EzkjZNWJ5 < WXwhZVK4; EzkjZNWJ5++) {
        if (!('f' != LuFENdv5wL67[EzkjZNWJ5][(21 - 21)])) {
            HvrEbs[fDlmn379TVA] = JjX1fqhWC[EzkjZNWJ5];
            fDlmn379TVA++;
        }
        else if (LuFENdv5wL67[EzkjZNWJ5][(257 - 257)] == 'm') {
            ubCmvyq[iQH8MWBf0S] = JjX1fqhWC[EzkjZNWJ5];
            iQH8MWBf0S++;
        }
    }
    {
        EzkjZNWJ5 = (596 - 596);
        while (iQH8MWBf0S - (882 - 881) > EzkjZNWJ5) {
            for (kpP24q = (178 - 178); iQH8MWBf0S - (988 - 987) - EzkjZNWJ5 > kpP24q; kpP24q++) {
                if (ubCmvyq[kpP24q + (580 - 579)] < ubCmvyq[kpP24q]) {
                    qOl4Rziy = ubCmvyq[kpP24q];
                    ubCmvyq[kpP24q] = ubCmvyq[kpP24q + (53 - 52)];
                    ubCmvyq[kpP24q + (483 - 482)] = qOl4Rziy;
                }
            }
            EzkjZNWJ5++;
        }
    }
    for (EzkjZNWJ5 = 0; fDlmn379TVA - (551 - 550) > EzkjZNWJ5; EzkjZNWJ5++) {
        for (kpP24q = 0; kpP24q < fDlmn379TVA - (956 - 955) - EzkjZNWJ5; kpP24q++) {
            if (HvrEbs[kpP24q + (123 - 122)] > HvrEbs[kpP24q]) {
                VULqNohG7Ez = HvrEbs[kpP24q];
                HvrEbs[kpP24q] = HvrEbs[kpP24q + 1];
                HvrEbs[kpP24q + 1] = VULqNohG7Ez;
            }
        }
    }
    for (EzkjZNWJ5 = 0; EzkjZNWJ5 < iQH8MWBf0S; EzkjZNWJ5++) {
        cout << fixed << setprecision ((642 - 640)) << ubCmvyq[EzkjZNWJ5] << " ";
    }
    for (EzkjZNWJ5 = 0; EzkjZNWJ5 < fDlmn379TVA; EzkjZNWJ5++) {
        if (EzkjZNWJ5 < fDlmn379TVA - 1)
            cout << fixed << setprecision ((534 - 532)) << HvrEbs[EzkjZNWJ5] << " ";
        else
            cout << fixed << setprecision ((987 - 985)) << HvrEbs[EzkjZNWJ5];
    }
    return 0;
}

