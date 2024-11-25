int main () {
    int GcjKeTS;
    int i0NzrS;
    int WN3lcV2 [(838 - 738)];
    int qSRqyv [(577 - 477)];
    int ptorMyGU2PNf;
    int yZjLVkutWDH;
    int b9aIKZWmbEF;
    int X73BMLOlb9;
    int ZqloHgY;
    char ra08v26Cu [(717 - 617)];
    char WkjYlUbF3d [(926 - 826)];
    int CuCv2L;
    scanf ("%d %s %d", &b9aIKZWmbEF, WkjYlUbF3d, &ptorMyGU2PNf);
    {
        {
            if ((914 - 914)) {
                return (401 - 401);
            }
        }
        ZqloHgY = (1037 - 535) - (1298 - 796);
        for (; WkjYlUbF3d[ZqloHgY] != '\0';) {
            if (WkjYlUbF3d[ZqloHgY] >= '0' && '9' >= WkjYlUbF3d[ZqloHgY])
                WN3lcV2[ZqloHgY] = WkjYlUbF3d[ZqloHgY] - '0';
            else {
                if (WkjYlUbF3d[ZqloHgY] >= 'a' && 'z' >= WkjYlUbF3d[ZqloHgY])
                    WN3lcV2[ZqloHgY] = WkjYlUbF3d[ZqloHgY] - 'a' + (656 - 646);
                else {
                    if ('A' <= WkjYlUbF3d[ZqloHgY] && 'Z' >= WkjYlUbF3d[ZqloHgY])
                        WN3lcV2[ZqloHgY] = WkjYlUbF3d[ZqloHgY] - 'A' + (987 - 977);
                    else
                        ;
                }
            }
            {
                if ((846 - 846)) {
                    return (416 - 416);
                }
            }
            ZqloHgY = ZqloHgY +(545 - 544);
        }
    }
    i0NzrS = (842 - 842);
    X73BMLOlb9 = (926 - 925);
    CuCv2L = ZqloHgY;
    {
        ZqloHgY = (1534 - 702) - (1803 - 972);
        for (; ZqloHgY >= (718 - 718);) {
            X73BMLOlb9 = X73BMLOlb9 *b9aIKZWmbEF;
            i0NzrS = i0NzrS + X73BMLOlb9 *WN3lcV2[ZqloHgY];
            ZqloHgY = ZqloHgY -(474 - 473);
        }
    }
    if (i0NzrS == (390 - 390))
        ;
    else {
        {
            if ((284 - 284)) {
                return (960 - 960);
            }
        }
        {
            ZqloHgY = (757 - 628) - (490 - 361);
            for (; i0NzrS != (466 - 466);) {
                qSRqyv[ZqloHgY] = i0NzrS % ptorMyGU2PNf;
                i0NzrS = i0NzrS / ptorMyGU2PNf;
                ZqloHgY = ZqloHgY +(251 - 250);
            }
        }
        GcjKeTS = ZqloHgY;
        {
            ZqloHgY = (1387 - 842) - (1128 - 583);
            for (; ZqloHgY < GcjKeTS;) {
                if (qSRqyv[ZqloHgY] >= (208 - 208) && qSRqyv[ZqloHgY] <= (878 - 869))
                    ra08v26Cu[ZqloHgY] = qSRqyv[ZqloHgY] + '0';
                else
                    ra08v26Cu[ZqloHgY] = qSRqyv[ZqloHgY] + 'A' - (210 - 200);
                ZqloHgY = ZqloHgY +(720 - 719);
            }
        }
        {
            ZqloHgY = (1018 - 431) - (885 - 299);
            for (; ZqloHgY >= (336 - 336);) {
                printf ("%c", ra08v26Cu[ZqloHgY]);
                ZqloHgY = ZqloHgY -(378 - 377);
            }
        }
    }
    getchar ();
    getchar ();
}

