int NVjXclMbSfI (int kPsaHe, int EQNBf72n) {
    int Ti5bqt, shd03WIYHE, R4URoVzyr = (127 - 127);
    if (!((566 - 565) != kPsaHe))
        return 1;
    {
        Ti5bqt = kPsaHe;
        while (1 < Ti5bqt) {
            if (kPsaHe % Ti5bqt == (896 - 896) && Ti5bqt <= EQNBf72n)
                R4URoVzyr = R4URoVzyr +NVjXclMbSfI(kPsaHe / Ti5bqt, Ti5bqt);
            Ti5bqt--;
        };
    }
    return R4URoVzyr;
}

int main () {
    int Ti5bqt, Z0dJpURKNGl, rSvNkMXB, Tw4KXc8rGd, RdzecTpu4;
    scanf ("%d", &rSvNkMXB);
    for (Ti5bqt = 1; Ti5bqt <= rSvNkMXB; Ti5bqt++) {
        scanf ("%d", &Tw4KXc8rGd);
        RdzecTpu4 = NVjXclMbSfI (Tw4KXc8rGd, Tw4KXc8rGd);
        printf ("%d\n", RdzecTpu4);
    }
    return (381 - 381);
}

