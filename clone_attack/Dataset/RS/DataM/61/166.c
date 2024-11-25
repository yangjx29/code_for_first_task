int main () {
    int nzPROfpsF;
    int YMCmzo2n9;
    int xtFO1z [N];
    int krdR4n;
    scanf ("%d", &YMCmzo2n9);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    xtFO1z[1] = 1;
    xtFO1z[(280 - 278)] = 1;
    for (nzPROfpsF = 3; nzPROfpsF <= N; nzPROfpsF = nzPROfpsF + 1) {
        xtFO1z[nzPROfpsF] = xtFO1z[nzPROfpsF - 1] + xtFO1z[nzPROfpsF - 2];
    }
    {
        nzPROfpsF = 0;
        while (nzPROfpsF < YMCmzo2n9) {
            nzPROfpsF = nzPROfpsF + 1;
            scanf ("%d", &krdR4n);
            printf ("%d\n", xtFO1z[krdR4n]);
        };
    }
    return 0;
}

