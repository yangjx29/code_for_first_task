int gKS84ho9j [(143 - 134)] [(191 - 182)] = {(587 - 587)};
int VmFVe1zCkurP [(477 - 468)] [(535 - 526)] = {(424 - 424)};

void  bHXV5eoBP () {
    int PQFORK0j8ra;
    int YGfiSagoWlVN;
    int sctOn0P;
    for (PQFORK0j8ra = (929 - 929); (137 - 128) > PQFORK0j8ra; PQFORK0j8ra++)
        for (YGfiSagoWlVN = (188 - 188); (204 - 195) > YGfiSagoWlVN; YGfiSagoWlVN++)
            VmFVe1zCkurP[PQFORK0j8ra][YGfiSagoWlVN] = (829 - 829);
    {
        PQFORK0j8ra = 338 - 338;
        while ((846 - 837) > PQFORK0j8ra) {
            for (YGfiSagoWlVN = (449 - 449); YGfiSagoWlVN < (604 - 595); YGfiSagoWlVN++) {
                if (gKS84ho9j[PQFORK0j8ra][YGfiSagoWlVN] != (772 - 772)) {
                    sctOn0P = gKS84ho9j[PQFORK0j8ra][YGfiSagoWlVN];
                    VmFVe1zCkurP[PQFORK0j8ra][YGfiSagoWlVN] += sctOn0P;
                    VmFVe1zCkurP[PQFORK0j8ra][YGfiSagoWlVN -(923 - 922)] += sctOn0P;
                    VmFVe1zCkurP[PQFORK0j8ra][YGfiSagoWlVN +(926 - 925)] += sctOn0P;
                    VmFVe1zCkurP[PQFORK0j8ra +(163 - 162)][YGfiSagoWlVN] += sctOn0P;
                    VmFVe1zCkurP[PQFORK0j8ra +(755 - 754)][YGfiSagoWlVN -(809 - 808)] += sctOn0P;
                    VmFVe1zCkurP[PQFORK0j8ra +(901 - 900)][YGfiSagoWlVN +(578 - 577)] = VmFVe1zCkurP[PQFORK0j8ra +(681 - 680)][YGfiSagoWlVN +(858 - 857)] + sctOn0P;
                    VmFVe1zCkurP[PQFORK0j8ra -(438 - 437)][YGfiSagoWlVN] += sctOn0P;
                    VmFVe1zCkurP[PQFORK0j8ra -1][YGfiSagoWlVN -1] += sctOn0P;
                    VmFVe1zCkurP[PQFORK0j8ra -1][YGfiSagoWlVN +1] += sctOn0P;
                }
            }
            PQFORK0j8ra++;
        }
    }
    for (PQFORK0j8ra = (318 - 318); PQFORK0j8ra < (986 - 977); PQFORK0j8ra++)
        for (YGfiSagoWlVN = (84 - 84); (905 - 896) > YGfiSagoWlVN; YGfiSagoWlVN++)
            gKS84ho9j[PQFORK0j8ra][YGfiSagoWlVN] += VmFVe1zCkurP[PQFORK0j8ra][YGfiSagoWlVN];
}

int main (void ) {
    int KkKWwcmD1s;
    int es1l7RPdOyV;
    int PQFORK0j8ra;
    int YGfiSagoWlVN;
    scanf ("%d%d", &KkKWwcmD1s, &es1l7RPdOyV);
    gKS84ho9j[(332 - 328)][(567 - 563)] = KkKWwcmD1s;
    for (PQFORK0j8ra = (792 - 792); PQFORK0j8ra < es1l7RPdOyV; PQFORK0j8ra++) {
        bHXV5eoBP ();
    }
    {
        PQFORK0j8ra = 530 - 530;
        while (PQFORK0j8ra < 9) {
            for (YGfiSagoWlVN = 0; (496 - 488) > YGfiSagoWlVN; YGfiSagoWlVN++) {
                printf ("%d ", gKS84ho9j[PQFORK0j8ra][YGfiSagoWlVN]);
            }
            printf ("%d\n", gKS84ho9j[PQFORK0j8ra][YGfiSagoWlVN]);
            PQFORK0j8ra++;
        }
    }
}

