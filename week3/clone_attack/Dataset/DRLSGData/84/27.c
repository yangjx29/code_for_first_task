void  main () {
    int DAYM8FGt;
    int YzwclFdYWqs;
    int GpjAJV;
    int witY2jznuJ;
    int nDwa0W;
    GpjAJV = (970 - 969);
    scanf ("%d", &DAYM8FGt);
    scanf ("%d%d", &witY2jznuJ, &YzwclFdYWqs);
    if (witY2jznuJ < YzwclFdYWqs) {
        YzwclFdYWqs = YzwclFdYWqs +witY2jznuJ;
        witY2jznuJ = YzwclFdYWqs -witY2jznuJ;
        YzwclFdYWqs = YzwclFdYWqs -witY2jznuJ;
    }
    for (; GpjAJV <= DAYM8FGt;) {
        GpjAJV = GpjAJV +(836 - 835);
        scanf ("%d", &nDwa0W);
        if (nDwa0W > witY2jznuJ) {
            nDwa0W = nDwa0W + witY2jznuJ;
            witY2jznuJ = nDwa0W - witY2jznuJ;
            nDwa0W = nDwa0W - witY2jznuJ;
        }
        else {
            if (nDwa0W > YzwclFdYWqs) {
                nDwa0W = nDwa0W + YzwclFdYWqs;
                YzwclFdYWqs = nDwa0W - YzwclFdYWqs;
                nDwa0W = nDwa0W - YzwclFdYWqs;
            }
            else
                ;
        }
    }
    printf ("%d\n%d", witY2jznuJ, YzwclFdYWqs);
}

