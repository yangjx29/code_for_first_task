void  main () {
    float oEoNthJjqQ7 [(722 - 622)], QNXxM1z4F [100], ZneYNAI [100], KLFAT5CpoRlq;
    int RsLOFwXr, xfGshaJ6Nw, dTEZIj;
    scanf ("%d", &RsLOFwXr);
    {
        xfGshaJ6Nw = 923 - 923;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (xfGshaJ6Nw < RsLOFwXr) {
            scanf ("%f %f", &oEoNthJjqQ7[xfGshaJ6Nw], &QNXxM1z4F[xfGshaJ6Nw]);
            xfGshaJ6Nw = xfGshaJ6Nw + 1;
        };
    }
    {
        xfGshaJ6Nw = 112 - 112;
        while (xfGshaJ6Nw < RsLOFwXr -1) {
            ZneYNAI[xfGshaJ6Nw] = 0;
            {
                dTEZIj = xfGshaJ6Nw + 1;
                while (dTEZIj < RsLOFwXr) {
                    KLFAT5CpoRlq = sqrt ((QNXxM1z4F[dTEZIj] - QNXxM1z4F[xfGshaJ6Nw]) * (QNXxM1z4F[dTEZIj] - QNXxM1z4F[xfGshaJ6Nw]) + (oEoNthJjqQ7[dTEZIj] - oEoNthJjqQ7[xfGshaJ6Nw]) * (oEoNthJjqQ7[dTEZIj] - oEoNthJjqQ7[xfGshaJ6Nw]));
                    dTEZIj++;
                    if (KLFAT5CpoRlq > ZneYNAI[xfGshaJ6Nw])
                        ZneYNAI[xfGshaJ6Nw] = KLFAT5CpoRlq;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            xfGshaJ6Nw++;
        };
    }
    {
        xfGshaJ6Nw = 0;
        while (xfGshaJ6Nw < RsLOFwXr -2) {
            if (ZneYNAI[xfGshaJ6Nw] > ZneYNAI[xfGshaJ6Nw + 1]) {
                KLFAT5CpoRlq = ZneYNAI[xfGshaJ6Nw];
                ZneYNAI[xfGshaJ6Nw] = ZneYNAI[xfGshaJ6Nw + 1];
                ZneYNAI[xfGshaJ6Nw + 1] = KLFAT5CpoRlq;
            }
            xfGshaJ6Nw++;
        };
    }
    printf ("%.4f\n", ZneYNAI[RsLOFwXr -2]);
}

