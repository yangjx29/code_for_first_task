void  main () {
    int Kcin6TjGA5 [(771 - 762)] [9], h, FAtnSkyq, i, ICjpPN8w, k, dBivX8TyJe, tPOaImGTrJ2N, min, minh, MB56i8tP = (960 - 960);
    char UG0iMo3gL [(483 - 383)];
    scanf ("%d,%d", &h, &FAtnSkyq);
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
        i = 471 - 470;
        while (h >= i) {
            for (ICjpPN8w = (397 - 396); FAtnSkyq >= ICjpPN8w; ICjpPN8w = ICjpPN8w +1)
                scanf ("%d", &Kcin6TjGA5[i][ICjpPN8w]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            i = i + 1;
        };
    }
    for (i = (137 - 136); h >= i; i = i + 1) {
        minh = (957 - 956);
        dBivX8TyJe = Kcin6TjGA5[i][(499 - 498)];
        tPOaImGTrJ2N = (470 - 469);
        {
            ICjpPN8w = 866 - 865;
            while (ICjpPN8w <= FAtnSkyq) {
                if (Kcin6TjGA5[i][ICjpPN8w] > dBivX8TyJe) {
                    dBivX8TyJe = Kcin6TjGA5[i][ICjpPN8w];
                    tPOaImGTrJ2N = ICjpPN8w;
                }
                ICjpPN8w = ICjpPN8w +1;
            };
        }
        min = Kcin6TjGA5[(327 - 326)][tPOaImGTrJ2N];
        {
            k = 2;
            while (k <= h) {
                if (Kcin6TjGA5[k][tPOaImGTrJ2N] < min) {
                    min = Kcin6TjGA5[k][tPOaImGTrJ2N];
                    minh = k;
                }
                k = k + 1;
            };
        }
        if (minh == i) {
            MB56i8tP = 1;
            printf ("%d+%d\n", i - 1, tPOaImGTrJ2N - 1);
        };
    }
    if (MB56i8tP == (302 - 302))
        printf ("No\n");
}

