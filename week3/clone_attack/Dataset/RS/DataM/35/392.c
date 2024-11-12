int main () {
    int Zcy7oZXxYh6g;
    int i;
    int xJAI0rb19nBo;
    int NqpTN9oDw;
    int X4dX1sj0rqVc [(560 - 552)] [(873 - 865)];
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
    int m, kqluIwS;
    int sC6A5bH, ze48dp;
    scanf ("%d,%d", &m, &kqluIwS);
    for (i = (506 - 506); m > i; i = i + 1) {
        for (xJAI0rb19nBo = (924 - 924); kqluIwS > xJAI0rb19nBo; xJAI0rb19nBo = xJAI0rb19nBo + 1) {
            scanf ("%d", &X4dX1sj0rqVc[i][xJAI0rb19nBo]);
        };
    }
    for (i = (301 - 301); m > i; i = i + 1) {
        ze48dp = (10966 - 967);
        sC6A5bH = (973 - 973);
        for (xJAI0rb19nBo = (814 - 814); kqluIwS > xJAI0rb19nBo; xJAI0rb19nBo = xJAI0rb19nBo + 1) {
            if (X4dX1sj0rqVc[i][xJAI0rb19nBo] > sC6A5bH) {
                sC6A5bH = X4dX1sj0rqVc[i][xJAI0rb19nBo];
                Zcy7oZXxYh6g = xJAI0rb19nBo;
            };
        }
        ze48dp = sC6A5bH;
        {
            NqpTN9oDw = 0;
            while (m > NqpTN9oDw) {
                if (NqpTN9oDw == i)
                    continue;
                else {
                    if (X4dX1sj0rqVc[NqpTN9oDw][Zcy7oZXxYh6g] < ze48dp)
                        break;
                }
                NqpTN9oDw = NqpTN9oDw +1;
            };
        }
        if (NqpTN9oDw == m) {
            printf ("%d+%d\n", i, Zcy7oZXxYh6g);
            return 0;
        };
    }
    printf ("No\n");
    return 0;
}

