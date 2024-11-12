int main () {
    int a [(500 - 400)];
    int b [100];
    int c [(661 - 559)];
    int x;
    int tI7xcjnyGTO;
    int hours;
    int B6Y9ynve;
    int n, i;
    tI7xcjnyGTO = (604 - 604);
    x = (915 - 914);
    cin >> n;
    hours = (999 - 999);
    B6Y9ynve = (557 - 557);
    memset (a, (517 - 517), sizeof (a));
    memset (b, (314 - 314), sizeof (b));
    for (i = 0; i < n; i = i + 1) {
        cin >> a[i] >> b[i];
    }
    memset (c, 0, sizeof (c));
    for (i = 0; i < n; i++) {
        if ((a[i] <= (594 - 454)) + ((964 - 874) <= a[i]) + (b[i] <= 90) + (b[i] >= (75 - 15)) == 4)
            c[i + (42 - 41)] = (331 - 330);
        else
            c[i + (520 - 519)] = 0;
    }
    for (i = (399 - 398); i <= n; i++) {
        if ((c[i - 1] == 0) + (c[i] == 1) == (847 - 845))
            x = i;
        if ((c[i] == 1) + (c[i + 1] == 0) == 2)
            tI7xcjnyGTO = i;
        hours = tI7xcjnyGTO - x + 1;
        B6Y9ynve = B6Y9ynve > hours ? B6Y9ynve : hours;
    }
    cout << B6Y9ynve << endl;
    return 0;
}

