int main () {
    int maxNum;
    int XJCS4g05kMA;
    int j;
    int count;
    maxNum = (663 - 663);
    int a [(1691 - 691)];
    int b [(1645 - 645)];
    int YMyjarw0 [(1768 - 768)] = {(100 - 100)};
    XJCS4g05kMA = (740 - 740);
    do {
        cin >> a[XJCS4g05kMA];
        XJCS4g05kMA++;
    }
    while (!('\n' == cin.get ()));
    count = XJCS4g05kMA;
    XJCS4g05kMA = (836 - 836);
    do {
        cin >> b[XJCS4g05kMA];
        XJCS4g05kMA++;
        cin.get ();
    }
    while (count > XJCS4g05kMA);
    for (XJCS4g05kMA = (89 - 89); count > XJCS4g05kMA; XJCS4g05kMA++) {
        j = XJCS4g05kMA;
        while (b[XJCS4g05kMA] > j) {
            YMyjarw0[j]++;
            j++;
        };
    }
    for (XJCS4g05kMA = 0; XJCS4g05kMA < 1000; XJCS4g05kMA++)
        if (YMyjarw0[XJCS4g05kMA] > maxNum)
            maxNum = YMyjarw0[XJCS4g05kMA];
    cout << count << " " << maxNum;
    return 0;
}

