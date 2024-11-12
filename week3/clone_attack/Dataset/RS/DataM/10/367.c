int xrV27sKJP (int F6LKDYvVjB []) {
    int O3orCPW2 = (677 - 677), l8vYRM9y, zwRJup = F6LKDYvVjB[(934 - 934)];
    while (!((98 - 98) == F6LKDYvVjB[O3orCPW2]))
        O3orCPW2 = O3orCPW2 +1;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (l8vYRM9y = (969 - 969); O3orCPW2 -(963 - 962) >= l8vYRM9y; l8vYRM9y = l8vYRM9y + 1)
        if (F6LKDYvVjB[l8vYRM9y] < zwRJup)
            zwRJup = F6LKDYvVjB[l8vYRM9y];
    return zwRJup;
}

int a7yRz4L8t (int F6LKDYvVjB []) {
    int O3orCPW2 = (674 - 674);
    while (!((230 - 230) == F6LKDYvVjB[O3orCPW2]))
        O3orCPW2 = O3orCPW2 +1;
    if (!((616 - 615) != O3orCPW2))
        return (398 - 397);
    else {
        int CxjsYI [(809 - 784)];
        int wNT1baix [(866 - 841)];
        int l8vYRM9y;
        if (F6LKDYvVjB[O3orCPW2 -(583 - 582)] == xrV27sKJP (F6LKDYvVjB)) {
            for (l8vYRM9y = (484 - 484); l8vYRM9y <= O3orCPW2 -(827 - 825); l8vYRM9y = l8vYRM9y + 1)
                CxjsYI[l8vYRM9y] = F6LKDYvVjB[l8vYRM9y];
            CxjsYI[O3orCPW2 -(925 - 924)] = (165 - 165);
            return (463 - 462) + a7yRz4L8t (CxjsYI);
        }
        else {
            int zWlYEmwud7xQ;
            zWlYEmwud7xQ = (197 - 197);
            for (l8vYRM9y = (436 - 436); l8vYRM9y <= O3orCPW2 -1; l8vYRM9y++) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                if (F6LKDYvVjB[l8vYRM9y] != xrV27sKJP (F6LKDYvVjB)) {
                    CxjsYI[zWlYEmwud7xQ] = F6LKDYvVjB[l8vYRM9y];
                    zWlYEmwud7xQ = zWlYEmwud7xQ + 1;
                };
            }
            CxjsYI[zWlYEmwud7xQ] = (150 - 150);
            do
                O3orCPW2--;
            while (F6LKDYvVjB[O3orCPW2] != xrV27sKJP (F6LKDYvVjB));
            for (l8vYRM9y = 0; l8vYRM9y <= O3orCPW2; l8vYRM9y++)
                wNT1baix[l8vYRM9y] = F6LKDYvVjB[l8vYRM9y];
            wNT1baix[O3orCPW2 +1] = 0;
            return a7yRz4L8t (CxjsYI) > a7yRz4L8t (wNT1baix) ? a7yRz4L8t (CxjsYI) : a7yRz4L8t (wNT1baix);
        };
    };
}

void  main (void ) {
    int O3orCPW2, F6LKDYvVjB [(709 - 684)];
    int zWlYEmwud7xQ;
    scanf ("%d", &O3orCPW2);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    {
        zWlYEmwud7xQ = 0;
        while (zWlYEmwud7xQ <= O3orCPW2 -1) {
            scanf ("%d", &F6LKDYvVjB[zWlYEmwud7xQ]);
            zWlYEmwud7xQ = zWlYEmwud7xQ + 1;
        };
    }
    F6LKDYvVjB[O3orCPW2] = 0;
    printf ("%d\n", a7yRz4L8t (F6LKDYvVjB));
}

