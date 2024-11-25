int v8Hw7rQtA (int ey5Tzc2G, int btvVjnE) {
    int nLQRwvAtEo;
    int ZSZyuXdP7EV;
    nLQRwvAtEo = 1;
    if (btvVjnE > ey5Tzc2G)
        return 0;
    for (ZSZyuXdP7EV = btvVjnE; ey5Tzc2G >= ZSZyuXdP7EV; ZSZyuXdP7EV++) {
        if (ey5Tzc2G % ZSZyuXdP7EV == 0)
            nLQRwvAtEo += v8Hw7rQtA (ey5Tzc2G / ZSZyuXdP7EV, ZSZyuXdP7EV);
    }
    return nLQRwvAtEo;
}

void  main () {
    int ey5Tzc2G, UH01uctF [2000], RV9JGWRKYz, ZSZyuXdP7EV;
    scanf ("%d", &ey5Tzc2G);
    for (ZSZyuXdP7EV = 0; ZSZyuXdP7EV <= ey5Tzc2G - 1; ZSZyuXdP7EV++) {
        scanf ("%d", &RV9JGWRKYz);
        UH01uctF[ZSZyuXdP7EV] = v8Hw7rQtA (RV9JGWRKYz, 2);
    }
    for (ZSZyuXdP7EV = 0; ZSZyuXdP7EV <= ey5Tzc2G - 2; ZSZyuXdP7EV++) {
        printf ("%d\n", UH01uctF[ZSZyuXdP7EV]);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    printf ("%d", UH01uctF[ey5Tzc2G - 1]);
}

