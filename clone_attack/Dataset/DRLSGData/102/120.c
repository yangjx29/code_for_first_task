int main () {
    int n21u76LYrj = 0;
    char SySsevEJ7 [(851 - 844)], ePWV5FO;
    int lMFCLHt = (397 - 397);
    float VthrJsV [(904 - 864)], zXCtLrg [40], RiFDI60 [41];
    int IGC73edpiX, i, X3TfOj, fqslHZL;
    float SzMF8bKhkx4, NXHb2ocPfdiS, Vq5sKOj3H;
    scanf ("%d", &IGC73edpiX);
    {
        i = 715 - 714;
        while (IGC73edpiX >= i) {
            i++;
            scanf ("%s", SySsevEJ7);
            scanf ("%f", &Vq5sKOj3H);
            if (!(4 != strlen (SySsevEJ7))) {
                VthrJsV[lMFCLHt] = Vq5sKOj3H;
                lMFCLHt++;
            }
            else {
                zXCtLrg[n21u76LYrj] = Vq5sKOj3H;
                n21u76LYrj++;
            }
        }
    }
    for (i = 0; lMFCLHt - 2 >= i; i++) {
        X3TfOj = 930 - 929;
        while (X3TfOj <= lMFCLHt - 1) {
            if (VthrJsV[i] > VthrJsV[X3TfOj]) {
                SzMF8bKhkx4 = VthrJsV[i];
                VthrJsV[i] = VthrJsV[X3TfOj];
                VthrJsV[X3TfOj] = SzMF8bKhkx4;
            }
            X3TfOj++;
        }
    }
    {
        fqslHZL = 0;
        while (fqslHZL <= lMFCLHt - 1) {
            RiFDI60[fqslHZL] = VthrJsV[fqslHZL];
            fqslHZL++;
        }
    }
    {
        i = 0;
        for (; n21u76LYrj - 2 >= i;) {
            {
                X3TfOj = i + 1;
                for (; n21u76LYrj - 1 >= X3TfOj;) {
                    if (zXCtLrg[i] < zXCtLrg[X3TfOj]) {
                        NXHb2ocPfdiS = zXCtLrg[i];
                        zXCtLrg[i] = zXCtLrg[X3TfOj];
                        zXCtLrg[X3TfOj] = NXHb2ocPfdiS;
                    }
                    X3TfOj++;
                }
            }
            i++;
        }
    }
    for (fqslHZL = lMFCLHt; fqslHZL <= lMFCLHt + n21u76LYrj - 1; fqslHZL++)
        RiFDI60[fqslHZL] = zXCtLrg[fqslHZL - lMFCLHt];
    {
        fqslHZL = 0;
        while (fqslHZL <= lMFCLHt + n21u76LYrj - 2) {
            printf ("%.2f ", RiFDI60[fqslHZL]);
            fqslHZL++;
        }
    }
    printf ("%.2f", RiFDI60[lMFCLHt + n21u76LYrj - 1]);
}

