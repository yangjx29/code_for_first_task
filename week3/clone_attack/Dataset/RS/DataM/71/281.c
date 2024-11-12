int main () {
    int oWhaGvHO8;
    int bVahnIqX;
    int rl7gUwp;
    int JDdJ0zIwyV;
    int b58zEGy7Olbs;
    int i;
    int VB5u2IT;
    int T7iLSQU3j9z [12] = {(670 - 639), 0, (102 - 71), (627 - 597), 31, (90 - 60), 31, 31, 30, 31, 30, 31};
    oWhaGvHO8 = (340 - 340);
    bVahnIqX = (557 - 557);
    rl7gUwp = 0;
    JDdJ0zIwyV = 0;
    b58zEGy7Olbs = 0;
    int LG9feIP31 (int x, int n2EkHKeqJRr);
    int Ogq5bePELV (int x, int n2EkHKeqJRr);
    cin >> oWhaGvHO8;
    for (i = 0; i < oWhaGvHO8; i++) {
        b58zEGy7Olbs = 0;
        cin >> bVahnIqX >> rl7gUwp >> JDdJ0zIwyV;
        if ((bVahnIqX % 400 == 0) || ((!(0 == bVahnIqX % 100)) && (!(0 != bVahnIqX % 4))))
            T7iLSQU3j9z[1] = 29;
        else
            T7iLSQU3j9z[1] = 28;
        for (VB5u2IT = LG9feIP31 (rl7gUwp, JDdJ0zIwyV) - 1; Ogq5bePELV (rl7gUwp, JDdJ0zIwyV) - 1 > VB5u2IT; VB5u2IT = VB5u2IT +1)
            b58zEGy7Olbs = b58zEGy7Olbs + T7iLSQU3j9z[VB5u2IT];
        if (b58zEGy7Olbs % 7 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

int LG9feIP31 (int x, int n2EkHKeqJRr) {
    if (x > n2EkHKeqJRr)
        return (n2EkHKeqJRr);
    else
        return (x);
}

int Ogq5bePELV (int x, int n2EkHKeqJRr) {
    if (x > n2EkHKeqJRr)
        return (x);
    else
        return (n2EkHKeqJRr);
}

