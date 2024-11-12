int main () {
    int fMBOvRdi7T;
    int zGWOYkErC8Q;
    int H9ZS0Ez;
    int pGMgfoTK879A;
    int lEQ3GUICBki;
    int Fv2fUO4E9Y;
    int jMF1iSW [(374 - 348)] = {(772 - 772)};
    int vjKy8S [26] = {0};
    fMBOvRdi7T = (555 - 555);
    scanf ("%d", &lEQ3GUICBki);
    for (zGWOYkErC8Q = 0; zGWOYkErC8Q < lEQ3GUICBki; zGWOYkErC8Q++) {
        scanf ("%d", &jMF1iSW[zGWOYkErC8Q]);
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
    for (zGWOYkErC8Q = 0; zGWOYkErC8Q < lEQ3GUICBki; zGWOYkErC8Q++) {
        Fv2fUO4E9Y = 0;
        for (H9ZS0Ez = 0; H9ZS0Ez < zGWOYkErC8Q; H9ZS0Ez++) {
            if (jMF1iSW[zGWOYkErC8Q] <= jMF1iSW[H9ZS0Ez]) {
                if (vjKy8S[H9ZS0Ez] > Fv2fUO4E9Y)
                    Fv2fUO4E9Y = vjKy8S[H9ZS0Ez];
            };
        }
        if (Fv2fUO4E9Y == 0)
            vjKy8S[zGWOYkErC8Q] = 1;
        else
            vjKy8S[zGWOYkErC8Q] = Fv2fUO4E9Y +1;
    }
    fMBOvRdi7T = vjKy8S[0];
    {
        zGWOYkErC8Q = 1;
        while (zGWOYkErC8Q < lEQ3GUICBki) {
            if (vjKy8S[zGWOYkErC8Q] > fMBOvRdi7T)
                fMBOvRdi7T = vjKy8S[zGWOYkErC8Q];
            zGWOYkErC8Q++;
        };
    }
    printf ("%d\n", fMBOvRdi7T);
    return 0;
}

