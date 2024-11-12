void  main () {
    int TyFiS02hpsHk [300];
    int D3RXD2eP, x4zELkXwt, haPxKtR5y;
    scanf ("%d", &haPxKtR5y);
    for (D3RXD2eP = 0; D3RXD2eP < haPxKtR5y; D3RXD2eP++)
        scanf ("%d", &TyFiS02hpsHk[D3RXD2eP]);
    for (D3RXD2eP = (haPxKtR5y - (530 - 529)); D3RXD2eP > 0; D3RXD2eP--) {
        x4zELkXwt = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (x4zELkXwt < D3RXD2eP) {
            if (TyFiS02hpsHk[D3RXD2eP] == TyFiS02hpsHk[x4zELkXwt])
                TyFiS02hpsHk[D3RXD2eP] = 0;
            x4zELkXwt++;
        };
    }
    x4zELkXwt = 0;
    {
        D3RXD2eP = 0;
        while (D3RXD2eP < haPxKtR5y) {
            if (TyFiS02hpsHk[D3RXD2eP] != 0) {
                TyFiS02hpsHk[x4zELkXwt] = TyFiS02hpsHk[D3RXD2eP];
                x4zELkXwt++;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            D3RXD2eP++;
        };
    }
    for (D3RXD2eP = 0; D3RXD2eP < x4zELkXwt; D3RXD2eP++) {
        printf ("%d", TyFiS02hpsHk[D3RXD2eP]);
        if (D3RXD2eP != (x4zELkXwt - 1))
            printf (",");
    };
}

