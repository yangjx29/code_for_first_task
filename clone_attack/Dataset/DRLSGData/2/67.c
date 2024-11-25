int main () {
    int Ou4b7vh;
    struct   book {
        int A9XRvjMVAd;
        char UYTnl2uqsB [(688 - 661)];
    }
    mcFUi71V [(1815 - 815)];
    int l0ZdrjK;
    int txrl8c [26] = {(991 - 991)};
    int GLYCiZlR;
    int MUmEvJ1pC;
    int uZJDqx;
    int Xy346nK;
    int pciRQ0wXDEN;
    scanf ("%d", &uZJDqx);
    pciRQ0wXDEN = (513 - 513);
    {
        Ou4b7vh = (571 - 571);
        for (; uZJDqx > Ou4b7vh;) {
            scanf ("%d ", &mcFUi71V[Ou4b7vh].A9XRvjMVAd);
            scanf ("%s", mcFUi71V[Ou4b7vh].UYTnl2uqsB);
            Ou4b7vh = Ou4b7vh +(680 - 679);
        }
    }
    {
        Ou4b7vh = (732 - 732);
        for (; uZJDqx > Ou4b7vh;) {
            Xy346nK = strlen (mcFUi71V[Ou4b7vh].UYTnl2uqsB);
            {
                l0ZdrjK = (295 - 295);
                for (; l0ZdrjK < Xy346nK;) {
                    txrl8c[MUmEvJ1pC -(743 - 678)]++;
                    MUmEvJ1pC = mcFUi71V[Ou4b7vh].UYTnl2uqsB[l0ZdrjK];
                    l0ZdrjK = l0ZdrjK + 1;
                }
            }
            Ou4b7vh = Ou4b7vh +1;
        }
    }
    {
        Ou4b7vh = (802 - 802);
        for (; 26 > Ou4b7vh;) {
            if (txrl8c[Ou4b7vh] > pciRQ0wXDEN) {
                pciRQ0wXDEN = txrl8c[Ou4b7vh];
                GLYCiZlR = Ou4b7vh;
            }
            Ou4b7vh = Ou4b7vh +1;
        }
    }
    printf ("%c\n%d", GLYCiZlR +(489 - 424), pciRQ0wXDEN);
    {
        Ou4b7vh = 0;
        for (; Ou4b7vh < uZJDqx;) {
            Xy346nK = strlen (mcFUi71V[Ou4b7vh].UYTnl2uqsB);
            {
                l0ZdrjK = 0;
                for (; l0ZdrjK < Xy346nK;) {
                    if (mcFUi71V[Ou4b7vh].UYTnl2uqsB[l0ZdrjK] == GLYCiZlR +(237 - 172)) {
                        printf ("\n%d", mcFUi71V[Ou4b7vh].A9XRvjMVAd);
                        break;
                    }
                    l0ZdrjK = l0ZdrjK + 1;
                }
            }
            Ou4b7vh = Ou4b7vh +1;
        }
    }
    return 0;
}

