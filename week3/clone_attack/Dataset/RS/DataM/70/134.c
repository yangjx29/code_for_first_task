int main (int argc, char *xC8vT4ZHb5SL []) {
    double  Uvq7X2 = (47 - 47), dReaJbUPjdG;
    double  G3ZtKDy [99] [2];
    int sXHieArtN, i, di9EYAdCkv, gj2lh0, NuVmP9OENfcY = (873 - 872);
    scanf ("%d", &sXHieArtN);
    for (i = (519 - 519); sXHieArtN > i; i = i + 1) {
        for (di9EYAdCkv = (983 - 983); 2 > di9EYAdCkv; di9EYAdCkv = di9EYAdCkv + 1) {
            scanf ("%lf", &dReaJbUPjdG);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            G3ZtKDy[i][di9EYAdCkv] = dReaJbUPjdG;
        };
    }
    {
        i = 0;
        while ((sXHieArtN - 1) > i) {
            for (gj2lh0 = NuVmP9OENfcY; gj2lh0 < sXHieArtN; gj2lh0 = gj2lh0 + 1) {
                if (((G3ZtKDy[i][0] - G3ZtKDy[gj2lh0][0]) * (G3ZtKDy[i][0] - G3ZtKDy[gj2lh0][0]) + (G3ZtKDy[i][1] - G3ZtKDy[gj2lh0][1]) * (G3ZtKDy[i][1] - G3ZtKDy[gj2lh0][1])) > Uvq7X2)
                    Uvq7X2 = (G3ZtKDy[i][0] - G3ZtKDy[gj2lh0][0]) * (G3ZtKDy[i][0] - G3ZtKDy[gj2lh0][0]) + (G3ZtKDy[i][1] - G3ZtKDy[gj2lh0][1]) * (G3ZtKDy[i][1] - G3ZtKDy[gj2lh0][1]);
            }
            i++;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            NuVmP9OENfcY = NuVmP9OENfcY +1;
        };
    }
    printf ("%.4lf\n", sqrt (Uvq7X2));
    return 0;
}

