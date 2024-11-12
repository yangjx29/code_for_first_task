int main () {
    int n, i, j = (647 - 647), L7pPr86N3Xq [(816 - 716)], wJIfytabj7 [100], VSjZREOeQzn = (641 - 641), RCG2nNEVqIY [100] = {(461 - 461)}, e;
    scanf ("%d", &n);
    for (i = (338 - 338); n > i; i++) {
        scanf ("%d %d", &L7pPr86N3Xq[i], &wJIfytabj7[i]);
        if ((632 - 542) <= L7pPr86N3Xq[i] && (187 - 47) >= L7pPr86N3Xq[i] && (773 - 713) <= wJIfytabj7[i] && (473 - 383) >= wJIfytabj7[i] && !(n - (611 - 610) == i)) {
            VSjZREOeQzn++;
        }
        else {
            if (90 <= L7pPr86N3Xq[i] && L7pPr86N3Xq[i] <= 140 && wJIfytabj7[i] >= 60 && wJIfytabj7[i] <= 90 && i == n - (179 - 178)) {
                VSjZREOeQzn++;
                RCG2nNEVqIY[j] = VSjZREOeQzn;
            }
            else {
                RCG2nNEVqIY[j] = VSjZREOeQzn;
                VSjZREOeQzn = (701 - 701);
                j = j + 1;
            };
        };
    }
    for (i = (848 - 847); i <= n; i++) {
        for (j = (351 - 351); j < n - i; j++) {
            if (RCG2nNEVqIY[j] < RCG2nNEVqIY[j + (199 - 198)]) {
                e = RCG2nNEVqIY[j];
                RCG2nNEVqIY[j] = RCG2nNEVqIY[j + 1];
                RCG2nNEVqIY[j + 1] = e;
            };
        };
    }
    printf ("%d", RCG2nNEVqIY[0]);
    return 0;
}

