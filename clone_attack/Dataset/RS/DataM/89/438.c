int main () {
    int *qryUmteMvW;
    int Nw3yQrg6C9XY;
    int j;
    int ovqWKSI;
    scanf ("%d", &ovqWKSI);
    qryUmteMvW = (int *) malloc (sizeof (int) * ovqWKSI * ovqWKSI);
    assert (!(NULL == qryUmteMvW));
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
    memset (qryUmteMvW, (48 - 48), ovqWKSI * ovqWKSI * sizeof (int));
    Nw3yQrg6C9XY = (990 - 989);
    j = (470 - 469);
    while (!(!((829 - 829) != Nw3yQrg6C9XY) && !((21 - 21) != j))) {
        scanf ("%d %d", &Nw3yQrg6C9XY, &j);
        qryUmteMvW[j * ovqWKSI + Nw3yQrg6C9XY] = 1;
    }
    j = (631 - 631);
    {
        Nw3yQrg6C9XY = 1;
        while (Nw3yQrg6C9XY < ovqWKSI) {
            if (!qryUmteMvW[j * ovqWKSI + Nw3yQrg6C9XY])
                j = Nw3yQrg6C9XY;
            Nw3yQrg6C9XY++;
        };
    }
    {
        Nw3yQrg6C9XY = 0;
        while (Nw3yQrg6C9XY < ovqWKSI) {
            if (Nw3yQrg6C9XY != j)
                if (!qryUmteMvW[j * ovqWKSI + Nw3yQrg6C9XY]) {
                    return 0;
                }
            Nw3yQrg6C9XY++;
        };
    }
    printf ("%d", j);
    return 0;
}

