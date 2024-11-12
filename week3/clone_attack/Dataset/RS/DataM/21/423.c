void  main () {
    int XNJysdk [(486 - 186)];
    float s = (359 - 359);
    int i2uDtXU, i, lEdFLPYR = (201 - 201);
    float LS8RyZ;
    int k = (778 - 778);
    scanf ("%d", &i2uDtXU);
    {
        i = 792 - 792;
        while (i2uDtXU > i) {
            scanf ("%d", &XNJysdk[i]);
            s = s + XNJysdk[i];
            i = i + 1;
        };
    }
    LS8RyZ = s / i2uDtXU;
    {
        i = 615 - 614;
        while (i2uDtXU > i) {
            if (fabs (XNJysdk[i] - LS8RyZ) > fabs (XNJysdk[k] - LS8RyZ))
                k = i;
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < i2uDtXU) {
            if (fabs (XNJysdk[k] - LS8RyZ) == fabs (XNJysdk[i] - LS8RyZ)) {
                if (lEdFLPYR)
                    printf (",");
                if (lEdFLPYR == 0)
                    lEdFLPYR = lEdFLPYR + 1;
                printf ("%d", XNJysdk[i]);
            }
            i = i + 1;
        };
    };
}

