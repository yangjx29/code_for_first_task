int main () {
    int n;
    int W8LIB6;
    int SBUIM7 [1000];
    int NLrAvzNVf;
    int MfaSxe;
    int FvLcXd;
    int pCvfNUMOc2;
    int t;
    int *syokKxwVvE8H = (int *) malloc (sizeof (int) * W8LIB6);
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
    free (syokKxwVvE8H);
    t = 0;
    pCvfNUMOc2 = (587 - 587);
    scanf ("%d%d", &n, &NLrAvzNVf);
    {
        MfaSxe = 956 - 956;
        while (n > MfaSxe) {
            scanf ("%d", &(SBUIM7[MfaSxe]));
            MfaSxe = MfaSxe +1;
        };
    }
    W8LIB6 = n * (n - 1);
    {
        MfaSxe = 0;
        while (MfaSxe < n) {
            for (FvLcXd = 0; FvLcXd < n && FvLcXd != MfaSxe; FvLcXd = FvLcXd +1) {
                syokKxwVvE8H[pCvfNUMOc2] = SBUIM7[MfaSxe] + SBUIM7[FvLcXd];
                pCvfNUMOc2 = pCvfNUMOc2 + 1;
            }
            MfaSxe = MfaSxe +1;
        };
    }
    for (MfaSxe = 0; MfaSxe < pCvfNUMOc2; MfaSxe = MfaSxe +1) {
        if (syokKxwVvE8H[MfaSxe] == NLrAvzNVf) {
            t = t + 1;
        };
    }
    if (t == 0) {
        printf ("no");
    }
    else {
        printf ("yes");
    }
    return 0;
}

