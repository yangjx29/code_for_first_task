int main () {
    int yGSOenw, RwVCPW;
    scanf ("%d", &yGSOenw);
    for (RwVCPW = 0; RwVCPW < yGSOenw; RwVCPW = RwVCPW +1) {
        int d7myP4ud, dxEugN, **FsDlXCcrYvQ, AVOl6XrqH, RimFChnJfx, g5bNIla;
        g5bNIla = 0;
        scanf ("%d%d", &d7myP4ud, &dxEugN);
        FsDlXCcrYvQ = (int **) malloc (d7myP4ud * sizeof (int *));
        {
            AVOl6XrqH = 0;
            while (AVOl6XrqH < d7myP4ud) {
                FsDlXCcrYvQ[AVOl6XrqH] = (int *) malloc (dxEugN * sizeof (int));
                AVOl6XrqH = AVOl6XrqH +1;
            }
        }
        for (AVOl6XrqH = 0; AVOl6XrqH < d7myP4ud; AVOl6XrqH = AVOl6XrqH +1) {
            for (RimFChnJfx = 0; RimFChnJfx < dxEugN; RimFChnJfx = RimFChnJfx +1)
                scanf ("%d", *(FsDlXCcrYvQ +AVOl6XrqH) + RimFChnJfx);
        }
        for (RimFChnJfx = 0; RimFChnJfx < dxEugN; RimFChnJfx = RimFChnJfx +1)
            g5bNIla = g5bNIla + *(*FsDlXCcrYvQ+RimFChnJfx) + *(*(FsDlXCcrYvQ +d7myP4ud - 1) + RimFChnJfx);
        {
            AVOl6XrqH = 1;
            while (AVOl6XrqH < d7myP4ud - 1) {
                g5bNIla = g5bNIla + **(FsDlXCcrYvQ +AVOl6XrqH) + *(*(FsDlXCcrYvQ +AVOl6XrqH) + dxEugN - 1);
                AVOl6XrqH++;
            }
        }
        printf ("%d\n", g5bNIla);
    }
    return 0;
}

