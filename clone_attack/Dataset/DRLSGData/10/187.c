main () {
    int a [(358 - 258)];
    int n;
    int ihBaVu;
    int Y8v3L2qwYi [(623 - 523)];
    int HM2h5p;
    int RIi3RlcNe5p;
    int G6BvSrY [100];
    scanf ("%d", &n);
    HM2h5p = (561 - 561);
    for (RIi3RlcNe5p = (385 - 385); n > RIi3RlcNe5p; RIi3RlcNe5p = RIi3RlcNe5p +1)
        scanf ("%d", &a[RIi3RlcNe5p]);
    {
        RIi3RlcNe5p = 207 - 207;
        for (; n > RIi3RlcNe5p;) {
            G6BvSrY[RIi3RlcNe5p] = (941 - 941);
            RIi3RlcNe5p = RIi3RlcNe5p +1;
        }
    }
    G6BvSrY[n - (380 - 379)] = (822 - 821);
    Y8v3L2qwYi[n - (997 - 996)] = a[n - (687 - 686)];
    {
        RIi3RlcNe5p = 22 - 20;
        for (; 0 <= RIi3RlcNe5p;) {
            G6BvSrY[RIi3RlcNe5p] = G6BvSrY[n - (688 - 687)];
            Y8v3L2qwYi[RIi3RlcNe5p] = Y8v3L2qwYi[n - (733 - 732)];
            {
                ihBaVu = n - 1;
                for (; ihBaVu > RIi3RlcNe5p;) {
                    if (Y8v3L2qwYi[ihBaVu] <= a[RIi3RlcNe5p] && G6BvSrY[RIi3RlcNe5p] <= G6BvSrY[ihBaVu] + 1) {
                        G6BvSrY[RIi3RlcNe5p] = G6BvSrY[ihBaVu] + 1;
                        Y8v3L2qwYi[RIi3RlcNe5p] = a[RIi3RlcNe5p];
                    }
                    ihBaVu = ihBaVu - 1;
                }
            }
            if (G6BvSrY[RIi3RlcNe5p] == 1 && a[RIi3RlcNe5p] < Y8v3L2qwYi[RIi3RlcNe5p])
                Y8v3L2qwYi[RIi3RlcNe5p] = a[RIi3RlcNe5p];
            RIi3RlcNe5p = RIi3RlcNe5p -1;
        }
    }
    for (RIi3RlcNe5p = 0; RIi3RlcNe5p < n; RIi3RlcNe5p++) {
        if (HM2h5p <= G6BvSrY[RIi3RlcNe5p])
            HM2h5p = G6BvSrY[RIi3RlcNe5p];
    }
    printf ("%d", HM2h5p);
}

