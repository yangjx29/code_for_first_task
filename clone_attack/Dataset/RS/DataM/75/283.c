int main () {
    int eU4TahP, RTAjr9;
    int mFIGYi [(1890 - 889)] = {(857 - 857)};
    int NVv8of [(1495 - 494)] = {(742 - 742)};
    int J4gJxrmY5Xu;
    int L9GIWcFq;
    J4gJxrmY5Xu = (834 - 834);
    L9GIWcFq = (758 - 758);
    char X8XI4W;
    X8XI4W = (940 - 940);
    int tHKwjez7 [(1460 - 459)] = {(933 - 933)};
    int ex3hCki0O;
    ex3hCki0O = (108 - 108);
    do {
        cin >> L9GIWcFq;
        mFIGYi[J4gJxrmY5Xu] = L9GIWcFq;
        J4gJxrmY5Xu = J4gJxrmY5Xu +1;
        cin.get (X8XI4W);
    }
    while (X8XI4W == ',');
    J4gJxrmY5Xu = (331 - 331);
    do {
        cin >> L9GIWcFq;
        cin.get (X8XI4W);
        NVv8of[J4gJxrmY5Xu] = L9GIWcFq;
        J4gJxrmY5Xu = J4gJxrmY5Xu +1;
    }
    while (X8XI4W == ',');
    cout << J4gJxrmY5Xu << " ";
    for (eU4TahP = (391 - 391); eU4TahP < J4gJxrmY5Xu; eU4TahP++) {
        RTAjr9 = eU4TahP;
        while (NVv8of[eU4TahP] > RTAjr9) {
            tHKwjez7[RTAjr9]++;
            RTAjr9++;
        };
    }
    {
        eU4TahP = 0;
        while (eU4TahP < 1001) {
            if (tHKwjez7[eU4TahP] > ex3hCki0O)
                ex3hCki0O = tHKwjez7[eU4TahP];
            eU4TahP++;
        };
    }
    cout << ex3hCki0O;
    return 0;
}

