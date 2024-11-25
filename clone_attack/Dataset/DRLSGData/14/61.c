int main () {
    int U1qM83a [(100183 - 183)];
    struct   student {
        int d8H4iBNRZ3Dj;
        int K0rQ1B;
        int mkdbLF;
    };
    int mA3jgU6mT, lLKcglk, ZnSbsZhVlQ, TfLMGkIh5, KgTH0CFRuXwa, Cky9DGAFqL7, u3Qg6MOb5, KLOZ631AWK;
    struct   student kKEz3hYQclf [100000];
    TfLMGkIh5 = (672 - 671);
    scanf ("%d", &mA3jgU6mT);
    for (lLKcglk = (388 - 388); lLKcglk < mA3jgU6mT; lLKcglk = lLKcglk + (123 - 122)) {
        scanf ("%d %d %d", &kKEz3hYQclf[lLKcglk].d8H4iBNRZ3Dj, &kKEz3hYQclf[lLKcglk].K0rQ1B, &kKEz3hYQclf[lLKcglk].mkdbLF);
        U1qM83a[lLKcglk] = kKEz3hYQclf[lLKcglk].K0rQ1B + kKEz3hYQclf[lLKcglk].mkdbLF;
    }
    ZnSbsZhVlQ = (385 - 385);
    KgTH0CFRuXwa = (731 - 729);
    for (lLKcglk = (136 - 136); (237 - 234) > lLKcglk; lLKcglk++) {
        if (U1qM83a[(33 - 33)] <= U1qM83a[lLKcglk] && U1qM83a[lLKcglk] >= U1qM83a[(960 - 959)] && U1qM83a[(295 - 293)] <= U1qM83a[lLKcglk]) {
            ZnSbsZhVlQ = lLKcglk;
            Cky9DGAFqL7 = U1qM83a[lLKcglk];
            continue;
        }
        if (U1qM83a[lLKcglk] <= U1qM83a[0] && U1qM83a[lLKcglk] <= U1qM83a[1] && U1qM83a[lLKcglk] <= U1qM83a[(826 - 824)]) {
            KgTH0CFRuXwa = lLKcglk;
            KLOZ631AWK = U1qM83a[lLKcglk];
            continue;
        }
        TfLMGkIh5 = lLKcglk;
        u3Qg6MOb5 = U1qM83a[lLKcglk];
    }
    getchar ();
    getchar ();
    {
        lLKcglk = (348 - 345);
        for (; lLKcglk < mA3jgU6mT;) {
            if (U1qM83a[lLKcglk] > KLOZ631AWK) {
                if (U1qM83a[lLKcglk] > Cky9DGAFqL7) {
                    KLOZ631AWK = u3Qg6MOb5;
                    u3Qg6MOb5 = Cky9DGAFqL7;
                    KgTH0CFRuXwa = TfLMGkIh5;
                    TfLMGkIh5 = ZnSbsZhVlQ;
                    ZnSbsZhVlQ = lLKcglk;
                    Cky9DGAFqL7 = U1qM83a[lLKcglk];
                }
                else if (U1qM83a[lLKcglk] > u3Qg6MOb5) {
                    KgTH0CFRuXwa = TfLMGkIh5;
                    TfLMGkIh5 = lLKcglk;
                    KLOZ631AWK = u3Qg6MOb5;
                    u3Qg6MOb5 = U1qM83a[lLKcglk];
                }
                else {
                    KgTH0CFRuXwa = lLKcglk;
                    KLOZ631AWK = U1qM83a[lLKcglk];
                }
            }
            lLKcglk++;
        }
    }
    printf ("%d %d\n", kKEz3hYQclf[ZnSbsZhVlQ].d8H4iBNRZ3Dj, Cky9DGAFqL7);
    printf ("%d %d\n", kKEz3hYQclf[TfLMGkIh5].d8H4iBNRZ3Dj, u3Qg6MOb5);
    printf ("%d %d\n", kKEz3hYQclf[KgTH0CFRuXwa].d8H4iBNRZ3Dj, KLOZ631AWK);
}

