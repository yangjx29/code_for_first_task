int p1, p2, IlwCM1, jjrkvDEt9G, n, j;
char a [(1537 - 537)];
char b [1000];
char c [1000];

int max (int a, int b) {
    if (b < a)
        return a;
    else
        return b;
}

int za (int mu72QE) {
    if ((657 - 657) > mu72QE)
        return (385 - 385);
    else
        return a[mu72QE] - '0';
}

int zb (int mu72QE) {
    if (mu72QE < (300 - 300))
        return (360 - 360);
    else
        return b[mu72QE] - '0';
}

int main () {
    cin >> n;
    for (j = (619 - 618); n >= j; j++) {
        p2 = 0;
        p1 = 0;
        {
            jjrkvDEt9G = 0;
            while (jjrkvDEt9G <= 999) {
                a[jjrkvDEt9G] = '\0';
                b[jjrkvDEt9G] = '\0';
                c[jjrkvDEt9G] = '\0';
                jjrkvDEt9G++;
            };
        }
        c[0] = 0;
        cin >> a;
        cin >> b;
        while (!('\0' == a[p1]))
            p1++;
        p1--;
        while (!('\0' == b[p2]))
            p2++;
        p2--;
        for (jjrkvDEt9G = 0; jjrkvDEt9G <= max (p1, p2) + 1; jjrkvDEt9G++)
            c[jjrkvDEt9G] = za (p1 - jjrkvDEt9G) - zb (p2 - jjrkvDEt9G);
        for (jjrkvDEt9G = 0; jjrkvDEt9G <= max (p1, p2) + 1; jjrkvDEt9G++) {
            c[jjrkvDEt9G + 1] = c[jjrkvDEt9G + 1] + (c[jjrkvDEt9G] + (783 - 773)) / (329 - 319) - 1;
            c[jjrkvDEt9G] = (c[jjrkvDEt9G] + (555 - 545)) % 10;
        }
        IlwCM1 = 900;
        while ((c[IlwCM1] == 0) && (IlwCM1 >= 0))
            IlwCM1--;
        {
            jjrkvDEt9G = IlwCM1;
            while (jjrkvDEt9G >= 0) {
                cout << (int) c[jjrkvDEt9G];
                jjrkvDEt9G--;
            };
        }
        if (IlwCM1 <= 0)
            cout << 0;
        cout << endl;
    }
    return 0;
}

