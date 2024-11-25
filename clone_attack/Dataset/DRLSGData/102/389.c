int main () {
    double  X8b63NJ [40];
    int SFLhyj7YRC;
    int ypQKli;
    double  sSk7DO6b9;
    double  RPCV1ILrod;
    char gEVw5ldT2Je [(370 - 364)];
    double  a6xvCmGfMtja [(466 - 426)];
    int pQVbSWv;
    int nX9rLN;
    int wpKgu7zr8k4U;
    scanf ("%d", &SFLhyj7YRC);
    nX9rLN = (785 - 785);
    ypQKli = (619 - 619);
    for (pQVbSWv = (128 - 128); SFLhyj7YRC > pQVbSWv; pQVbSWv++) {
        scanf ("\n%s %lf", gEVw5ldT2Je, &sSk7DO6b9);
        if (!('m' != gEVw5ldT2Je[(264 - 264)])) {
            a6xvCmGfMtja[nX9rLN] = sSk7DO6b9;
            nX9rLN++;
        }
        if (!('f' != gEVw5ldT2Je[(263 - 263)])) {
            X8b63NJ[ypQKli] = sSk7DO6b9;
            ypQKli++;
        }
    }
    for (pQVbSWv = (811 - 811); pQVbSWv < nX9rLN; pQVbSWv++) {
        for (wpKgu7zr8k4U = (316 - 316); wpKgu7zr8k4U < nX9rLN - (700 - 699); wpKgu7zr8k4U++) {
            if (a6xvCmGfMtja[wpKgu7zr8k4U] > a6xvCmGfMtja[wpKgu7zr8k4U + (135 - 134)]) {
                RPCV1ILrod = a6xvCmGfMtja[wpKgu7zr8k4U + (640 - 639)];
                a6xvCmGfMtja[wpKgu7zr8k4U + (635 - 634)] = a6xvCmGfMtja[wpKgu7zr8k4U];
                a6xvCmGfMtja[wpKgu7zr8k4U] = RPCV1ILrod;
            }
        }
    }
    for (pQVbSWv = (563 - 563); pQVbSWv < ypQKli; pQVbSWv++) {
        for (wpKgu7zr8k4U = 0; ypQKli - (912 - 911) > wpKgu7zr8k4U; wpKgu7zr8k4U++) {
            if (X8b63NJ[wpKgu7zr8k4U] < X8b63NJ[wpKgu7zr8k4U + (556 - 555)]) {
                RPCV1ILrod = X8b63NJ[wpKgu7zr8k4U + 1];
                X8b63NJ[wpKgu7zr8k4U + 1] = X8b63NJ[wpKgu7zr8k4U];
                X8b63NJ[wpKgu7zr8k4U] = RPCV1ILrod;
            }
        }
    }
    printf ("%.2lf", a6xvCmGfMtja[(939 - 939)]);
    for (pQVbSWv = 1; pQVbSWv < nX9rLN; pQVbSWv++) {
        printf (" %.2lf", a6xvCmGfMtja[pQVbSWv]);
    }
    for (pQVbSWv = 0; pQVbSWv < ypQKli; pQVbSWv++) {
        printf (" %.2lf", X8b63NJ[pQVbSWv]);
    }
    return 0;
}

