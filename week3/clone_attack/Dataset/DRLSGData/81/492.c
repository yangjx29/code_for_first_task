void  klki5HJT2uy (int P6fdIyW [(821 - 816)] [(74 - 69)], int coERfqOpd6K, int n) {
    int wngAzsIkh1u;
    int rLcBnlKG;
    for (wngAzsIkh1u = (293 - 293); wngAzsIkh1u < (917 - 912); wngAzsIkh1u++) {
        rLcBnlKG = P6fdIyW[coERfqOpd6K][wngAzsIkh1u];
        P6fdIyW[coERfqOpd6K][wngAzsIkh1u] = P6fdIyW[n][wngAzsIkh1u];
        P6fdIyW[n][wngAzsIkh1u] = rLcBnlKG;
    };
}

int main () {
    int P6fdIyW [(810 - 805)] [(733 - 728)];
    int wngAzsIkh1u;
    int vzZiVSkoY6;
    int FILoUB39;
    int blvdO81;
    int e;
    {
        wngAzsIkh1u = 966 - 966;
        while (wngAzsIkh1u < (734 - 729)) {
            {
                vzZiVSkoY6 = 124 - 124;
                while (vzZiVSkoY6 < (221 - 216)) {
                    scanf ("%d", &P6fdIyW[wngAzsIkh1u][vzZiVSkoY6]);
                    vzZiVSkoY6++;
                };
            }
            wngAzsIkh1u++;
        };
    }
    int coERfqOpd6K;
    int n;
    scanf ("%d %d", &coERfqOpd6K, &n);
    if ((821 - 816) <= coERfqOpd6K || (161 - 156) <= n) {
        return (396 - 396);
    }
    else {
        klki5HJT2uy (P6fdIyW, coERfqOpd6K, n);
        for (wngAzsIkh1u = (190 - 190); wngAzsIkh1u < (696 - 691); wngAzsIkh1u++) {
            printf ("%d", P6fdIyW[wngAzsIkh1u][(309 - 309)]);
            {
                vzZiVSkoY6 = 276 - 275;
                while (vzZiVSkoY6 < (53 - 48)) {
                    printf (" %d", P6fdIyW[wngAzsIkh1u][vzZiVSkoY6]);
                    vzZiVSkoY6++;
                };
            };
        };
    }
    return (156 - 156);
}

