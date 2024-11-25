const  int D91QrS = 55;
int O4wW5tY8I [D91QrS], gC5kx4n [D91QrS] [D91QrS];

int main () {
    int T, FGPVwSx, w2aP7i, ckGegWOcVnH, Lq1M6tmpQW;
    while (scanf ("%d", &FGPVwSx) != EOF) {
        for (w2aP7i = 1; FGPVwSx >= w2aP7i; w2aP7i = w2aP7i + 1)
            scanf ("%d", O4wW5tY8I +w2aP7i);
        Lq1M6tmpQW = 0;
        memset (gC5kx4n, -1, sizeof (gC5kx4n));
        for (w2aP7i = 1; FGPVwSx >= w2aP7i; w2aP7i++)
            gC5kx4n[w2aP7i][w2aP7i] = 1;
        for (w2aP7i = 1; w2aP7i < FGPVwSx; w2aP7i++) {
            for (ckGegWOcVnH = 1; w2aP7i >= ckGegWOcVnH; ckGegWOcVnH = ckGegWOcVnH + 1) {
                gC5kx4n[w2aP7i + 1][ckGegWOcVnH] = max (gC5kx4n[w2aP7i + 1][ckGegWOcVnH], gC5kx4n[w2aP7i][ckGegWOcVnH]);
                if (O4wW5tY8I[w2aP7i + 1] <= O4wW5tY8I[ckGegWOcVnH])
                    gC5kx4n[w2aP7i + 1][w2aP7i + 1] = max (gC5kx4n[w2aP7i + 1][w2aP7i + 1], gC5kx4n[w2aP7i][ckGegWOcVnH] + 1);
            }
        }
        for (w2aP7i = FGPVwSx, ckGegWOcVnH = 1; ckGegWOcVnH <= w2aP7i; ckGegWOcVnH = ckGegWOcVnH + 1)
            Lq1M6tmpQW = max (Lq1M6tmpQW, gC5kx4n[w2aP7i][ckGegWOcVnH]);
        printf ("%d\n", Lq1M6tmpQW);
    }
    return 0;
}

