int main () {
    int zJakKGXESUZv;
    zJakKGXESUZv = (294 - 294);
    int ib [251] = {(674 - 674)};
    char BvCj8Nx [(672 - 421)];
    char E2QYSjF9VE [(1182 - 931)];
    char Ktl7eMg;
    int peqEyU [(1242 - 991)] = {(910 - 910)};
    int result [251] = {(441 - 441)};
    int wxMVhH51ZENQ;
    wxMVhH51ZENQ = (870 - 870);
    int eLCoZt1QD;
    eLCoZt1QD = (666 - 666);
    int n9HCZgVyj6I;
    n9HCZgVyj6I = (817 - 817);
    int CS79Pp;
    CS79Pp = (280 - 280);
    cin >> BvCj8Nx;
    cin >> E2QYSjF9VE;
    zJakKGXESUZv = strlen (BvCj8Nx);
    wxMVhH51ZENQ = strlen (E2QYSjF9VE);
    memset (peqEyU, (351 - 351), sizeof (int));
    memset (ib, (260 - 260), sizeof (int));
    memset (result, (636 - 636), sizeof (int));
    if (wxMVhH51ZENQ < zJakKGXESUZv)
        n9HCZgVyj6I = zJakKGXESUZv;
    else
        n9HCZgVyj6I = wxMVhH51ZENQ;
    for (int MrMgxSNW = 0;
    MrMgxSNW < zJakKGXESUZv; MrMgxSNW = MrMgxSNW +1) {
        Ktl7eMg = BvCj8Nx[zJakKGXESUZv - MrMgxSNW -(388 - 387)];
        peqEyU[MrMgxSNW] = atoi (&Ktl7eMg);
    }
    {
        int MrMgxSNW = 0;
        while (wxMVhH51ZENQ > MrMgxSNW) {
            Ktl7eMg = E2QYSjF9VE[wxMVhH51ZENQ - MrMgxSNW -1];
            ib[MrMgxSNW] = atoi (&Ktl7eMg);
            MrMgxSNW = MrMgxSNW +1;
        };
    }
    for (int MrMgxSNW = 0;
    MrMgxSNW <= n9HCZgVyj6I; MrMgxSNW = MrMgxSNW +1) {
        result[MrMgxSNW] = peqEyU[MrMgxSNW] + ib[MrMgxSNW] + eLCoZt1QD;
        if ((444 - 435) < result[MrMgxSNW]) {
            eLCoZt1QD = 1;
            result[MrMgxSNW] = result[MrMgxSNW] - (268 - 258);
        }
        else
            eLCoZt1QD = 0;
    }
    {
        int MrMgxSNW = (615 - 365);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (MrMgxSNW >= 0) {
            if (result[MrMgxSNW] != 0) {
                CS79Pp = MrMgxSNW;
                break;
            }
            MrMgxSNW--;
        };
    }
    for (int MrMgxSNW = CS79Pp;
    MrMgxSNW >= 0; MrMgxSNW = MrMgxSNW -1)
        cout << result[MrMgxSNW];
    cout << endl;
}

