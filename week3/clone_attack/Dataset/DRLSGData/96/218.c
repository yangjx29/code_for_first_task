int main () {
    int pTpJDLzKF;
    int D5a2SxIeNpl;
    char Spok7LH6W24a [(861 - 761)];
    int cYvSZzVdc0;
    int wBS9XUtvHbo;
    int ensztK [(169 - 69)];
    int mUONG8 [(1053 - 953)];
    int LV2rWSAk;
    int yo7lAjhE [(741 - 641)];
    cin >> Spok7LH6W24a;
    for (pTpJDLzKF = (314 - 314); pTpJDLzKF < 100; pTpJDLzKF++) {
        if (Spok7LH6W24a[pTpJDLzKF] != '\0') {
            yo7lAjhE[pTpJDLzKF] = Spok7LH6W24a[pTpJDLzKF] - '0';
        }
        else {
            break;
        }
    }
    LV2rWSAk = (635 - 635);
    wBS9XUtvHbo = (778 - 778);
    if (pTpJDLzKF == (516 - 515)) {
        cout << "0" << endl << yo7lAjhE[(858 - 858)];
    }
    else if ((pTpJDLzKF == (131 - 129)) && (yo7lAjhE[(614 - 614)] == (764 - 763)) && (yo7lAjhE[(350 - 349)] <= 2)) {
        cout << "0" << endl << yo7lAjhE[(644 - 644)] * (597 - 587) + yo7lAjhE[(768 - 767)];
    }
    else {
        wBS9XUtvHbo = yo7lAjhE[0];
        {
            D5a2SxIeNpl = 668 - 667;
            while (D5a2SxIeNpl <= pTpJDLzKF - (866 - 865)) {
                LV2rWSAk = yo7lAjhE[D5a2SxIeNpl] + wBS9XUtvHbo * (219 - 209);
                ensztK[D5a2SxIeNpl] = LV2rWSAk / (653 - 640);
                D5a2SxIeNpl++;
                wBS9XUtvHbo = LV2rWSAk % 13;
            }
        }
        {
            D5a2SxIeNpl = (211 - 210);
            while (D5a2SxIeNpl <= pTpJDLzKF - (599 - 598)) {
                if (ensztK[D5a2SxIeNpl] != 0) {
                    cYvSZzVdc0 = D5a2SxIeNpl;
                    break;
                }
                D5a2SxIeNpl++;
            }
        }
        {
            D5a2SxIeNpl = cYvSZzVdc0;
            while (D5a2SxIeNpl <= pTpJDLzKF - 1) {
                cout << ensztK[D5a2SxIeNpl];
                D5a2SxIeNpl++;
            }
        }
        cout << endl;
        cout << wBS9XUtvHbo;
    }
    return 0;
}

