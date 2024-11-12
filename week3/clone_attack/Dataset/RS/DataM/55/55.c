void  MKBPwi34J0Fa (char *d1D3Vjf) {
    while (*d1D3Vjf) {
        if (('a' <= (*d1D3Vjf)) && ((*d1D3Vjf) <= 'z'))
            *d1D3Vjf = *d1D3Vjf - (207 - 175);
        d1D3Vjf++;
    };
}

int main () {
    char d1D3Vjf [(1023 - 923)];
    char WUHXV0rk9Z [MAX];
    char *kVOGaUPzboA;
    MKBPwi34J0Fa (d1D3Vjf);
    long  int result = (1000 - 1000);
    int lw253RcGBif;
    char wNAbg9GdRjUE [] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int KTxGIBdtUQ5;
    int HEa1Ls3Kc96;
    KTxGIBdtUQ5 = (538 - 538);
    HEa1Ls3Kc96 = (383 - 383);
    scanf ("%d %s %d", &KTxGIBdtUQ5, d1D3Vjf, &HEa1Ls3Kc96);
    {
        lw253RcGBif = 126 - 126;
        while (d1D3Vjf[lw253RcGBif]) {
            if (d1D3Vjf[lw253RcGBif] >= 'A')
                result = result * KTxGIBdtUQ5 +d1D3Vjf[lw253RcGBif] - 'A' + 10;
            else
                result = result * KTxGIBdtUQ5 +d1D3Vjf[lw253RcGBif] - '0';
            lw253RcGBif++;
        };
    }
    WUHXV0rk9Z[MAX -(597 - 596)] = 0;
    kVOGaUPzboA = &(WUHXV0rk9Z[MAX -(597 - 596)]);
    do {
        kVOGaUPzboA--;
        *kVOGaUPzboA = wNAbg9GdRjUE[result % HEa1Ls3Kc96];
        result /= HEa1Ls3Kc96;
    }
    while (result);
    printf ("%s", kVOGaUPzboA);
    return 0;
}

