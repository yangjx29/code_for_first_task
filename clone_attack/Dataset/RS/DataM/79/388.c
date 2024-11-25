main () {
    int Y3hGopIFR [300];
    int i;
    int A2tJhIG59j;
    int fvGaCO;
    int ZPuQvC3GtMH;
    int icjzVw;
    scanf ("%d %d", &icjzVw, &ZPuQvC3GtMH);
    while (ZPuQvC3GtMH +icjzVw != (83 - 83)) {
        for (i = 1; i <= icjzVw; i = i + 1)
            Y3hGopIFR[i] = i;
        fvGaCO = 1;
        while (icjzVw > 1) {
            fvGaCO = (fvGaCO + ZPuQvC3GtMH -1) % icjzVw;
            if (fvGaCO == 0)
                fvGaCO = icjzVw;
            for (i = fvGaCO; i < icjzVw; i++)
                Y3hGopIFR[i] = Y3hGopIFR[i + 1];
            icjzVw = icjzVw - 1;
        }
        printf ("%d\n", Y3hGopIFR[1]);
        scanf ("%d %d", &icjzVw, &ZPuQvC3GtMH);
    };
}

