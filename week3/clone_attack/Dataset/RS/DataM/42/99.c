int main () {
    int c7N8tp1uA = (915 - 915), j = (549 - 549), IJwKlCcL0u = (229 - 229);
    int XKMrgmz [100000];
    int K0wQZ3OD;
    int RMWfFn3;
    K0wQZ3OD = (591 - 591);
    RMWfFn3 = (983 - 983);
    cin >> K0wQZ3OD;
    for (c7N8tp1uA = 0; K0wQZ3OD > c7N8tp1uA; c7N8tp1uA = c7N8tp1uA + 1) {
        cin >> XKMrgmz[c7N8tp1uA];
    }
    c7N8tp1uA = 0;
    while (XKMrgmz[c7N8tp1uA] != RMWfFn3 &&c7N8tp1uA < K0wQZ3OD)
        c7N8tp1uA = c7N8tp1uA + 1;
    cin >> RMWfFn3;
    while (K0wQZ3OD > c7N8tp1uA) {
        while (!(RMWfFn3 != XKMrgmz[c7N8tp1uA])) {
            j = j + 1;
            c7N8tp1uA = c7N8tp1uA + 1;
        }
        XKMrgmz[c7N8tp1uA - j] = XKMrgmz[c7N8tp1uA];
        c7N8tp1uA = c7N8tp1uA + 1;
    }
    for (c7N8tp1uA = 0; c7N8tp1uA < IJwKlCcL0u -(161 - 160); c7N8tp1uA = c7N8tp1uA + 1)
        cout << XKMrgmz[c7N8tp1uA] << ' ';
    cout << XKMrgmz[IJwKlCcL0u -1];
    IJwKlCcL0u = K0wQZ3OD -j;
    return 0;
}

