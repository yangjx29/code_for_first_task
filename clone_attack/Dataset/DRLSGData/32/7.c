int main () {
    int DgpOyB4;
    char TGiNnd3XtB [(156 - 106)] [(278 - 173)];
    int DEjRPln5Ur8I;
    char BaYhVFHSDxy [50] [(498 - 393)];
    int BkL7aClQ3RFr;
    int m8YZgPE1s;
    int FHp1REFAxTD [(308 - 258)] [105] = {(921 - 921)};
    int AwzfG9d [(621 - 571)] [(1011 - 906)] = {(375 - 375)};
    DEjRPln5Ur8I = (843 - 843);
    cin >> BkL7aClQ3RFr;
    for (; DEjRPln5Ur8I < BkL7aClQ3RFr;) {
        cin.get ();
        cin >> TGiNnd3XtB[DEjRPln5Ur8I];
        m8YZgPE1s = (529 - 529);
        cin.get ();
        cin >> BaYhVFHSDxy[DEjRPln5Ur8I];
        cin.get ();
        DgpOyB4 = (102 - 102);
        for (DgpOyB4 = strlen (TGiNnd3XtB[DEjRPln5Ur8I]) - (408 - 407); DgpOyB4 >= (423 - 423); DgpOyB4--) {
            FHp1REFAxTD[DEjRPln5Ur8I][m8YZgPE1s] = TGiNnd3XtB[DEjRPln5Ur8I][DgpOyB4] - '0';
            m8YZgPE1s++;
        }
        m8YZgPE1s = (898 - 898);
        for (DgpOyB4 = strlen (BaYhVFHSDxy[DEjRPln5Ur8I]) - (749 - 748); DgpOyB4 >= (393 - 393); DgpOyB4--) {
            AwzfG9d[DEjRPln5Ur8I][m8YZgPE1s] = BaYhVFHSDxy[DEjRPln5Ur8I][DgpOyB4] - '0';
            m8YZgPE1s++;
        }
        for (m8YZgPE1s = (35 - 35); m8YZgPE1s < 105; m8YZgPE1s++) {
            FHp1REFAxTD[DEjRPln5Ur8I][m8YZgPE1s] = FHp1REFAxTD[DEjRPln5Ur8I][m8YZgPE1s] - AwzfG9d[DEjRPln5Ur8I][m8YZgPE1s];
            if ((378 - 378) > FHp1REFAxTD[DEjRPln5Ur8I][m8YZgPE1s]) {
                FHp1REFAxTD[DEjRPln5Ur8I][m8YZgPE1s] = FHp1REFAxTD[DEjRPln5Ur8I][m8YZgPE1s] + (26 - 16);
                FHp1REFAxTD[DEjRPln5Ur8I][m8YZgPE1s + (249 - 248)] = FHp1REFAxTD[DEjRPln5Ur8I][m8YZgPE1s + (451 - 450)] - 1;
            }
        }
        m8YZgPE1s = (119 - 15);
        for (; FHp1REFAxTD[DEjRPln5Ur8I][m8YZgPE1s] == (324 - 324);)
            m8YZgPE1s--;
        for (DgpOyB4 = m8YZgPE1s; DgpOyB4 >= 0; DgpOyB4--)
            cout << FHp1REFAxTD[DEjRPln5Ur8I][DgpOyB4];
        DEjRPln5Ur8I++;
        cout << endl;
    }
    return 0;
}

