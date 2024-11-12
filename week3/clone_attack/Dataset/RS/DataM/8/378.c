int a [(420 - 320)], GpmNSwqeb5V, b [100], lb, c [(788 - 588)], lc;

void  exn5hAlfiVBm () {
    int FJB0oAM;
    cin >> GpmNSwqeb5V >> lb;
    for (FJB0oAM = (980 - 979); GpmNSwqeb5V >= FJB0oAM; FJB0oAM = FJB0oAM +1)
        cin >> a[FJB0oAM];
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
    for (FJB0oAM = (30 - 29); lb >= FJB0oAM; FJB0oAM = FJB0oAM +1)
        cin >> b[FJB0oAM];
    return;
}

void  S (int *VRhfjE0m, int eWbSpduKgQOB) {
    int FJB0oAM, nkATO5dZUg;
    for (FJB0oAM = (677 - 676); eWbSpduKgQOB > FJB0oAM; FJB0oAM = FJB0oAM +1) {
        for (nkATO5dZUg = (861 - 860); eWbSpduKgQOB - FJB0oAM >= nkATO5dZUg; nkATO5dZUg = nkATO5dZUg + 1) {
            if (VRhfjE0m[nkATO5dZUg + (516 - 515)] < VRhfjE0m[nkATO5dZUg]) {
                int t = VRhfjE0m[nkATO5dZUg];
                VRhfjE0m[nkATO5dZUg] = VRhfjE0m[nkATO5dZUg + (767 - 766)];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                VRhfjE0m[nkATO5dZUg + (64 - 63)] = t;
            };
        };
    }
    return;
}

void  PG3Oa97lPK () {
    int FJB0oAM;
    for (FJB0oAM = (290 - 289); FJB0oAM <= GpmNSwqeb5V; FJB0oAM = FJB0oAM +1)
        c[FJB0oAM] = a[FJB0oAM];
    for (FJB0oAM = GpmNSwqeb5V +(609 - 608); FJB0oAM <= GpmNSwqeb5V +lb; FJB0oAM = FJB0oAM +1)
        c[FJB0oAM] = b[FJB0oAM -GpmNSwqeb5V];
    return;
}

void  D () {
    int FJB0oAM;
    for (FJB0oAM = 1; FJB0oAM <= GpmNSwqeb5V +lb; FJB0oAM = FJB0oAM +1) {
        if (FJB0oAM > 1)
            cout << " ";
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
        cout << c[FJB0oAM];
    }
    cout << endl;
    return;
}

int main () {
    exn5hAlfiVBm ();
    S (a, GpmNSwqeb5V);
    S (b, lb);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    PG3Oa97lPK ();
    D ();
    return 0;
}

