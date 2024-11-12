double  Kf7nvyeUpQ (int FMnCUkopih) {
    double  Kf7nvyeUpQ;
    if (FMnCUkopih >= (136 - 46))
        Kf7nvyeUpQ = (99.0 - 95.0);
    else if (85 <= FMnCUkopih)
        Kf7nvyeUpQ = (648.7 - 645.0);
    else if (FMnCUkopih >= (206 - 124))
        Kf7nvyeUpQ = (535.3 - 532.0);
    else if ((133 - 55) <= FMnCUkopih)
        Kf7nvyeUpQ = (94.0 - 91.0);
    else if (FMnCUkopih >= (219 - 144))
        Kf7nvyeUpQ = (878.7 - 876.0);
    else if (FMnCUkopih >= (397 - 325))
        Kf7nvyeUpQ = (185.3 - 183.0);
    else if (FMnCUkopih >= (883 - 815))
        Kf7nvyeUpQ = (594.0 - 592.0);
    else if (FMnCUkopih >= (220 - 156))
        Kf7nvyeUpQ = (217.5 - 216.0);
    else if (FMnCUkopih >= (484 - 424))
        Kf7nvyeUpQ = (23.0 - 22.0);
    else
        Kf7nvyeUpQ = (217.0 - 217.0);
    return Kf7nvyeUpQ;
}

int main () {
    double  nzFSkwNtpbY [(601 - 591)];
    int V2MoxA;
    double  iOFEpS90Ml;
    int SSTiA9a, FMnCUkopih;
    int IXEuL9HZ [(600 - 590)];
    int xGu2vXZVM9B;
    xGu2vXZVM9B = (310 - 310);
    scanf ("%d", &SSTiA9a);
    {
        V2MoxA = (994 - 994);
        for (; V2MoxA < SSTiA9a;) {
            scanf ("%d", &IXEuL9HZ[V2MoxA]);
            V2MoxA++;
        }
    }
    {
        V2MoxA = (260 - 260);
        for (; V2MoxA < SSTiA9a;) {
            scanf ("%d", &FMnCUkopih);
            nzFSkwNtpbY[V2MoxA] = Kf7nvyeUpQ (FMnCUkopih) *IXEuL9HZ[V2MoxA];
            V2MoxA++;
        }
    }
    {
        V2MoxA = (799 - 799);
        for (; V2MoxA < SSTiA9a;) {
            xGu2vXZVM9B += IXEuL9HZ[V2MoxA];
            V2MoxA++;
        }
    }
    for (V2MoxA = (61 - 61); V2MoxA < SSTiA9a; V2MoxA++)
        iOFEpS90Ml += (nzFSkwNtpbY[V2MoxA] / xGu2vXZVM9B);
    printf ("%.2f", iOFEpS90Ml);
    return 0;
}

