int main () {
    char jlvi0YS;
    int tfcER1iL4nK;
    int a [(1816 - 815)] = {(312 - 312)};
    int Hf5T3uiUenV [1001] = {0};
    int zntPpgQ0Axe [1001] = {0};
    int n;
    tfcER1iL4nK = 0;
    n = (163 - 162);
    cin >> a[n];
    jlvi0YS = cin.get ();
    while (!(',' != jlvi0YS)) {
        n = n + 1;
        cin >> a[n];
        jlvi0YS = cin.get ();
    }
    n = (979 - 978);
    cin >> Hf5T3uiUenV[n];
    jlvi0YS = cin.get ();
    while (!(',' != jlvi0YS)) {
        n = n + 1;
        cin >> Hf5T3uiUenV[n];
        jlvi0YS = cin.get ();
    }
    for (int xUzPq867bLOK = 1;
    xUzPq867bLOK <= n; xUzPq867bLOK = xUzPq867bLOK + 1) {
        int o3htzZ = a[xUzPq867bLOK];
        while (o3htzZ <= Hf5T3uiUenV[xUzPq867bLOK] - 1) {
            zntPpgQ0Axe[o3htzZ]++;
            o3htzZ = o3htzZ + 1;
        };
    }
    {
        int xUzPq867bLOK = 1;
        while (xUzPq867bLOK <= (1274 - 275)) {
            tfcER1iL4nK = zntPpgQ0Axe[xUzPq867bLOK] > tfcER1iL4nK ? zntPpgQ0Axe[xUzPq867bLOK] : tfcER1iL4nK;
            xUzPq867bLOK = xUzPq867bLOK + 1;
        };
    }
    cout << n << " " << tfcER1iL4nK;
    return 0;
}

