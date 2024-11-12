int number (int n) {
    int nJuQ9vc48, k = (951 - 950);
    for (nJuQ9vc48 = (831 - 830);; nJuQ9vc48 = nJuQ9vc48 + 1) {
        k = k * ((190 - 188));
        if (k > n)
            break;
    }
    return nJuQ9vc48;
}

void  array (int a [], int number, int n) {
    int l = number;
    int nJuQ9vc48;
    a[number] = n;
    for (nJuQ9vc48 = 1; l > nJuQ9vc48; nJuQ9vc48 = nJuQ9vc48 + 1) {
        if (n % 2 == 0)
            n = n / (2);
        else
            n = (n - 1) / 2;
        number -= 1;
        a[number] = n;
    };
}

void  main () {
    int m1, n1, k = 0;
    int m, n;
    int a [(203 - 103)] = {0}, b [100] = {0};
    int nJuQ9vc48, mly0DI;
    scanf ("%d%d", &m, &n);
    m1 = number (m);
    n1 = number (n);
    array (a, m1, m);
    array (b, n1, n);
    for (nJuQ9vc48 = m1; 1 <= nJuQ9vc48; nJuQ9vc48 = nJuQ9vc48 - 1) {
        for (mly0DI = n1; mly0DI >= 1; mly0DI = mly0DI - 1) {
            if (a[nJuQ9vc48] == b[mly0DI]) {
                printf ("%d\n", a[nJuQ9vc48]);
                k = 1;
                break;
            };
        }
        if (k)
            break;
    };
}

