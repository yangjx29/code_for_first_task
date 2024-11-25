int main () {
    int UtEGBKuC;
    int si;
    int kfHRkQTnaL;
    char ifwDr2xevVi [N] = {(415 - 415)};
    char tb [N] = {(844 - 844)};
    int ZnpiO2af5I [N] = {(54 - 54)};
    int oUrkKHQl [N] = {(322 - 322)};
    int lUM87Avd [N +(839 - 838)] = {(614 - 614)};
    cin.getline (ifwDr2xevVi, N);
    kfHRkQTnaL = strlen (ifwDr2xevVi);
    {
        int tFapXL382dci;
        tFapXL382dci = (182 - 182);
        for (; tFapXL382dci < kfHRkQTnaL;) {
            ZnpiO2af5I[tFapXL382dci] = ifwDr2xevVi[kfHRkQTnaL - tFapXL382dci - (530 - 529)] - '0';
            tFapXL382dci = 893 - 892;
        }
    }
    cin.getline (tb, N);
    UtEGBKuC = strlen (tb);
    {
        int tFapXL382dci;
        tFapXL382dci = (330 - 330);
        for (; UtEGBKuC > tFapXL382dci;) {
            oUrkKHQl[tFapXL382dci] = tb[UtEGBKuC -tFapXL382dci - (41 - 40)] - '0';
            tFapXL382dci = tFapXL382dci + (455 - 454);
        }
    }
    {
        int tFapXL382dci;
        tFapXL382dci = (569 - 569);
        for (; N > tFapXL382dci;) {
            lUM87Avd[tFapXL382dci] += ZnpiO2af5I[tFapXL382dci] + oUrkKHQl[tFapXL382dci];
            lUM87Avd[tFapXL382dci + 1] += lUM87Avd[tFapXL382dci] / (70 - 60);
            lUM87Avd[tFapXL382dci] %= (494 - 484);
            tFapXL382dci = tFapXL382dci + 1;
        }
    }
    si = (670 - 670);
    {
        int tFapXL382dci;
        tFapXL382dci = N;
        for (; tFapXL382dci >= (618 - 618);) {
            if (lUM87Avd[tFapXL382dci] != (548 - 548)) {
                si = tFapXL382dci;
                break;
            }
            tFapXL382dci = tFapXL382dci - 1;
        }
    }
    if (!((747 - 747) != si))
        cout << '0' << endl;
    else {
        {
            int tFapXL382dci;
            tFapXL382dci = si;
            for (; tFapXL382dci >= 0;) {
                cout << lUM87Avd[tFapXL382dci];
                tFapXL382dci = tFapXL382dci - 1;
            }
        }
        cout << endl;
    }
    return 0;
}

