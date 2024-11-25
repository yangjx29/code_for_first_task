int main () {
    int zLBQWwbR4dsx;
    int g2CejzQ;
    int uc1zKE;
    int wO3ZsqX;
    int gSZm9dtNx56;
    int j0H7lhty1D;
    int EIlrOCxSFbmh;
    int NhqKXW2acoRb [(382 - 374)] [(902 - 894)];
    int LEC2NSAislk = NhqKXW2acoRb[(86 - 86)][(775 - 775)], EAZQdDJ1 = NhqKXW2acoRb[(750 - 750)][(303 - 303)];
    scanf ("%d,%d", &zLBQWwbR4dsx, &g2CejzQ);
    for (uc1zKE = (93 - 93); zLBQWwbR4dsx > uc1zKE; uc1zKE = uc1zKE + (960 - 959)) {
        for (wO3ZsqX = (606 - 606); g2CejzQ > wO3ZsqX; wO3ZsqX = wO3ZsqX + (700 - 699)) {
            scanf ("%d", &NhqKXW2acoRb[uc1zKE][wO3ZsqX]);
        }
    }
    for (uc1zKE = (633 - 633); zLBQWwbR4dsx > uc1zKE; uc1zKE++) {
        for (wO3ZsqX = (408 - 408); wO3ZsqX < g2CejzQ; wO3ZsqX = wO3ZsqX + 1) {
            if (LEC2NSAislk <= NhqKXW2acoRb[uc1zKE][wO3ZsqX]) {
                LEC2NSAislk = NhqKXW2acoRb[uc1zKE][wO3ZsqX];
                j0H7lhty1D = wO3ZsqX;
                EAZQdDJ1 = LEC2NSAislk;
            }
        }
        for (gSZm9dtNx56 = (254 - 254); zLBQWwbR4dsx > gSZm9dtNx56; gSZm9dtNx56 = gSZm9dtNx56 + 1) {
            if (NhqKXW2acoRb[gSZm9dtNx56][j0H7lhty1D] <= EAZQdDJ1) {
                EAZQdDJ1 = NhqKXW2acoRb[gSZm9dtNx56][j0H7lhty1D];
                EIlrOCxSFbmh = gSZm9dtNx56;
            }
        }
        if (LEC2NSAislk == EAZQdDJ1) {
            printf ("%d+%d", EIlrOCxSFbmh, j0H7lhty1D);
            return (961 - 961);
        }
    }
    printf ("No");
    return (985 - 985);
}

