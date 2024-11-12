int main () {
    int OsLSG7Jr3q;
    int VqY05OfV;
    int qFxjab [100] [100];
    int V3Eu7iC;
    int lX2wp97qdR;
    int uF0mI8y;
    scanf ("%d%d", &OsLSG7Jr3q, &VqY05OfV);
    for (lX2wp97qdR = (720 - 720); lX2wp97qdR < OsLSG7Jr3q; lX2wp97qdR = lX2wp97qdR + (939 - 938)) {
        uF0mI8y = (143 - 143);
        while (uF0mI8y < VqY05OfV) {
            scanf ("%d", &qFxjab[lX2wp97qdR][uF0mI8y]);
            uF0mI8y = uF0mI8y + (455 - 454);
        }
    }
    if (OsLSG7Jr3q < VqY05OfV) {
        for (V3Eu7iC = 0; V3Eu7iC <= OsLSG7Jr3q -(459 - 458); V3Eu7iC = V3Eu7iC +(894 - 893)) {
            lX2wp97qdR = 0;
            while (lX2wp97qdR <= V3Eu7iC) {
                uF0mI8y = V3Eu7iC -lX2wp97qdR;
                printf ("%d\n", qFxjab[lX2wp97qdR][uF0mI8y]);
                lX2wp97qdR = lX2wp97qdR + 1;
            }
        }
        for (V3Eu7iC = OsLSG7Jr3q; V3Eu7iC <= VqY05OfV -1; V3Eu7iC = V3Eu7iC +1) {
            lX2wp97qdR = 0;
            while (lX2wp97qdR <= OsLSG7Jr3q -1) {
                uF0mI8y = V3Eu7iC -lX2wp97qdR;
                printf ("%d\n", qFxjab[lX2wp97qdR][uF0mI8y]);
                lX2wp97qdR = lX2wp97qdR + 1;
            }
        }
        {
            V3Eu7iC = VqY05OfV;
            while (VqY05OfV +OsLSG7Jr3q-2 >= V3Eu7iC) {
                for (lX2wp97qdR = V3Eu7iC -VqY05OfV+1; OsLSG7Jr3q -1 >= lX2wp97qdR; lX2wp97qdR = lX2wp97qdR + 1) {
                    uF0mI8y = V3Eu7iC -lX2wp97qdR;
                    printf ("%d\n", qFxjab[lX2wp97qdR][uF0mI8y]);
                }
                V3Eu7iC = V3Eu7iC +1;
            }
        }
    }
    else {
        for (V3Eu7iC = 0; V3Eu7iC <= VqY05OfV -1; V3Eu7iC = V3Eu7iC +1) {
            for (lX2wp97qdR = 0; lX2wp97qdR <= V3Eu7iC; lX2wp97qdR = lX2wp97qdR + 1) {
                uF0mI8y = V3Eu7iC -lX2wp97qdR;
                printf ("%d\n", qFxjab[lX2wp97qdR][uF0mI8y]);
            }
        }
        for (V3Eu7iC = VqY05OfV; V3Eu7iC <= OsLSG7Jr3q -1; V3Eu7iC = V3Eu7iC +1) {
            for (lX2wp97qdR = V3Eu7iC -VqY05OfV+1; lX2wp97qdR <= V3Eu7iC; lX2wp97qdR = lX2wp97qdR + 1) {
                uF0mI8y = V3Eu7iC -lX2wp97qdR;
                printf ("%d\n", qFxjab[lX2wp97qdR][uF0mI8y]);
            }
        }
        {
            V3Eu7iC = OsLSG7Jr3q;
            while (V3Eu7iC <= OsLSG7Jr3q +VqY05OfV-2) {
                {
                    lX2wp97qdR = V3Eu7iC -VqY05OfV+1;
                    while (lX2wp97qdR <= OsLSG7Jr3q -1) {
                        uF0mI8y = V3Eu7iC -lX2wp97qdR;
                        printf ("%d\n", qFxjab[lX2wp97qdR][uF0mI8y]);
                        lX2wp97qdR = lX2wp97qdR + 1;
                    }
                }
                V3Eu7iC = V3Eu7iC +1;
            }
        }
    }
    return 0;
}

