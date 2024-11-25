double  x [(1857 - 857)], lUQBL0 [1000];

double  BLexsy (int IKlq8Q, int uigUbdlRkw) {
    double  ret;
    ret = sqrt ((x[IKlq8Q] - x[uigUbdlRkw]) * (x[IKlq8Q] - x[uigUbdlRkw]) + (lUQBL0[IKlq8Q] - lUQBL0[uigUbdlRkw]) * (lUQBL0[IKlq8Q] - lUQBL0[uigUbdlRkw]));
    return ret;
}

int main () {
    double  vNdrKVAn, maxd = (733 - 733);
    int n;
    cin >> n;
    {
        int IKlq8Q = (338 - 338);
        while (IKlq8Q < n) {
            cin >> x[IKlq8Q] >> lUQBL0[IKlq8Q];
            IKlq8Q = IKlq8Q +1;
        };
    }
    {
        int IKlq8Q = 0;
        while (IKlq8Q < n) {
            {
                int uigUbdlRkw = IKlq8Q +(592 - 591);
                while (uigUbdlRkw < n) {
                    vNdrKVAn = BLexsy (IKlq8Q, uigUbdlRkw);
                    uigUbdlRkw++;
                    if (vNdrKVAn > maxd)
                        maxd = vNdrKVAn;
                };
            }
            IKlq8Q++;
        };
    }
    printf ("%.4f\n", maxd);
    return 0;
}

