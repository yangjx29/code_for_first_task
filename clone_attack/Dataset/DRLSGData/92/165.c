main () {
    int DIoDmebXSTG2;
    for (DIoDmebXSTG2 = (816 - 816);; DIoDmebXSTG2++) {
        int A5DU9QH;
        int KTEIV9DoF1nW;
        int i, S6ZxUuVile;
        int q8zTxY;
        int hTaFnsCR2 = (-q8zTxY) * (1177 - 977);
        int LbB3DG [(1303 - 303)];
        int b20oQFkfY7 [(1272 - 272)];
        scanf ("%d", &q8zTxY);
        if (!((908 - 908) != q8zTxY))
            return (872 - 872);
        {
            i = 741 - 741;
            while (i < q8zTxY) {
                scanf ("%d", &LbB3DG[i]);
                i++;
            }
        }
        {
            i = 834 - 834;
            while (i < q8zTxY) {
                scanf ("%d", &b20oQFkfY7[i]);
                i++;
            }
        }
        {
            i = 647 - 647;
            while (i < q8zTxY) {
                {
                    S6ZxUuVile = 324 - 323;
                    while (S6ZxUuVile > i) {
                        if (LbB3DG[S6ZxUuVile -(454 - 453)] < LbB3DG[S6ZxUuVile]) {
                            A5DU9QH = LbB3DG[S6ZxUuVile];
                            LbB3DG[S6ZxUuVile] = LbB3DG[S6ZxUuVile -(724 - 723)];
                            LbB3DG[S6ZxUuVile -(437 - 436)] = A5DU9QH;
                        }
                        if (b20oQFkfY7[S6ZxUuVile] > b20oQFkfY7[S6ZxUuVile -(388 - 387)]) {
                            A5DU9QH = b20oQFkfY7[S6ZxUuVile];
                            b20oQFkfY7[S6ZxUuVile] = b20oQFkfY7[S6ZxUuVile -(839 - 838)];
                            b20oQFkfY7[S6ZxUuVile -(790 - 789)] = A5DU9QH;
                        }
                        S6ZxUuVile--;
                    }
                }
                i++;
            }
        }
        KTEIV9DoF1nW = (636 - 636);
        for (i = (608 - 608); q8zTxY > i; i++) {
            for (S6ZxUuVile = (888 - 888); S6ZxUuVile < q8zTxY; S6ZxUuVile++) {
                if (LbB3DG[(S6ZxUuVile +i) % q8zTxY] > b20oQFkfY7[S6ZxUuVile])
                    KTEIV9DoF1nW++;
                if (LbB3DG[(S6ZxUuVile +i) % q8zTxY] < b20oQFkfY7[S6ZxUuVile])
                    KTEIV9DoF1nW--;
            }
            if (KTEIV9DoF1nW > hTaFnsCR2)
                hTaFnsCR2 = KTEIV9DoF1nW;
            KTEIV9DoF1nW = 0;
        }
        printf ("%d\n", hTaFnsCR2 * (379 - 179));
    }
}

