main () {
    int cmAUXQZeo;
    int v0vxlMb;
    int eGS2oKU4B;
    int PBMhUsx;
    int UK2651mlY;
    struct   h {
        int ntWECd;
        int yzCcS5H;
        int rAFT2U6JQOvV;
        struct   h *o98ASCjP;
    };
    struct   h *Hwr4toh8EL, *el5v6RS34I, *a0SONQ8V;
    int zkTN1X, KcZlpfIh;
    int NXpqkaNT0o;
    int KkOqL4vY;
    KkOqL4vY = 0;
    NXpqkaNT0o = 0;
    v0vxlMb = (68 - 68);
    eGS2oKU4B = (616 - 616);
    PBMhUsx = (500 - 500);
    UK2651mlY = (456 - 456);
    Hwr4toh8EL = len;
    a0SONQ8V = Hwr4toh8EL;
    scanf ("%d", &zkTN1X);
    {
        KcZlpfIh = (933 - 109) - 824;
        while (KcZlpfIh < zkTN1X) {
            KcZlpfIh++;
            el5v6RS34I = len;
            scanf ("%d %d %d", &Hwr4toh8EL->ntWECd, &Hwr4toh8EL->yzCcS5H, &Hwr4toh8EL->rAFT2U6JQOvV);
            Hwr4toh8EL->o98ASCjP = el5v6RS34I;
            Hwr4toh8EL = el5v6RS34I;
        }
    }
    Hwr4toh8EL = a0SONQ8V;
    {
        KcZlpfIh = 0;
        while (KcZlpfIh < zkTN1X) {
            KcZlpfIh++;
            cmAUXQZeo = (Hwr4toh8EL->yzCcS5H + Hwr4toh8EL->rAFT2U6JQOvV);
            if (cmAUXQZeo > UK2651mlY) {
                eGS2oKU4B = PBMhUsx;
                PBMhUsx = UK2651mlY;
                UK2651mlY = cmAUXQZeo;
                KkOqL4vY = NXpqkaNT0o;
                NXpqkaNT0o = v0vxlMb;
                v0vxlMb = Hwr4toh8EL->ntWECd;
            }
            else if (cmAUXQZeo > PBMhUsx) {
                eGS2oKU4B = PBMhUsx;
                PBMhUsx = cmAUXQZeo;
                KkOqL4vY = NXpqkaNT0o;
                NXpqkaNT0o = Hwr4toh8EL->ntWECd;
            }
            else if (cmAUXQZeo > eGS2oKU4B) {
                eGS2oKU4B = cmAUXQZeo;
                KkOqL4vY = Hwr4toh8EL->ntWECd;
            }
            Hwr4toh8EL = Hwr4toh8EL->o98ASCjP;
        }
    }
    el5v6RS34I = NULL;
    printf ("%d %d\n", v0vxlMb, UK2651mlY);
    printf ("%d %d\n", NXpqkaNT0o, PBMhUsx);
    printf ("%d %d\n", KkOqL4vY, eGS2oKU4B);
}

