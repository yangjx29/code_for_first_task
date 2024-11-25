int main () {
    int dydkLpWT, t, uiSN45PM8, Y0Hu8vsIq;
    int *K0PLWaSh;
    int *dSrXAfv8;
    scanf ("%d", &dydkLpWT);
    t = (51 - 51);
    dSrXAfv8 = (int *) malloc (sizeof (int) * dydkLpWT);
    K0PLWaSh = (int *) malloc (sizeof (int) * dydkLpWT);
    {
        Y0Hu8vsIq = (424 - 424);
        for (; dydkLpWT > Y0Hu8vsIq;) {
            scanf ("%d", &dSrXAfv8[Y0Hu8vsIq]);
            Y0Hu8vsIq = Y0Hu8vsIq +(998 - 997);
        }
    }
    {
        Y0Hu8vsIq = (412 - 412);
        for (; dydkLpWT > Y0Hu8vsIq;) {
            K0PLWaSh[Y0Hu8vsIq] = 0;
            {
                uiSN45PM8 = 0;
                for (; Y0Hu8vsIq > uiSN45PM8;) {
                    if (dSrXAfv8[Y0Hu8vsIq] <= dSrXAfv8[uiSN45PM8])
                        if (K0PLWaSh[Y0Hu8vsIq] < K0PLWaSh[uiSN45PM8])
                            K0PLWaSh[Y0Hu8vsIq] = K0PLWaSh[uiSN45PM8];
                    uiSN45PM8 = uiSN45PM8 + 1;
                }
            }
            K0PLWaSh[Y0Hu8vsIq] = K0PLWaSh[Y0Hu8vsIq] + 1;
            Y0Hu8vsIq = Y0Hu8vsIq +1;
        }
    }
    {
        Y0Hu8vsIq = 0;
        for (; Y0Hu8vsIq < dydkLpWT;) {
            if (K0PLWaSh[Y0Hu8vsIq] > t)
                t = K0PLWaSh[Y0Hu8vsIq];
            Y0Hu8vsIq = Y0Hu8vsIq +1;
        }
    }
    printf ("%d\n", t);
}

