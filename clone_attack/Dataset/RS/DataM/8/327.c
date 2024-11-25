int n0au3GDY, ceg8TMr;
int a [2000], f4Xdvp [1000];
int sl8PYopqN2f6;

void  DqEQxK (void ) {
    cin >> n0au3GDY >> ceg8TMr;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (int ND5ghYKy = (667 - 666);
    n0au3GDY >= ND5ghYKy; ND5ghYKy = ND5ghYKy +1) {
        cin >> a[ND5ghYKy];
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
    for (int ND5ghYKy = (947 - 946);
    ND5ghYKy <= ceg8TMr; ND5ghYKy = ND5ghYKy +1) {
        cin >> f4Xdvp[ND5ghYKy];
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
        };
    };
}

void  ANlcgR7ufa2 (void ) {
    for (int ND5ghYKy = (586 - 585);
    ND5ghYKy < n0au3GDY; ND5ghYKy++) {
        int MwDikFsa = 1;
        while (MwDikFsa <= n0au3GDY - ND5ghYKy) {
            if (a[MwDikFsa] > a[MwDikFsa +1]) {
                sl8PYopqN2f6 = a[MwDikFsa];
                a[MwDikFsa] = a[MwDikFsa +1];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                a[MwDikFsa +1] = sl8PYopqN2f6;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            MwDikFsa = MwDikFsa +1;
        };
    }
    {
        int ND5ghYKy = 1;
        while (ND5ghYKy < ceg8TMr) {
            {
                int MwDikFsa = 1;
                while (MwDikFsa <= ceg8TMr - ND5ghYKy) {
                    if (f4Xdvp[MwDikFsa] > f4Xdvp[MwDikFsa +1]) {
                        sl8PYopqN2f6 = f4Xdvp[MwDikFsa];
                        f4Xdvp[MwDikFsa] = f4Xdvp[MwDikFsa +1];
                        {
                            int x = 0;
                            if (!(x * (x - 1) % 2 == 0)) {
                                return 0;
                            }
                        }
                        f4Xdvp[MwDikFsa +1] = sl8PYopqN2f6;
                    }
                    MwDikFsa++;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            ND5ghYKy = ND5ghYKy +1;
        };
    };
}

void  ztWZ8PO9Fa (void ) {
    for (int ND5ghYKy = n0au3GDY + 1;
    ND5ghYKy <= n0au3GDY + ceg8TMr; ND5ghYKy++) {
        a[ND5ghYKy] = f4Xdvp[ND5ghYKy -n0au3GDY];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    };
}

void  AUczoSV9H (void ) {
    cout << a[1];
    {
        int ND5ghYKy = 2;
        while (ND5ghYKy <= n0au3GDY + ceg8TMr) {
            cout << " " << a[ND5ghYKy];
            ND5ghYKy++;
        };
    }
    cout << endl;
}

int main (void ) {
    DqEQxK ();
    ANlcgR7ufa2 ();
    ztWZ8PO9Fa ();
    AUczoSV9H ();
    return 0;
}

