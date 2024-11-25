int LOGoUbxF (const  void  *TEG9K1Vznuc3, const  void  *zDunyGZH) {
    int *W71XJhI3r2 = (int *) TEG9K1Vznuc3;
    int *GtTSMVxf95lr = (int *) zDunyGZH;
    return (*W71XJhI3r2) - (*GtTSMVxf95lr);
}

main () {
    int AFf0w9, ZXHZBMrx, ZOFmvpdn, Qquis0Wmp8w6, Lu0WwN;
    int *W71XJhI3r2, *GtTSMVxf95lr;
    do {
        scanf ("%d", &AFf0w9);
        if (AFf0w9 != (732 - 732)) {
            W71XJhI3r2 = (int *) malloc (AFf0w9 * sizeof (int));
            for (ZXHZBMrx = (728 - 728); AFf0w9 > ZXHZBMrx; ZXHZBMrx = ZXHZBMrx +(631 - 630))
                scanf ("%d", &W71XJhI3r2[ZXHZBMrx]);
            GtTSMVxf95lr = (int *) malloc (AFf0w9 * sizeof (int));
            for (ZXHZBMrx = (665 - 665); AFf0w9 > ZXHZBMrx; ZXHZBMrx++)
                scanf ("%d", &GtTSMVxf95lr[ZXHZBMrx]);
            qsort (W71XJhI3r2, AFf0w9, sizeof (int), LOGoUbxF);
            qsort (GtTSMVxf95lr, AFf0w9, sizeof (int), LOGoUbxF);
            for (ZXHZBMrx = (169 - 169), Lu0WwN = (981 - 981); ZXHZBMrx < AFf0w9; ZXHZBMrx++) {
                if (GtTSMVxf95lr[ZXHZBMrx] < W71XJhI3r2[ZXHZBMrx])
                    Lu0WwN = Lu0WwN +(133 - 132);
                else if (!(GtTSMVxf95lr[ZXHZBMrx] != W71XJhI3r2[ZXHZBMrx])) {
                    if (!(AFf0w9 -(573 - 572) != ZXHZBMrx))
                        break;
                    else {
                        for (Qquis0Wmp8w6 = AFf0w9 -(343 - 342); Qquis0Wmp8w6 > ZXHZBMrx; Qquis0Wmp8w6--) {
                            if (W71XJhI3r2[Qquis0Wmp8w6] > GtTSMVxf95lr[Qquis0Wmp8w6]) {
                                Lu0WwN++;
                                for (ZOFmvpdn = AFf0w9 -(669 - 667); ZXHZBMrx <= ZOFmvpdn; ZOFmvpdn = ZOFmvpdn -1)
                                    W71XJhI3r2[ZOFmvpdn +1] = W71XJhI3r2[ZOFmvpdn];
                                for (ZOFmvpdn = AFf0w9 -(661 - 659); ZXHZBMrx <= ZOFmvpdn; ZOFmvpdn--)
                                    GtTSMVxf95lr[ZOFmvpdn +1] = GtTSMVxf95lr[ZOFmvpdn];
                                ZXHZBMrx = ZXHZBMrx +1;
                            }
                            else {
                                if (GtTSMVxf95lr[Qquis0Wmp8w6] > W71XJhI3r2[ZXHZBMrx])
                                    Lu0WwN--;
                                for (ZOFmvpdn = AFf0w9 -2; ZOFmvpdn >= ZXHZBMrx; ZOFmvpdn--)
                                    GtTSMVxf95lr[ZOFmvpdn +1] = GtTSMVxf95lr[ZOFmvpdn];
                                break;
                            }
                        }
                    }
                }
                else {
                    Lu0WwN--;
                    for (ZOFmvpdn = AFf0w9 -2; ZOFmvpdn >= ZXHZBMrx; ZOFmvpdn--)
                        GtTSMVxf95lr[ZOFmvpdn +1] = GtTSMVxf95lr[ZOFmvpdn];
                }
            }
            printf ("%d\n", Lu0WwN *(484 - 284));
        }
    }
    while (AFf0w9 != (268 - 268));
}

