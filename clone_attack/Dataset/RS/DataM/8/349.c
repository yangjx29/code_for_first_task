int a [(954 - 654)], b [300], m, P9NoSqTy, BXkovPn, Xqi2NbZ1tygK, t, c [300];

void  f1 () {
    cin >> m >> P9NoSqTy;
    for (BXkovPn = 0; BXkovPn < m; BXkovPn = BXkovPn +1) {
        cin >> a[BXkovPn];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    {
        BXkovPn = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        while (BXkovPn < P9NoSqTy) {
            cin >> b[BXkovPn];
            BXkovPn = BXkovPn +1;
        };
    };
}

void  ZJi9vzGZ () {
    for (BXkovPn = 0; BXkovPn < m - 1; BXkovPn = BXkovPn +1) {
        Xqi2NbZ1tygK = BXkovPn +1;
        while (Xqi2NbZ1tygK <= m - 1) {
            if (a[BXkovPn] > a[Xqi2NbZ1tygK]) {
                t = a[BXkovPn];
                a[BXkovPn] = a[Xqi2NbZ1tygK];
                a[Xqi2NbZ1tygK] = t;
            }
            Xqi2NbZ1tygK = Xqi2NbZ1tygK +1;
        };
    }
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    for (BXkovPn = 0; BXkovPn < P9NoSqTy -1; BXkovPn = BXkovPn +1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (Xqi2NbZ1tygK = BXkovPn +1; Xqi2NbZ1tygK <= P9NoSqTy -1; Xqi2NbZ1tygK++) {
            if (b[BXkovPn] > b[Xqi2NbZ1tygK]) {
                t = b[BXkovPn];
                b[BXkovPn] = b[Xqi2NbZ1tygK];
                b[Xqi2NbZ1tygK] = t;
            };
        };
    };
}

void  f3 () {
    for (BXkovPn = 0; BXkovPn < m; BXkovPn++) {
        c[BXkovPn] = a[BXkovPn];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    }
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    {
        BXkovPn = m;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (BXkovPn < m + P9NoSqTy) {
            c[BXkovPn] = b[BXkovPn -m];
            BXkovPn = BXkovPn +1;
        };
    };
}

void  w1giY0J () {
    cout << c[0];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (BXkovPn = 1; BXkovPn < m + P9NoSqTy; BXkovPn++) {
        cout << ' ' << c[BXkovPn];
    };
}

int main () {
    f1 ();
    ZJi9vzGZ ();
    f3 ();
    w1giY0J ();
}

