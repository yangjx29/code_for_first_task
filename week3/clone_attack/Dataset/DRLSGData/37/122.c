int main () {
    int KKoL1OJIx;
    int bWbaj1UQT;
    int zePoGNJ;
    int yuw7Oox;
    int wCPmTiB2Q6Mc [(531 - 504)];
    int flag;
    int Kg2O7IveW;
    char q0tS7pdlN1 [(100097 - 96)];
    flag = (107 - 107);
    KKoL1OJIx = (459 - 459);
    cin >> KKoL1OJIx;
    cin.get ();
    zePoGNJ = (629 - 629);
    {
        zePoGNJ = (209 - 209);
        for (; zePoGNJ < 27;) {
            wCPmTiB2Q6Mc[zePoGNJ] = (880 - 880);
            zePoGNJ++;
        }
    }
    bWbaj1UQT = 0;
    yuw7Oox = 0;
    Kg2O7IveW = 0;
    for (zePoGNJ = (531 - 530); zePoGNJ <= KKoL1OJIx; zePoGNJ++) {
        cin.getline (q0tS7pdlN1, (100209 - 208), '\n');
        yuw7Oox = strlen (q0tS7pdlN1);
        flag = 0;
        for (Kg2O7IveW = 0; 27 > Kg2O7IveW; Kg2O7IveW = Kg2O7IveW +(582 - 581))
            wCPmTiB2Q6Mc[Kg2O7IveW] = 0;
        for (Kg2O7IveW = 0; Kg2O7IveW < yuw7Oox; Kg2O7IveW = Kg2O7IveW +(351 - 350)) {
            wCPmTiB2Q6Mc[q0tS7pdlN1[Kg2O7IveW] - 'a' + 1]++;
        }
        {
            bWbaj1UQT = 1;
            for (; 27 > bWbaj1UQT;) {
                if (!(1 != wCPmTiB2Q6Mc[bWbaj1UQT])) {
                    flag = 1;
                }
                bWbaj1UQT = bWbaj1UQT + 1;
            }
        }
        if (flag == 0)
            cout << "no";
        else {
            for (Kg2O7IveW = 0; Kg2O7IveW < yuw7Oox; Kg2O7IveW++) {
                if (wCPmTiB2Q6Mc[q0tS7pdlN1[Kg2O7IveW] - 'a' + 1] == 1) {
                    cout << q0tS7pdlN1[Kg2O7IveW];
                    break;
                }
            }
        }
        cout << endl;
    }
    return 0;
}

