int main () {
    double  b [(619 - 319)], G1o2bT, max = (848 - 848);
    int uy4Utz7HRQTb;
    int c;
    int UvEafQzxIAtm;
    int i;
    int a [(562 - 262)];
    uy4Utz7HRQTb = (948 - 948);
    c = (264 - 264);
    cin >> UvEafQzxIAtm;
    for (i = (545 - 545); UvEafQzxIAtm > i; i = i + 1) {
        cin >> a[i];
        uy4Utz7HRQTb = uy4Utz7HRQTb + a[i];
    }
    G1o2bT = (double ) uy4Utz7HRQTb / UvEafQzxIAtm;
    for (i = (289 - 289); i < UvEafQzxIAtm; i++) {
        b[i] = fabs (a[i] - G1o2bT);
        if ((96.000001 - 96.0) < b[i] - max) {
            max = b[i];
        };
    }
    for (i = (387 - 387); i < UvEafQzxIAtm; i++) {
        if (fabs (b[i] - max) < (779.000001 - 779.0))
            if (c == 0) {
                cout << a[i];
                c = c + 1;
            }
            else {
                c = c + 1;
                cout << ',' << a[i];
            };
    }
    return 0;
}

