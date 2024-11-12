struct   book {
    int KhCNEjfo0V7l;
    char IKSPNYjfCF [26];
}
T3BF4lP952 [999];

int main () {
    int q;
    int n;
    int i;
    int j;
    int uWLrARp6NTel;
    q = (268 - 268);
    char k;
    int w [26] = {0};
    int max;
    int FmBdjYOJw = 0;
    printf ("%c\n", FmBdjYOJw +65);
    scanf ("%d", &n);
    for (i = 0; n > i; i = i + 1) {
        scanf ("%d %s", &T3BF4lP952[i].KhCNEjfo0V7l, T3BF4lP952[i].IKSPNYjfCF);
    }
    for (i = 0; n > i; i = i + 1) {
        uWLrARp6NTel = strlen (T3BF4lP952[i].IKSPNYjfCF);
        for (j = 0; uWLrARp6NTel > j; j = j + 1) {
            k = T3BF4lP952[i].IKSPNYjfCF[j];
            w[k - 65]++;
        };
    }
    max = w[0];
    {
        i = 0;
        while (26 > i) {
            if (w[i] > max) {
                max = w[i];
                FmBdjYOJw = i;
            }
            i = i + 1;
        };
    }
    printf ("%d\n", w[FmBdjYOJw]);
    for (i = 0; i < n; i++) {
        uWLrARp6NTel = strlen (T3BF4lP952[i].IKSPNYjfCF);
        {
            j = 0;
            while (j < uWLrARp6NTel) {
                if (T3BF4lP952[i].IKSPNYjfCF[j] == (FmBdjYOJw +65))
                    printf ("%d\n", T3BF4lP952[i].KhCNEjfo0V7l);
                j = j + 1;
            };
        };
    }
    return 0;
}

