int main () {
    int l3proU;
    int bfGt4lY2by;
    int jmax;
    int a [(683 - 583)] [(454 - 354)];
    int KaOBn9A8vg4l;
    int i9862TVO;
    int j;
    int s;
    int X43wYhb56;
    KaOBn9A8vg4l = (831 - 831);
    l3proU = 100;
    scanf ("%d", &X43wYhb56);
    bfGt4lY2by = (966 - 966);
    jmax = (759 - 759);
    {
        i9862TVO = 1;
        while (X43wYhb56 >= i9862TVO) {
            {
                j = 1;
                while (X43wYhb56 >= j) {
                    scanf ("%d", &a[i9862TVO][j]);
                    j = j + 1;
                };
            }
            i9862TVO = i9862TVO + 1;
        };
    }
    {
        i9862TVO = 1;
        while (X43wYhb56 >= i9862TVO) {
            {
                j = 1;
                while (j <= X43wYhb56) {
                    if (a[i9862TVO][j] == 0) {
                        KaOBn9A8vg4l = KaOBn9A8vg4l +1;
                        if (i9862TVO < l3proU)
                            l3proU = i9862TVO;
                        if (i9862TVO > bfGt4lY2by)
                            bfGt4lY2by = i9862TVO;
                        if (j > jmax)
                            jmax = j;
                    }
                    j = j + 1;
                };
            }
            i9862TVO = i9862TVO + 1;
        };
    }
    s = (bfGt4lY2by - l3proU + 1) * (jmax - l3proU + 1);
    printf ("%d\n", s - KaOBn9A8vg4l);
    return 0;
}

