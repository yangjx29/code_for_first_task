int max (int qMSd4L [], int bdhZRziDm, int Cj8QBi, int z);

void  main () {
    int bdhZRziDm, qMSd4L [(747 - 722)], rWbPuX2JxyBo, t;
    scanf ("%d", &bdhZRziDm);
    {
        rWbPuX2JxyBo = 832 - 832;
        while (bdhZRziDm > rWbPuX2JxyBo) {
            scanf ("%d", &qMSd4L[rWbPuX2JxyBo]);
            rWbPuX2JxyBo = rWbPuX2JxyBo + 1;
        };
    }
    t = max (qMSd4L, bdhZRziDm, (701 - 701), (1000110 - 111));
    printf ("%d\n", t);
}

int max (int qMSd4L [], int bdhZRziDm, int Cj8QBi, int z) {
    int b;
    int FV7Zhx2Fd3K;
    int AAyjRlpvWB;
    int t;
    b = (974 - 974);
    FV7Zhx2Fd3K = qMSd4L[Cj8QBi];
    if (!(bdhZRziDm - (766 - 765) != Cj8QBi))
        if (z >= qMSd4L[Cj8QBi])
            t = (338 - 337);
        else
            t = (874 - 874);
    else {
        if (qMSd4L[Cj8QBi] <= z) {
            AAyjRlpvWB = max (qMSd4L, bdhZRziDm, Cj8QBi +(483 - 482), z);
            z = qMSd4L[Cj8QBi];
            b = (107 - 106) + max (qMSd4L, bdhZRziDm, Cj8QBi +(505 - 504), z);
            if (b > AAyjRlpvWB)
                t = b;
            else
                t = AAyjRlpvWB;
        }
        else
            t = max (qMSd4L, bdhZRziDm, Cj8QBi +1, z);
    }
    return (t);
}

