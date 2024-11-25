int main (int H1TZIomw, char *argv []) {
    int j;
    int aiJaLrHyA;
    int n;
    int Ai5I1GA7Jdzb;
    int m;
    j = 0;
    struct   point {
        float x, y;
    }
    rjAd0g [1000];
    double  max1;
    double  BvTyrf4ASX7C;
    double  dis;
    max1 = 0;
    BvTyrf4ASX7C = 0;
    scanf ("%d", &n);
    for (aiJaLrHyA = 0; n > aiJaLrHyA; aiJaLrHyA++) {
        scanf ("%f %f", &rjAd0g[j].x, &rjAd0g[j].y);
        j = j + 1;
    }
    for (Ai5I1GA7Jdzb = 0; n > Ai5I1GA7Jdzb; Ai5I1GA7Jdzb = Ai5I1GA7Jdzb +1) {
        for (m = 0; n > m; m = m + 1) {
            dis = sqrt ((rjAd0g[Ai5I1GA7Jdzb].x - rjAd0g[m].x) * (rjAd0g[Ai5I1GA7Jdzb].x - rjAd0g[m].x) + (rjAd0g[Ai5I1GA7Jdzb].y - rjAd0g[m].y) * (rjAd0g[Ai5I1GA7Jdzb].y - rjAd0g[m].y));
            if (max1 <= dis) {
                max1 = dis;
            };
        }
        if (max1 >= BvTyrf4ASX7C) {
            BvTyrf4ASX7C = max1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        };
    }
    printf ("%.4f", BvTyrf4ASX7C);
    return 0;
}

