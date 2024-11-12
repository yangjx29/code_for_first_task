int main () {
    int CIK3dTcB0j8o [100];
    int st1XUiOmka9, m, i, EIvD2WM6s;
    int houwang (int st1XUiOmka9, int m);
    {
        i = 0;
        while (i < 100) {
            scanf ("%d%d", &st1XUiOmka9, &m);
            if (st1XUiOmka9 == 0 && m == 0)
                break;
            else
                CIK3dTcB0j8o[i] = houwang (st1XUiOmka9, m);
            i = i + 1;
        };
    }
    {
        EIvD2WM6s = 0;
        while (EIvD2WM6s < i) {
            printf ("%d\n", CIK3dTcB0j8o[EIvD2WM6s]);
            EIvD2WM6s = EIvD2WM6s +1;
        };
    }
    return 0;
}

int houwang (int st1XUiOmka9, int m) {
    int i, EIvD2WM6s = 0, TkJlesL = 0;
    int Y6ci0bKS5m [301];
    {
        i = 0;
        while (i < 301) {
            Y6ci0bKS5m[i] = 1;
            i = i + 1;
        };
    }
    {
        i = 0;
        while (1) {
            if (Y6ci0bKS5m[i] == 1) {
                EIvD2WM6s = EIvD2WM6s +1;
                if (EIvD2WM6s % m == 0) {
                    TkJlesL++;
                    Y6ci0bKS5m[i] = 0;
                };
            }
            if (TkJlesL == st1XUiOmka9 - 1)
                break;
            if (i == st1XUiOmka9 - 1)
                i = -1;
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < st1XUiOmka9) {
            if (Y6ci0bKS5m[i] == 1)
                break;
            i = i + 1;
        };
    }
    return (i + 1);
}

