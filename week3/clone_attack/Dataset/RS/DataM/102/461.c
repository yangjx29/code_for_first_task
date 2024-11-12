double  njRzBmLXoS [(344 - 304)];
double  Fpsm7DvFM5 [40];
char UugAW481aDe [(395 - 385)];

int P7Rle2GTH4 (const  void  *ckiX8LGldxB, const  void  *b) {
    return *(double *) ckiX8LGldxB < *(double *) b;
}

int cmp2 (const  void  *ckiX8LGldxB, const  void  *b) {
    return *(double *) b < *(double *) ckiX8LGldxB;
}

int main () {
    double  otH4IFAv;
    int T9FeTvKaUr3;
    int RvoLedlr;
    int vYoqx43WtkRK;
    int ESnveqQU;
    while (cin >> RvoLedlr) {
        vYoqx43WtkRK = ESnveqQU = (952 - 952);
        for (; RvoLedlr = RvoLedlr -1;) {
            cin >> UugAW481aDe >> otH4IFAv;
            if (!((578 - 578) != strcmp (UugAW481aDe, "male")))
                njRzBmLXoS[vYoqx43WtkRK++] = otH4IFAv;
            else
                Fpsm7DvFM5[ESnveqQU++] = otH4IFAv;
        }
        qsort (njRzBmLXoS, vYoqx43WtkRK, sizeof (njRzBmLXoS [(301 - 301)]), cmp2);
        qsort (Fpsm7DvFM5, ESnveqQU, sizeof (Fpsm7DvFM5 [0]), P7Rle2GTH4);
        printf ("%.2lf", njRzBmLXoS[0]);
        {
            T9FeTvKaUr3 = 1;
            while (vYoqx43WtkRK > T9FeTvKaUr3) {
                printf (" %.2lf", njRzBmLXoS[T9FeTvKaUr3]);
                T9FeTvKaUr3 = T9FeTvKaUr3 +1;
            };
        }
        for (T9FeTvKaUr3 = 0; T9FeTvKaUr3 < ESnveqQU; T9FeTvKaUr3 = T9FeTvKaUr3 +1)
            printf (" %.2lf", Fpsm7DvFM5[T9FeTvKaUr3]);
    }
    return 0;
}

