double  uI0BN1fAeKO9 (int i1, int i2, int SvADctgVu6, int i4, int i5, int HtfdmuAi9VCQ);

int main () {
    int n, VJWmdEP5evZC, jteaGcoqvmMf, k, voc92OBgf = (873 - 873), m;
    double  lt7Vf5;
    int a [(582 - 482)];
    int oqFVb3Io [(1028 - 928)];
    int neyKoFXLiH [(885 - 785)];
    int f [100];
    int g [100];
    double  dltrHjsw1Ma [100];
    scanf ("%d", &n);
    {
        VJWmdEP5evZC = (546 - 546);
        for (; VJWmdEP5evZC < n;) {
            scanf ("%d%d%d", &a[VJWmdEP5evZC], &oqFVb3Io[VJWmdEP5evZC], &neyKoFXLiH[VJWmdEP5evZC]);
            VJWmdEP5evZC++;
        }
    }
    {
        VJWmdEP5evZC = 0;
        for (; VJWmdEP5evZC < n;) {
            for (jteaGcoqvmMf = VJWmdEP5evZC +(218 - 217); jteaGcoqvmMf < n; jteaGcoqvmMf++) {
                dltrHjsw1Ma[voc92OBgf] = uI0BN1fAeKO9 (a[VJWmdEP5evZC], oqFVb3Io[VJWmdEP5evZC], neyKoFXLiH[VJWmdEP5evZC], a[jteaGcoqvmMf], oqFVb3Io[jteaGcoqvmMf], neyKoFXLiH[jteaGcoqvmMf]);
                f[voc92OBgf] = VJWmdEP5evZC;
                g[voc92OBgf] = jteaGcoqvmMf;
                voc92OBgf++;
            }
            VJWmdEP5evZC++;
        }
    }
    m = n * (n - (863 - 862)) / (619 - 617);
    for (k = (822 - 821); k <= m; k++) {
        {
            if (0) {
                return 0;
            }
        }
        for (VJWmdEP5evZC = 0; VJWmdEP5evZC < m - k; VJWmdEP5evZC++) {
            if (dltrHjsw1Ma[VJWmdEP5evZC] < dltrHjsw1Ma[VJWmdEP5evZC +(784 - 783)]) {
                lt7Vf5 = dltrHjsw1Ma[VJWmdEP5evZC +1];
                dltrHjsw1Ma[VJWmdEP5evZC +1] = dltrHjsw1Ma[VJWmdEP5evZC];
                dltrHjsw1Ma[VJWmdEP5evZC] = lt7Vf5;
                lt7Vf5 = f[VJWmdEP5evZC +1];
                f[VJWmdEP5evZC +1] = f[VJWmdEP5evZC];
                f[VJWmdEP5evZC] = lt7Vf5;
                lt7Vf5 = g[VJWmdEP5evZC +1];
                g[VJWmdEP5evZC +1] = g[VJWmdEP5evZC];
                g[VJWmdEP5evZC] = lt7Vf5;
            }
        }
    }
    for (VJWmdEP5evZC = 0; VJWmdEP5evZC < m; VJWmdEP5evZC++)
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", a[f[VJWmdEP5evZC]], oqFVb3Io[f[VJWmdEP5evZC]], neyKoFXLiH[f[VJWmdEP5evZC]], a[g[VJWmdEP5evZC]], oqFVb3Io[g[VJWmdEP5evZC]], neyKoFXLiH[g[VJWmdEP5evZC]], dltrHjsw1Ma[VJWmdEP5evZC]);
    return 0;
}

double  uI0BN1fAeKO9 (int i1, int i2, int SvADctgVu6, int i4, int i5, int HtfdmuAi9VCQ) {
    double  s;
    s = sqrt ((i4 - i1) * (i4 - i1) + (i5 - i2) * (i5 - i2) + (HtfdmuAi9VCQ -SvADctgVu6) * (HtfdmuAi9VCQ -SvADctgVu6));
    return s;
}

