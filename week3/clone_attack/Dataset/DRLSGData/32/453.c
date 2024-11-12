int main () {
    int piA8ya;
    int k;
    int a [201];
    int i;
    int l2;
    int Bd6UnucoZfzY [201];
    char x [(860 - 659)];
    int n;
    char y [201];
    int qQJ29dRntBPu;
    n = (398 - 398);
    cin >> n;
    cin.get ();
    {
        k = 208 - 208;
        for (; k < n - (65 - 64);) {
            memset (a, (583 - 583), sizeof (a));
            memset (Bd6UnucoZfzY, (574 - 574), sizeof (Bd6UnucoZfzY));
            memset (x, (318 - 318), sizeof (x));
            cin.getline (x, 201);
            qQJ29dRntBPu = strlen (x);
            for (i = 0, piA8ya = qQJ29dRntBPu - 1; i < qQJ29dRntBPu; i = i + 1, piA8ya = piA8ya - 1) {
                a[piA8ya] = x[i] - '0';
            }
            memset (y, 0, sizeof (y));
            cin.getline (y, 201);
            l2 = strlen (y);
            for (i = 0, piA8ya = l2 - 1; l2 > i; i = i + 1, piA8ya = piA8ya - 1) {
                Bd6UnucoZfzY[piA8ya] = y[i] - '0';
            }
            for (i = 0; l2 > i; i = i + 1) {
                a[i] = a[i] - Bd6UnucoZfzY[i];
                if (0 > a[i]) {
                    a[i] = a[i] + (431 - 421);
                    a[i + 1] = a[i + 1] - 1;
                }
            }
            {
                i = 200;
                for (; i >= 0;) {
                    if (a[i] != 0)
                        break;
                    i = i - 1;
                }
            }
            k = k + 1;
            {
                i = i;
                for (; i >= 0;) {
                    cout << a[i];
                    i = i - 1;
                }
            }
            cout << endl;
            cin.get ();
        }
    }
    memset (a, 0, sizeof (a));
    memset (Bd6UnucoZfzY, 0, sizeof (Bd6UnucoZfzY));
    memset (x, 0, sizeof (x));
    cin.getline (x, 201);
    qQJ29dRntBPu = strlen (x);
    for (i = 0, piA8ya = qQJ29dRntBPu - 1; qQJ29dRntBPu > i; i = i + 1, piA8ya = piA8ya - 1) {
        a[piA8ya] = x[i] - '0';
    }
    memset (y, 0, sizeof (y));
    cin.getline (y, 201);
    l2 = strlen (y);
    for (i = 0, piA8ya = l2 - 1; i < l2; i++, piA8ya = piA8ya - 1) {
        Bd6UnucoZfzY[piA8ya] = y[i] - '0';
    }
    {
        i = 0;
        for (; i < l2;) {
            a[i] = a[i] - Bd6UnucoZfzY[i];
            if (0 > a[i]) {
                a[i] = a[i] + 10;
                a[i + 1] = a[i + 1] - 1;
            }
            i++;
        }
    }
    for (i = 200; i >= 0; i = i - 1) {
        if (a[i] != 0)
            break;
    }
    for (i = i; i >= 0; i = i - 1) {
        cout << a[i];
    }
    cout << endl;
    return 0;
}

