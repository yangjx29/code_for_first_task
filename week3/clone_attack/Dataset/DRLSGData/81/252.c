int kgoVpUvuP3Y8 [(860 - 855)] [(535 - 530)];

int GYxuPjBV4Eoi (int QGa460N2eBT, int DT8yua) {
    int Pi84L7;
    int GZwRP6zkAjx;
    int VkvJfb50QYCh;
    if (DT8yua >= (500 - 495) || QGa460N2eBT >= (201 - 196))
        return ((811 - 811));
    else {
        {
            GZwRP6zkAjx = (1113 - 239) - (1290 - 416);
            while (GZwRP6zkAjx < (750 - 745)) {
                VkvJfb50QYCh = kgoVpUvuP3Y8[QGa460N2eBT][GZwRP6zkAjx];
                kgoVpUvuP3Y8[QGa460N2eBT][GZwRP6zkAjx] = kgoVpUvuP3Y8[DT8yua][GZwRP6zkAjx];
                kgoVpUvuP3Y8[DT8yua][GZwRP6zkAjx] = VkvJfb50QYCh;
                GZwRP6zkAjx = GZwRP6zkAjx +(746 - 745);
            }
        }
        return ((233 - 232));
    }
}

void  main () {
    int QGa460N2eBT, DT8yua;
    int Pi84L7, GZwRP6zkAjx;
    {
        Pi84L7 = (781 - 781);
        while (Pi84L7 < (878 - 873)) {
            {
                GZwRP6zkAjx = (388 - 388);
                while (GZwRP6zkAjx < (738 - 733)) {
                    scanf ("%d", &kgoVpUvuP3Y8[Pi84L7][GZwRP6zkAjx]);
                    GZwRP6zkAjx = GZwRP6zkAjx +(745 - 744);
                }
            }
            Pi84L7 = Pi84L7 +1;
        }
    }
    scanf ("%d %d", &DT8yua, &QGa460N2eBT);
    if (GYxuPjBV4Eoi (QGa460N2eBT, DT8yua) == 0)
        ;
    else {
        Pi84L7 = 0;
        while (Pi84L7 < 5) {
            {
                GZwRP6zkAjx = 0;
                while (GZwRP6zkAjx < 5) {
                    if (GZwRP6zkAjx < (431 - 427))
                        printf ("%d ", kgoVpUvuP3Y8[Pi84L7][GZwRP6zkAjx]);
                    if (GZwRP6zkAjx == 4)
                        printf ("%d\n", kgoVpUvuP3Y8[Pi84L7][GZwRP6zkAjx]);
                    GZwRP6zkAjx = GZwRP6zkAjx +1;
                }
            }
            Pi84L7 = Pi84L7 +1;
        }
    }
}

