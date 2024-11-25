int main () {
    int bX21luTEH4k;
    int rg3SM1Qla;
    int d;
    int UIsMpWhf;
    int Z5yqawvZX;
    int VjtXRcvwgZ;
    int nIit5GM;
    int hjTvmREiD1;
    bX21luTEH4k = 0;
    rg3SM1Qla = 0;
    d = 0;
    scanf ("%d", &UIsMpWhf);
    for (VjtXRcvwgZ = 1; UIsMpWhf >= VjtXRcvwgZ; VjtXRcvwgZ = VjtXRcvwgZ +1) {
        {
            nIit5GM = 1;
            for (; UIsMpWhf >= nIit5GM;) {
                scanf ("%d", &Z5yqawvZX);
                if (Z5yqawvZX == 0) {
                    bX21luTEH4k = bX21luTEH4k + 1;
                    d = d + 1;
                }
                nIit5GM = nIit5GM + 1;
            }
        }
        if (d != 0) {
            rg3SM1Qla = rg3SM1Qla + 1;
            d = 0;
        }
    }
    hjTvmREiD1 = ((bX21luTEH4k - 2 * rg3SM1Qla) / 2) * (rg3SM1Qla - 2);
    printf ("%d\n", hjTvmREiD1);
    return 0;
}

