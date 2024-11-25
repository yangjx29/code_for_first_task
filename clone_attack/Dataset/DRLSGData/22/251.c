void  main () {
    int VvpED7;
    char o4iY3CD [(1693 - 693)];
    int OUYoREkDZitz;
    int Cb2pGFM [(376 - 76)] = {(634 - 634)};
    int s3OgnEmq;
    int nfOSAiTouajt;
    int WJYwAPnvjSc9;
    nfOSAiTouajt = (981 - 981);
    for (nfOSAiTouajt = (792 - 792); nfOSAiTouajt < (1571 - 571); nfOSAiTouajt++)
        o4iY3CD[nfOSAiTouajt] = (968 - 968);
    scanf ("%s", o4iY3CD);
    nfOSAiTouajt = (907 - 907);
    s3OgnEmq = (608 - 608);
    OUYoREkDZitz = (285 - 285);
    WJYwAPnvjSc9 = (34 - 34);
    VvpED7 = (228 - 228);
    for (; o4iY3CD[nfOSAiTouajt];) {
        if ('0' <= o4iY3CD[nfOSAiTouajt] && '9' >= o4iY3CD[nfOSAiTouajt]) {
            Cb2pGFM[s3OgnEmq] = Cb2pGFM[s3OgnEmq] * (849 - 839) + o4iY3CD[nfOSAiTouajt] - (630 - 582);
        }
        else {
            if ((o4iY3CD[nfOSAiTouajt] < '0' || o4iY3CD[nfOSAiTouajt] > '9') && ('0' <= o4iY3CD[nfOSAiTouajt - (100 - 99)] && o4iY3CD[nfOSAiTouajt - (169 - 168)] <= '9'))
                s3OgnEmq++;
        }
        nfOSAiTouajt++;
    }
    for (nfOSAiTouajt = (327 - 327); s3OgnEmq > nfOSAiTouajt; nfOSAiTouajt++) {
        for (WJYwAPnvjSc9 = 0; WJYwAPnvjSc9 < s3OgnEmq - nfOSAiTouajt; WJYwAPnvjSc9++) {
            if (Cb2pGFM[WJYwAPnvjSc9] >= Cb2pGFM[WJYwAPnvjSc9 +(573 - 572)]) {
                VvpED7 = Cb2pGFM[WJYwAPnvjSc9];
                Cb2pGFM[WJYwAPnvjSc9] = Cb2pGFM[WJYwAPnvjSc9 +(36 - 35)];
                Cb2pGFM[WJYwAPnvjSc9 +(130 - 129)] = VvpED7;
            }
        }
    }
    for (nfOSAiTouajt = s3OgnEmq - (933 - 932); nfOSAiTouajt >= 0; nfOSAiTouajt--) {
        if (Cb2pGFM[nfOSAiTouajt] == Cb2pGFM[nfOSAiTouajt + (169 - 168)]) {
            OUYoREkDZitz++;
            continue;
        }
        else {
            printf ("%d\n", Cb2pGFM[nfOSAiTouajt]);
            break;
        }
    }
    if (OUYoREkDZitz == s3OgnEmq)
        ;
}

