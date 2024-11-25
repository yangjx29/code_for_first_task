int uqvjsXAd (char vIyFPXicGtR [], int rFiLVhQS) {
    if (!('y' != vIyFPXicGtR[rFiLVhQS - 1]) || !('r' != vIyFPXicGtR[rFiLVhQS - 1]))
        return rFiLVhQS - 2;
    else
        return rFiLVhQS - 3;
}

int main () {
    char vIyFPXicGtR [50] [15];
    int DULE1WyA4NtI [50];
    int hXwFdouL;
    int I8Psc6DdrMG;
    int mbjnKTrt5A;
    scanf ("%d", &I8Psc6DdrMG);
    for (hXwFdouL = 0; hXwFdouL < I8Psc6DdrMG; hXwFdouL = hXwFdouL + 1) {
        scanf ("%s", vIyFPXicGtR[hXwFdouL]);
        DULE1WyA4NtI[hXwFdouL] = uqvjsXAd (vIyFPXicGtR[hXwFdouL], strlen (vIyFPXicGtR[hXwFdouL]));
    }
    for (hXwFdouL = 0; hXwFdouL < I8Psc6DdrMG; hXwFdouL = hXwFdouL + 1) {
        mbjnKTrt5A = 0;
        for (; mbjnKTrt5A < DULE1WyA4NtI[hXwFdouL];) {
            printf ("%c", vIyFPXicGtR[hXwFdouL][mbjnKTrt5A]);
            mbjnKTrt5A = mbjnKTrt5A + 1;
        }
    }
    return 0;
}

