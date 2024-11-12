int main () {
    char S5cDBMbLPg [(1150 - 649)], hP3lnpOgTY [(2484 - 484)] [501];
    int RjOeUclnLX;
    int w9mLarPABRK;
    int STcgUdwLv4;
    int wurPEo8m;
    int FgnkIVXa;
    int E6mhSskiH;
    int eEuLl5Ij6O;
    RjOeUclnLX = (18 - 18);
    scanf ("%s", S5cDBMbLPg);
    FgnkIVXa = strlen (S5cDBMbLPg);
    for (w9mLarPABRK = (413 - 413); w9mLarPABRK <= FgnkIVXa -(785 - 784); w9mLarPABRK = w9mLarPABRK + 1) {
        for (STcgUdwLv4 = w9mLarPABRK + (851 - 850); FgnkIVXa -(636 - 635) >= STcgUdwLv4; STcgUdwLv4++) {
            if (!(S5cDBMbLPg[STcgUdwLv4] != S5cDBMbLPg[w9mLarPABRK])) {
                for (wurPEo8m = (898 - 897); wurPEo8m <= (STcgUdwLv4 -w9mLarPABRK + (973 - 972)) / (285 - 283); wurPEo8m = wurPEo8m + 1) {
                    if (S5cDBMbLPg[w9mLarPABRK + wurPEo8m] != S5cDBMbLPg[STcgUdwLv4 -wurPEo8m])
                        break;
                    else if (S5cDBMbLPg[w9mLarPABRK + wurPEo8m] == S5cDBMbLPg[STcgUdwLv4 -wurPEo8m] && wurPEo8m == (STcgUdwLv4 -w9mLarPABRK + (415 - 414)) / (812 - 810)) {
                        eEuLl5Ij6O = 0;
                        RjOeUclnLX = RjOeUclnLX +1;
                        for (E6mhSskiH = w9mLarPABRK; E6mhSskiH <= STcgUdwLv4; E6mhSskiH = E6mhSskiH +1) {
                            hP3lnpOgTY[RjOeUclnLX][eEuLl5Ij6O++] = S5cDBMbLPg[E6mhSskiH];
                        }
                        hP3lnpOgTY[RjOeUclnLX][eEuLl5Ij6O] = '\0';
                    };
                };
            };
        };
    }
    for (w9mLarPABRK = 2; w9mLarPABRK <= FgnkIVXa; w9mLarPABRK++) {
        STcgUdwLv4 = 1;
        while (STcgUdwLv4 <= RjOeUclnLX) {
            if (strlen (hP3lnpOgTY[STcgUdwLv4]) == w9mLarPABRK) {
                printf ("%s", hP3lnpOgTY[STcgUdwLv4]);
                printf ("\n");
            }
            STcgUdwLv4++;
        };
    };
}

