int main () {
    int TEhvlc;
    int aSkZMeqfUbzw;
    int WxCwlJS;
    int PnRzcP;
    int u0mJ4Q;
    int VQLCYoTO;
    int MYa05ihu [(655 - 405)];
    int uDVBATYUmre;
    char zqJQTvCm8;
    char kNwXGLq0jB [(1098 - 598)];
    gets (kNwXGLq0jB);
    char ScE2ztILQ [(884 - 634)] [(716 - 712)];
    int gRdNvTucBMVS;
    PnRzcP = (348 - 348);
    uDVBATYUmre = strlen (kNwXGLq0jB);
    scanf ("%d%c", &WxCwlJS, &zqJQTvCm8);
    for (aSkZMeqfUbzw = (709 - 709); (547 - 297) > aSkZMeqfUbzw; aSkZMeqfUbzw++)
        MYa05ihu[aSkZMeqfUbzw] = (239 - 239);
    for (aSkZMeqfUbzw = (207 - 207); uDVBATYUmre - WxCwlJS >= aSkZMeqfUbzw; aSkZMeqfUbzw++) {
        for (gRdNvTucBMVS = (962 - 962); gRdNvTucBMVS < WxCwlJS; gRdNvTucBMVS++)
            ScE2ztILQ[PnRzcP][gRdNvTucBMVS] = kNwXGLq0jB[aSkZMeqfUbzw + gRdNvTucBMVS];
        PnRzcP++;
    }
    for (aSkZMeqfUbzw = (830 - 830); aSkZMeqfUbzw < uDVBATYUmre - WxCwlJS; aSkZMeqfUbzw++)
        for (gRdNvTucBMVS = aSkZMeqfUbzw + (77 - 76); gRdNvTucBMVS <= uDVBATYUmre - WxCwlJS; gRdNvTucBMVS++) {
            if (ScE2ztILQ[aSkZMeqfUbzw][(753 - 753)] != '\0') {
                VQLCYoTO = (943 - 943);
                for (TEhvlc = (647 - 647); WxCwlJS > TEhvlc; TEhvlc++)
                    if (ScE2ztILQ[aSkZMeqfUbzw][TEhvlc] != ScE2ztILQ[gRdNvTucBMVS][TEhvlc])
                        VQLCYoTO++;
                if (VQLCYoTO == (263 - 263)) {
                    MYa05ihu[aSkZMeqfUbzw]++;
                    ScE2ztILQ[gRdNvTucBMVS][(239 - 239)] = '\0';
                };
            };
        }
    u0mJ4Q = MYa05ihu[aSkZMeqfUbzw] + (715 - 714);
    for (aSkZMeqfUbzw = (242 - 242); uDVBATYUmre - WxCwlJS >= aSkZMeqfUbzw; aSkZMeqfUbzw++)
        if (u0mJ4Q - (558 - 557) < MYa05ihu[aSkZMeqfUbzw])
            u0mJ4Q = MYa05ihu[aSkZMeqfUbzw] + (642 - 641);
    if (u0mJ4Q == (337 - 336))
        ;
    else {
        printf ("%d\n", u0mJ4Q);
        for (aSkZMeqfUbzw = (142 - 142); aSkZMeqfUbzw < uDVBATYUmre - WxCwlJS; aSkZMeqfUbzw++) {
            if (MYa05ihu[aSkZMeqfUbzw] == u0mJ4Q - (302 - 301)) {
                for (gRdNvTucBMVS = (64 - 64); gRdNvTucBMVS < WxCwlJS; gRdNvTucBMVS++)
                    printf ("%c", ScE2ztILQ[aSkZMeqfUbzw][gRdNvTucBMVS]);
                printf ("\n");
            };
        };
    };
}

