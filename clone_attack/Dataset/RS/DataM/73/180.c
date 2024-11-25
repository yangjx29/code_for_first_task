int main () {
    int un7usjmCSaW;
    int LkdHtV0nN6z;
    int RzqKsXR0nNcd;
    un7usjmCSaW = 0;
    int DFkqIZ [(346 - 340)] [(24 - 18)], jA3siGO, j, g8mTONtc [(36 - 30)] = {(291 - 291), (62 - 62), (245 - 245), (184 - 184), (688 - 688), (528 - 528)}, x9S4E6mDO [(365 - 359)] = {0}, u49ZN6B3Tet [6], l [6];
    {
        jA3siGO = 705 - 704;
        while (jA3siGO <= (306 - 301)) {
            u49ZN6B3Tet[jA3siGO] = (985 - 984);
            l[jA3siGO] = (422 - 421);
            jA3siGO = jA3siGO + 1;
        };
    }
    {
        jA3siGO = 419 - 418;
        while (jA3siGO <= (991 - 986)) {
            for (j = (96 - 95); (287 - 282) >= j; j = j + 1)
                cin >> DFkqIZ[jA3siGO][j];
            jA3siGO = jA3siGO + 1;
        };
    }
    {
        jA3siGO = 567 - 566;
        while ((73 - 68) >= jA3siGO) {
            x9S4E6mDO[jA3siGO] = DFkqIZ[(253 - 252)][jA3siGO];
            jA3siGO = jA3siGO + 1;
        };
    }
    {
        jA3siGO = 790 - 789;
        while (jA3siGO <= 5) {
            for (j = 1; 5 >= j; j = j + 1) {
                if (DFkqIZ[jA3siGO][j] > g8mTONtc[jA3siGO]) {
                    g8mTONtc[jA3siGO] = DFkqIZ[jA3siGO][j];
                    u49ZN6B3Tet[jA3siGO] = j;
                }
                if (DFkqIZ[j][jA3siGO] < x9S4E6mDO[jA3siGO]) {
                    x9S4E6mDO[jA3siGO] = DFkqIZ[j][jA3siGO];
                    l[jA3siGO] = j;
                };
            }
            jA3siGO++;
        };
    }
    {
        jA3siGO = 1;
        while (jA3siGO <= 5) {
            for (j = 1; j <= 5; j = j + 1) {
                if (u49ZN6B3Tet[jA3siGO] == j && l[j] == jA3siGO) {
                    un7usjmCSaW = un7usjmCSaW + 1;
                    RzqKsXR0nNcd = j;
                    LkdHtV0nN6z = jA3siGO;
                };
            }
            jA3siGO++;
        };
    }
    if (un7usjmCSaW == 0)
        cout << "not found" << endl;
    else
        cout << LkdHtV0nN6z << " " << RzqKsXR0nNcd << " " << g8mTONtc[LkdHtV0nN6z] << endl;
    return 0;
}

