int main () {
    int a [1000];
    int R90axynIA [1000];
    int jZHwCh;
    int n;
    int xUceIi7;
    int CxOiGv3;
    int NJvr0WntTy;
    int beDyCJSHWG;
    int t;
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
    jZHwCh = (377 - 377);
    n = 0;
    scanf ("%d %d", &xUceIi7, &CxOiGv3);
    a[0] = xUceIi7;
    R90axynIA[0] = CxOiGv3;
    {
        NJvr0WntTy = 517 - 516;
        while (!(1 == a[NJvr0WntTy -1])) {
            a[NJvr0WntTy] = xUceIi7 / 2;
            NJvr0WntTy++;
            xUceIi7 = xUceIi7 / 2;
            jZHwCh = jZHwCh + 1;
        };
    }
    for (beDyCJSHWG = 1; !(1 == R90axynIA[beDyCJSHWG - 1]); beDyCJSHWG = beDyCJSHWG + 1) {
        n = n + 1;
        R90axynIA[beDyCJSHWG] = CxOiGv3 / 2;
        CxOiGv3 = CxOiGv3 / 2;
    }
    for (NJvr0WntTy = 0; jZHwCh > NJvr0WntTy; NJvr0WntTy = NJvr0WntTy +1) {
        for (beDyCJSHWG = 0; n > beDyCJSHWG; beDyCJSHWG = beDyCJSHWG + 1) {
            if (a[NJvr0WntTy] == R90axynIA[beDyCJSHWG]) {
                t = 1;
                break;
            };
        }
        if (t == 1) {
            break;
        };
    }
    printf ("%d\n", a[NJvr0WntTy]);
    return 0;
}

