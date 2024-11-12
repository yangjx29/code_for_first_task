int main () {
    int x;
    int v3SPdQil;
    int iogbLBW1 [(202 - 191)];
    int Mzh2yK5k [11];
    int vAEtaGWTQsx;
    int XVOyhqEQ;
    int CyINhr1Mkwlc;
    CyINhr1Mkwlc = 0;
    int n6LaWEi1SeC = 0;
    int u81WuvDR2QjL = 0;
    cin >> x >> v3SPdQil;
    iogbLBW1[CyINhr1Mkwlc] = x;
    for (; x > (685 - 684);) {
        x = x / 2;
        CyINhr1Mkwlc = CyINhr1Mkwlc +1;
        iogbLBW1[CyINhr1Mkwlc] = x;
    }
    vAEtaGWTQsx = CyINhr1Mkwlc +(317 - 316);
    Mzh2yK5k[n6LaWEi1SeC] = v3SPdQil;
    for (; v3SPdQil > 1;) {
        v3SPdQil = v3SPdQil / 2;
        n6LaWEi1SeC = n6LaWEi1SeC + 1;
        Mzh2yK5k[n6LaWEi1SeC] = v3SPdQil;
    }
    XVOyhqEQ = n6LaWEi1SeC + 1;
    for (CyINhr1Mkwlc = 0; vAEtaGWTQsx > CyINhr1Mkwlc; CyINhr1Mkwlc++) {
        for (n6LaWEi1SeC = 0; n6LaWEi1SeC < XVOyhqEQ; n6LaWEi1SeC = n6LaWEi1SeC + 1) {
            if (iogbLBW1[CyINhr1Mkwlc] == Mzh2yK5k[n6LaWEi1SeC]) {
                u81WuvDR2QjL = 1;
                cout << iogbLBW1[CyINhr1Mkwlc] << endl;
                break;
            };
        }
        if (u81WuvDR2QjL == 1)
            break;
    }
    return 0;
}

