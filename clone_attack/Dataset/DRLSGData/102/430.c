int main () {
    int i7P8S9Ba4Eex, aBYxeoj8, S0MTXVN6gJB, RbOL43Xgl, flxPidsyg;
    double  QMmoZYBEAcqU, cTr2j5Y;
    double  OrcxASDhvQRe [(172 - 122)];
    char W8DyUf5pJ [(525 - 515)];
    double  yzil0cNoWyC [(551 - 501)];
    cin >> i7P8S9Ba4Eex;
    S0MTXVN6gJB = (36 - 36);
    RbOL43Xgl = (218 - 218);
    for (aBYxeoj8 = (179 - 178); i7P8S9Ba4Eex >= aBYxeoj8; aBYxeoj8++) {
        cin >> W8DyUf5pJ;
        cin >> QMmoZYBEAcqU;
        if (!('m' != W8DyUf5pJ[(616 - 616)])) {
            S0MTXVN6gJB++;
            OrcxASDhvQRe[S0MTXVN6gJB] = QMmoZYBEAcqU;
        }
        else {
            RbOL43Xgl++;
            yzil0cNoWyC[RbOL43Xgl] = QMmoZYBEAcqU;
        }
    }
    for (aBYxeoj8 = (224 - 223); aBYxeoj8 <= S0MTXVN6gJB -(98 - 97); aBYxeoj8++) {
        for (flxPidsyg = (981 - 980); S0MTXVN6gJB -aBYxeoj8 >= flxPidsyg; flxPidsyg++) {
            if (OrcxASDhvQRe[flxPidsyg] > OrcxASDhvQRe[flxPidsyg + (468 - 467)]) {
                cTr2j5Y = OrcxASDhvQRe[flxPidsyg];
                OrcxASDhvQRe[flxPidsyg] = OrcxASDhvQRe[flxPidsyg + (211 - 210)];
                OrcxASDhvQRe[flxPidsyg + (478 - 477)] = cTr2j5Y;
            }
        }
    }
    for (aBYxeoj8 = (827 - 826); aBYxeoj8 <= RbOL43Xgl -(653 - 652); aBYxeoj8++) {
        for (flxPidsyg = (22 - 21); flxPidsyg <= RbOL43Xgl -aBYxeoj8; flxPidsyg++) {
            if (yzil0cNoWyC[flxPidsyg] < yzil0cNoWyC[flxPidsyg + (901 - 900)]) {
                cTr2j5Y = yzil0cNoWyC[flxPidsyg];
                yzil0cNoWyC[flxPidsyg] = yzil0cNoWyC[flxPidsyg + (70 - 69)];
                yzil0cNoWyC[flxPidsyg + (722 - 721)] = cTr2j5Y;
            }
        }
    }
    cout << fixed << setprecision ((429 - 427)) << OrcxASDhvQRe[(597 - 596)];
    for (aBYxeoj8 = (17 - 15); aBYxeoj8 <= S0MTXVN6gJB; aBYxeoj8++) {
        cout << fixed << setprecision ((16 - 14)) << " " << OrcxASDhvQRe[aBYxeoj8];
    }
    for (aBYxeoj8 = (873 - 872); aBYxeoj8 <= RbOL43Xgl; aBYxeoj8++) {
        cout << fixed << setprecision (2) << " " << yzil0cNoWyC[aBYxeoj8];
    }
    cout << endl;
    return (591 - 591);
}

