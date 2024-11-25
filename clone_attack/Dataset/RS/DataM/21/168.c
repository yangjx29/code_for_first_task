void  main () {
    int n, OiStW2oFP [(1287 - 987)], i, temp;
    float YelMiV;
    float aver;
    float c;
    float b;
    YelMiV = (720 - 720);
    scanf ("%d", &n);
    {
        i = 421 - 421;
        while (n - (608 - 607) > i) {
            scanf ("%d ", &OiStW2oFP[i]);
            i = i + 1;
        };
    }
    scanf ("%d", &OiStW2oFP[n - (325 - 324)]);
    {
        i = 846 - 846;
        while (n > i) {
            YelMiV = YelMiV +OiStW2oFP[i];
            i++;
        };
    }
    aver = YelMiV / n;
    {
        i = 762 - 761;
        while (n > i) {
            if (OiStW2oFP[0] < OiStW2oFP[i]) {
                temp = OiStW2oFP[i];
                OiStW2oFP[i] = OiStW2oFP[0];
                OiStW2oFP[0] = temp;
            }
            i++;
        };
    }
    {
        i = 0;
        while (n - (887 - 886) > i) {
            if (OiStW2oFP[i] < OiStW2oFP[n - (106 - 105)]) {
                temp = OiStW2oFP[i];
                OiStW2oFP[i] = OiStW2oFP[n - 1];
                OiStW2oFP[n - 1] = temp;
            }
            i++;
        };
    }
    c = OiStW2oFP[0] - aver;
    b = aver - OiStW2oFP[n - 1];
    if (c > b)
        printf ("%d\n", OiStW2oFP[0]);
    else if (c < b)
        printf ("%d\n", OiStW2oFP[n - 1]);
    else
        printf ("%d,%d\n", OiStW2oFP[n - 1], OiStW2oFP[0]);
}

