int main () {
    int n, D7MZn5y, TWRCjb;
    double  sMT2KBU [100], y [100], fl4byYDCJ = 0;
    cin >> n;
    for (D7MZn5y = 0; D7MZn5y < n; D7MZn5y = D7MZn5y +1)
        cin >> sMT2KBU[D7MZn5y] >> y[D7MZn5y];
    for (D7MZn5y = 0; D7MZn5y < n - 1; D7MZn5y = D7MZn5y +1)
        for (TWRCjb = D7MZn5y +1; TWRCjb < n; TWRCjb = TWRCjb +1)
            if (sqrt (pow (sMT2KBU[D7MZn5y] - sMT2KBU[TWRCjb], 2) + pow (y[D7MZn5y] - y[TWRCjb], 2)) > fl4byYDCJ)
                fl4byYDCJ = sqrt (pow (sMT2KBU[D7MZn5y] - sMT2KBU[TWRCjb], 2) + pow (y[D7MZn5y] - y[TWRCjb], 2));
    cout << fixed << setprecision (4) << fl4byYDCJ << endl;
    return 0;
}

