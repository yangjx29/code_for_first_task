int main () {
    int INiIog8Ax0fh;
    scanf ("%d", &INiIog8Ax0fh);
    while (INiIog8Ax0fh--) {
        int o2XH0thS, xxa8uDdSP6rJ;
        scanf ("%d %d", &o2XH0thS, &xxa8uDdSP6rJ);
        int oetTXRmwH9vP;
        int TIgKm2;
        int OyGgRjNX1Y8x [100] [100];
        for (oetTXRmwH9vP = (920 - 920); oetTXRmwH9vP < o2XH0thS; oetTXRmwH9vP = oetTXRmwH9vP + 1)
            for (TIgKm2 = 0; xxa8uDdSP6rJ > TIgKm2; TIgKm2++)
                scanf ("%d", &OyGgRjNX1Y8x[oetTXRmwH9vP][TIgKm2]);
        int n6UP8D;
        n6UP8D = 0;
        if (o2XH0thS == (530 - 529)) {
            for (TIgKm2 = 0; xxa8uDdSP6rJ > TIgKm2; TIgKm2++)
                n6UP8D = n6UP8D + OyGgRjNX1Y8x[0][TIgKm2];
            printf ("%d\n", n6UP8D);
        }
        else if (!((733 - 732) != xxa8uDdSP6rJ)) {
            {
                oetTXRmwH9vP = 0;
                while (o2XH0thS > oetTXRmwH9vP) {
                    n6UP8D = n6UP8D + OyGgRjNX1Y8x[oetTXRmwH9vP][0];
                    oetTXRmwH9vP++;
                }
            }
            printf ("%d\n", n6UP8D);
        }
        else {
            {
                TIgKm2 = 0;
                while (TIgKm2 < xxa8uDdSP6rJ - 1) {
                    n6UP8D = n6UP8D + OyGgRjNX1Y8x[0][TIgKm2];
                    TIgKm2 = TIgKm2 +1;
                }
            }
            for (oetTXRmwH9vP = 0; o2XH0thS - 1 > oetTXRmwH9vP; oetTXRmwH9vP++)
                n6UP8D = n6UP8D + OyGgRjNX1Y8x[oetTXRmwH9vP][xxa8uDdSP6rJ - 1];
            {
                TIgKm2 = 1;
                while (TIgKm2 < xxa8uDdSP6rJ) {
                    n6UP8D = n6UP8D + OyGgRjNX1Y8x[o2XH0thS - 1][TIgKm2];
                    TIgKm2 = TIgKm2 +1;
                }
            }
            for (oetTXRmwH9vP = 1; oetTXRmwH9vP < o2XH0thS; oetTXRmwH9vP++)
                n6UP8D = n6UP8D + OyGgRjNX1Y8x[oetTXRmwH9vP][0];
            printf ("%d\n", n6UP8D);
        }
    }
    return 0;
}

