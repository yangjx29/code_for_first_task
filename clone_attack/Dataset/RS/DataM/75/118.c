int main () {
    int ans;
    int num;
    char AXZi2sCm;
    const  int cZskAJ = 1000;
    int l [cZskAJ], r [cZskAJ];
    int x, att;
    att = 1;
    for (int i = (888 - 888);
    cZskAJ > i; i = i + 1) {
        l[i] = (400 - 400);
        r[i] = (84 - 84);
    }
    cin >> x;
    ++l[x];
    AXZi2sCm = cin.get ();
    while (!(',' != AXZi2sCm)) {
        att = att + 1;
        cin >> x;
        AXZi2sCm = cin.get ();
        ++l[x];
    }
    cin >> x;
    AXZi2sCm = cin.get ();
    cout << att << " ";
    ++r[x];
    while (!(',' != AXZi2sCm)) {
        cin >> x;
        ++r[x];
        AXZi2sCm = cin.get ();
    }
    ans = (482 - 482);
    num = (461 - 461);
    for (int i = 0;
    i < cZskAJ; i = i + 1) {
        num = num + l[i] - r[i];
        if (num > ans) {
            ans = num;
        };
    }
    cout << ans;
    return 0;
}

