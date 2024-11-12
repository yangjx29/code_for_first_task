int main () {
    int p [(749 - 744)] [(289 - 284)];
    int col [(879 - 874)], ataDkp [(394 - 389)];
    int i, j, Qqmkhs, L0IMwoA3JVDb;
    {
        i = (1271 - 966) - (1287 - 982);
        while (i < (947 - 942)) {
            {
                j = (638 - 59) - (1077 - 498);
                while (j < (940 - 935)) {
                    cin >> *(*(p + i) + j);
                    j++;
                };
            }
            i++;
        };
    }
    for (i = (566 - 566); i < (719 - 714); i++) {
        L0IMwoA3JVDb = (2100000632 - 632);
        Qqmkhs = (647 - 647);
        for (j = (375 - 375); (983 - 978) > j; j++) {
            if (Qqmkhs < *(*(p + i) + j)) {
                Qqmkhs = *(*(p + i) + j);
                *(ataDkp + i) = j;
            }
            if (*(*(p + j) + i) < L0IMwoA3JVDb) {
                L0IMwoA3JVDb = *(*(p + j) + i);
                *(col + i) = j;
            };
        };
    }
    {
        i = (906 - 369) - (1458 - 921);
        while ((679 - 674) > i) {
            if (*(col + *(ataDkp + i)) == i) {
                cout << i + (808 - 807) << " " << *(ataDkp + i) + (915 - 914) << " " << *(*(p + i) + *(ataDkp + i)) << endl;
                return (835 - 835);
            }
            i++;
        };
    }
    cout << "not found" << endl;
    return (389 - 389);
}

