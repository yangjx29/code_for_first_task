void  main () {
    int yC1oId [500];
    char QLp75A [501], Bo2TXnK8LO [500] [6];
    int c6wWB8F;
    int i;
    int B30Rkrd;
    int qwoL7vxE2;
    int Rwdph4sN;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d%s", &c6wWB8F, QLp75A);
    B30Rkrd = strlen (QLp75A);
    for (i = 0; B30Rkrd -c6wWB8F >= i; i = i + 1) {
        for (qwoL7vxE2 = 0; qwoL7vxE2 < c6wWB8F; qwoL7vxE2 = qwoL7vxE2 + 1)
            Bo2TXnK8LO[i][qwoL7vxE2] = QLp75A[i + qwoL7vxE2];
        Bo2TXnK8LO[i][c6wWB8F] = 0;
    }
    {
        i = 0;
        while (i < B30Rkrd -c6wWB8F) {
            yC1oId[i] = 1;
            {
                qwoL7vxE2 = i + 1;
                while (qwoL7vxE2 <= B30Rkrd -c6wWB8F) {
                    if (strcmp (Bo2TXnK8LO[i], Bo2TXnK8LO[qwoL7vxE2]) == 0)
                        yC1oId[i]++;
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
                    qwoL7vxE2 = qwoL7vxE2 + 1;
                };
            }
            i = i + 1;
        };
    }
    Rwdph4sN = yC1oId[0];
    {
        i = 1;
        while (i < B30Rkrd -c6wWB8F) {
            if (yC1oId[i] > Rwdph4sN)
                Rwdph4sN = yC1oId[i];
            i = i + 1;
        };
    }
    if (Rwdph4sN == 1)
        printf ("NO");
    else {
        printf ("%d\n", Rwdph4sN);
        {
            i = 0;
            while (i < B30Rkrd -c6wWB8F) {
                if (yC1oId[i] == Rwdph4sN)
                    printf ("%s\n", Bo2TXnK8LO[i]);
                i = i + 1;
            };
        };
    };
}

