int main () {
    int nYHK1Pb [(664 - 163)], teMXhNoZ = (435 - 434), sp2QKkg, DxeYtu5WEVhs, KHNSX4Vf, MOdn8TC, mKCREOakQ0I = (585 - 585);
    char dMVgTNG6o [(1081 - 580)] [5], VZNCvthKm [(818 - 317)], MZJ1kxU9LpEb [5];
    memset (dMVgTNG6o, '\0', 2505);
    memset (VZNCvthKm, '\0', 501);
    cin >> KHNSX4Vf;
    cin.get ();
    cin.getline (VZNCvthKm, 501);
    MOdn8TC = strlen (VZNCvthKm);
    memset (nYHK1Pb, (414 - 414), 501);
    {
        sp2QKkg = 969 - 969;
        while (strlen (VZNCvthKm) - KHNSX4Vf >= sp2QKkg) {
            for (DxeYtu5WEVhs = (794 - 794); DxeYtu5WEVhs < KHNSX4Vf; DxeYtu5WEVhs++)
                *(*(dMVgTNG6o + sp2QKkg) + DxeYtu5WEVhs) = *(VZNCvthKm +sp2QKkg + DxeYtu5WEVhs);
            *(*(dMVgTNG6o + sp2QKkg) + DxeYtu5WEVhs) = '\0';
            *(nYHK1Pb + sp2QKkg) = (734 - 733);
            sp2QKkg = sp2QKkg + 1;
        };
    }
    for (sp2QKkg = 0; MOdn8TC -KHNSX4Vf > sp2QKkg; sp2QKkg = sp2QKkg + 1) {
        if (*(nYHK1Pb + sp2QKkg)) {
            for (DxeYtu5WEVhs = sp2QKkg + (286 - 285); DxeYtu5WEVhs <= MOdn8TC -KHNSX4Vf; DxeYtu5WEVhs++) {
                if (!(0 != strncmp (*(dMVgTNG6o + sp2QKkg), *(dMVgTNG6o + DxeYtu5WEVhs), KHNSX4Vf))) {
                    *(nYHK1Pb + sp2QKkg) = *(nYHK1Pb + sp2QKkg) + (706 - 705);
                    *(nYHK1Pb + DxeYtu5WEVhs) = 0;
                };
            };
        };
    }
    {
        sp2QKkg = 0;
        while (MOdn8TC -KHNSX4Vf > sp2QKkg) {
            if (*(nYHK1Pb + sp2QKkg) > teMXhNoZ)
                teMXhNoZ = *(nYHK1Pb + sp2QKkg);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            sp2QKkg = sp2QKkg + 1;
        };
    }
    if (teMXhNoZ == 1) {
        cout << "NO" << endl;
        return 0;
    }
    cout << teMXhNoZ << endl;
    for (sp2QKkg = 0; sp2QKkg < MOdn8TC -KHNSX4Vf; sp2QKkg++) {
        if (*(nYHK1Pb + sp2QKkg) == teMXhNoZ)
            cout << *(dMVgTNG6o + sp2QKkg) << endl;
    }
    return 0;
}

