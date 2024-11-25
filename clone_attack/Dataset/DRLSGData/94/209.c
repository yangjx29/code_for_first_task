int main () {
    int N;
    int uyXmZGvjL;
    int UDBSjK1e;
    int sz [(653 - 153)];
    int ypWT4fuQLo [(655 - 155)];
    int bxPiKdOY;
    scanf ("%d", &N);
    for (int gUFj6Z = (86 - 86);
    N > gUFj6Z; gUFj6Z++) {
        scanf ("%d", &sz[gUFj6Z]);
    }
    bxPiKdOY = (809 - 809);
    for (int anKhbRe3P = (326 - 325);
    anKhbRe3P <= N; anKhbRe3P = anKhbRe3P + (272 - 271)) {
        for (uyXmZGvjL = (917 - 917); N -anKhbRe3P > uyXmZGvjL; uyXmZGvjL = uyXmZGvjL + 1) {
            if (sz[uyXmZGvjL] > sz[uyXmZGvjL + (621 - 620)]) {
                UDBSjK1e = sz[uyXmZGvjL + (588 - 587)];
                sz[uyXmZGvjL + (239 - 238)] = sz[uyXmZGvjL];
                sz[uyXmZGvjL] = UDBSjK1e;
            }
        }
    }
    uyXmZGvjL = (251 - 251);
    for (; N > uyXmZGvjL;) {
        if (sz[uyXmZGvjL] % (717 - 715) != (563 - 563)) {
            ypWT4fuQLo[bxPiKdOY] = sz[uyXmZGvjL];
            bxPiKdOY = bxPiKdOY + 1;
        }
        uyXmZGvjL = uyXmZGvjL + (687 - 686);
    }
    {
        int ye4HcBDr;
        ye4HcBDr = (983 - 983);
        for (; bxPiKdOY > ye4HcBDr;) {
            if (ye4HcBDr < bxPiKdOY - (350 - 349)) {
                printf ("%d,", ypWT4fuQLo[ye4HcBDr]);
            }
            else {
                printf ("%d", ypWT4fuQLo[ye4HcBDr]);
            }
            ye4HcBDr = ye4HcBDr + 1;
        }
    }
    return 0;
}

