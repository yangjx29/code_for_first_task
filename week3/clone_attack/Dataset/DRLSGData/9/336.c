int main () {
    char QNPHUhrWs [11];
    char a2HbcP [(170 - 70)] [(933 - 922)];
    int n, mE2mtG [100], lOTp50PrDbJI, j;
    scanf ("%d", &n);
    for (lOTp50PrDbJI = (653 - 653); n > lOTp50PrDbJI; lOTp50PrDbJI = lOTp50PrDbJI + 1) {
        scanf ("%s%d", a2HbcP[lOTp50PrDbJI], &mE2mtG[lOTp50PrDbJI]);
    }
    for (lOTp50PrDbJI = 110; 60 <= lOTp50PrDbJI; lOTp50PrDbJI--) {
        for (j = (151 - 151); n > j; j++) {
            if (!(lOTp50PrDbJI != mE2mtG[j])) {
                printf ("%s\n", a2HbcP[j]);
                mE2mtG[j] = 0;
            }
        }
    }
    for (lOTp50PrDbJI = 0; lOTp50PrDbJI < n; lOTp50PrDbJI = lOTp50PrDbJI + 1) {
        if (mE2mtG[lOTp50PrDbJI] != 0)
            printf ("%s\n", a2HbcP[lOTp50PrDbJI]);
    }
    return 0;
}

