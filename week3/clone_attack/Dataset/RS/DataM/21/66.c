void  main () {
    float vmAybQ4j2efl;
    float A20i46MNv;
    float b [300];
    vmAybQ4j2efl = 0;
    int xS8dkrH9 [300];
    int n;
    int qzUwqmehH;
    int mGLNaEi;
    int temper;
    scanf ("%d", &n);
    {
        qzUwqmehH = 0;
        while (n > qzUwqmehH) {
            scanf ("%d", &xS8dkrH9[qzUwqmehH]);
            vmAybQ4j2efl = vmAybQ4j2efl + xS8dkrH9[qzUwqmehH];
            qzUwqmehH = qzUwqmehH + 1;
        };
    }
    A20i46MNv = vmAybQ4j2efl / n;
    {
        qzUwqmehH = 0;
        while (n > qzUwqmehH) {
            if (A20i46MNv < xS8dkrH9[qzUwqmehH])
                b[qzUwqmehH] = xS8dkrH9[qzUwqmehH] - A20i46MNv;
            else
                b[qzUwqmehH] = A20i46MNv -xS8dkrH9[qzUwqmehH];
            qzUwqmehH++;
        };
    }
    {
        qzUwqmehH = 0;
        while (n - 1 > qzUwqmehH) {
            {
                mGLNaEi = qzUwqmehH + 1;
                while (n > mGLNaEi) {
                    if (b[mGLNaEi] > b[qzUwqmehH]) {
                        temper = xS8dkrH9[qzUwqmehH];
                        xS8dkrH9[qzUwqmehH] = xS8dkrH9[mGLNaEi];
                        xS8dkrH9[mGLNaEi] = temper;
                        temper = b[qzUwqmehH];
                        b[qzUwqmehH] = b[mGLNaEi];
                        b[mGLNaEi] = temper;
                    }
                    mGLNaEi++;
                };
            }
            qzUwqmehH++;
        };
    }
    printf ("%d", xS8dkrH9[0]);
    {
        qzUwqmehH = 1;
        while (n > qzUwqmehH) {
            if (b[qzUwqmehH] == b[0])
                printf (",%d", xS8dkrH9[qzUwqmehH]);
            qzUwqmehH++;
        };
    };
}

