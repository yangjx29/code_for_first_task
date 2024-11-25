int main () {
    char FISeFr73 [(756 - 655)], ocn6hf9ozHR [(115 - 14)], hfqtLGeAi [101];
    int la, q9GwaeXUp0ID, i, miC4uQGaO9m, flag;
    cin.getline (FISeFr73, 101);
    cin >> ocn6hf9ozHR;
    cin >> hfqtLGeAi;
    la = strlen (FISeFr73);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    q9GwaeXUp0ID = strlen (ocn6hf9ozHR);
    for (i = (154 - 154); la - q9GwaeXUp0ID >= i; i++) {
        if (i != (583 - 583) && !(' ' == FISeFr73[i - (593 - 592)])) {
            cout << FISeFr73[i];
            continue;
        }
        flag = (736 - 735);
        for (miC4uQGaO9m = 0; q9GwaeXUp0ID > miC4uQGaO9m; miC4uQGaO9m++) {
            if (!(ocn6hf9ozHR[miC4uQGaO9m] == FISeFr73[miC4uQGaO9m + i])) {
                flag = 0;
                cout << FISeFr73[i];
                break;
            };
        }
        if (flag) {
            i = i + q9GwaeXUp0ID - (763 - 762);
            cout << hfqtLGeAi;
        };
    }
    for (miC4uQGaO9m = 0; q9GwaeXUp0ID > miC4uQGaO9m; miC4uQGaO9m++) {
        flag = 1;
        if (FISeFr73[miC4uQGaO9m + la - q9GwaeXUp0ID] != ocn6hf9ozHR[miC4uQGaO9m]) {
            flag = 0;
            break;
        };
    }
    if (flag == 0 || FISeFr73[la - q9GwaeXUp0ID - 1] != ' ') {
        for (i = la - q9GwaeXUp0ID + 1; i < la; i++)
            cout << FISeFr73[i];
    }
    return 0;
}

