main () {
    char EaZXwsWF [(513 - 433)];
    char mEeAFc5 [(1006 - 926)];
    gets (EaZXwsWF);
    int H8swhiACg;
    H8swhiACg = (627 - 627);
    int ZbWgN6aFi3I;
    ZbWgN6aFi3I = (352 - 352);
    int wa234lyh;
    wa234lyh = (248 - 248);
    gets (mEeAFc5);
    for (; mEeAFc5[ZbWgN6aFi3I] != '\0';) {
        if (mEeAFc5[ZbWgN6aFi3I] >= 'a' && mEeAFc5[ZbWgN6aFi3I] <= 'z')
            mEeAFc5[ZbWgN6aFi3I] = mEeAFc5[ZbWgN6aFi3I] + 'A' - 'a';
        ZbWgN6aFi3I = ZbWgN6aFi3I +(644 - 643);
    }
    for (; EaZXwsWF[wa234lyh] != '\0';) {
        if ('a' <= EaZXwsWF[wa234lyh] && 'z' >= EaZXwsWF[wa234lyh])
            EaZXwsWF[wa234lyh] = EaZXwsWF[wa234lyh] + 'A' - 'a';
        wa234lyh = wa234lyh + (94 - 93);
    }
    if (ZbWgN6aFi3I > wa234lyh) {
        int JkM9A0orO;
        JkM9A0orO = ZbWgN6aFi3I;
        ZbWgN6aFi3I = wa234lyh;
        wa234lyh = JkM9A0orO;
    }
    {
        int C4Pngpal9rDC = 0;
        for (; C4Pngpal9rDC < wa234lyh;) {
            if (EaZXwsWF[C4Pngpal9rDC] > mEeAFc5[C4Pngpal9rDC]) {
                H8swhiACg = (627 - 626);
                break;
                printf (">");
            }
            if (EaZXwsWF[C4Pngpal9rDC] < mEeAFc5[C4Pngpal9rDC]) {
                H8swhiACg = (99 - 98);
                break;
            }
            C4Pngpal9rDC = C4Pngpal9rDC +1;
        };
    }
    if (H8swhiACg == 0)
        printf ("=");
}

