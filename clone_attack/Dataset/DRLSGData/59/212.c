int main () {
    int i;
    int kwQ7uPDXp;
    int GisWvOlbz;
    int l;
    int ZnHpW6ZROA;
    int WiZLt5MY;
    int m;
    ZnHpW6ZROA = 0;
    int KZKxzVYXp [150] [150];
    char c;
    cin >> WiZLt5MY;
    {
        i = 1;
        while (WiZLt5MY >= i) {
            {
                kwQ7uPDXp = 1;
                while (WiZLt5MY >= kwQ7uPDXp) {
                    cin >> c;
                    if (!('#' != c))
                        KZKxzVYXp[i][kwQ7uPDXp] = -1;
                    else {
                        if (!('.' != c))
                            KZKxzVYXp[i][kwQ7uPDXp] = 0;
                        else
                            KZKxzVYXp[i][kwQ7uPDXp] = 1;
                    }
                    kwQ7uPDXp++;
                }
            }
            i++;
        }
    }
    cin >> m;
    {
        i = 2;
        while (m >= i) {
            {
                kwQ7uPDXp = 1;
                while (kwQ7uPDXp <= WiZLt5MY) {
                    {
                        GisWvOlbz = 1;
                        while (GisWvOlbz <= WiZLt5MY) {
                            if (KZKxzVYXp[kwQ7uPDXp][GisWvOlbz] == i - 1) {
                                if (!KZKxzVYXp[kwQ7uPDXp - 1][GisWvOlbz])
                                    KZKxzVYXp[kwQ7uPDXp - 1][GisWvOlbz] = i;
                                if (!KZKxzVYXp[kwQ7uPDXp + 1][GisWvOlbz])
                                    KZKxzVYXp[kwQ7uPDXp + 1][GisWvOlbz] = i;
                                if (!KZKxzVYXp[kwQ7uPDXp][GisWvOlbz -1])
                                    KZKxzVYXp[kwQ7uPDXp][GisWvOlbz -1] = i;
                                if (!KZKxzVYXp[kwQ7uPDXp][GisWvOlbz +1])
                                    KZKxzVYXp[kwQ7uPDXp][GisWvOlbz +1] = i;
                                KZKxzVYXp[kwQ7uPDXp][GisWvOlbz] = i;
                            }
                            GisWvOlbz++;
                        }
                    }
                    kwQ7uPDXp++;
                }
            }
            i++;
        }
    }
    {
        i = 1;
        while (i <= WiZLt5MY) {
            {
                kwQ7uPDXp = 1;
                while (kwQ7uPDXp <= WiZLt5MY) {
                    if (KZKxzVYXp[i][kwQ7uPDXp] == m)
                        ZnHpW6ZROA++;
                    kwQ7uPDXp++;
                }
            }
            i++;
        }
    }
    cout << ZnHpW6ZROA << endl;
    return 0;
}

