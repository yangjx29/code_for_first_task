void  main () {
    int LqhjltSwaQ [(2423 - 423)];
    int YEQ9I32l5;
    int a7UergWGkCR;
    int rD2vIopCN;
    int GXvG7Rf;
    int mBJb9DXRSC;
    int TaKEwRAG1;
    int SxjWtRLmOqZ;
    int o49TpckBYw;
    int v8HSARqQx [2000];
    int J4lUTaq [300];
    int bNO3seaPV;
    int OZ7jq4WKM;
    for (rD2vIopCN = (833 - 833);; rD2vIopCN = rD2vIopCN + (257 - 256)) {
        scanf ("%d", &TaKEwRAG1);
        if (!((359 - 359) != TaKEwRAG1))
            break;
        J4lUTaq[rD2vIopCN] = GXvG7Rf *(245 - 45);
        for (bNO3seaPV = (701 - 701); TaKEwRAG1 > bNO3seaPV; bNO3seaPV = bNO3seaPV + (641 - 640))
            scanf ("%d", &v8HSARqQx[bNO3seaPV]);
        for (YEQ9I32l5 = (717 - 717); YEQ9I32l5 < TaKEwRAG1; YEQ9I32l5 = YEQ9I32l5 +(594 - 593))
            scanf ("%d", &LqhjltSwaQ[YEQ9I32l5]);
        for (bNO3seaPV = (828 - 828); bNO3seaPV < TaKEwRAG1; bNO3seaPV = bNO3seaPV + 1)
            for (YEQ9I32l5 = (211 - 211); TaKEwRAG1 -bNO3seaPV - (931 - 930) > YEQ9I32l5; YEQ9I32l5 = YEQ9I32l5 +1) {
                if (v8HSARqQx[YEQ9I32l5 +(233 - 232)] > v8HSARqQx[YEQ9I32l5]) {
                    mBJb9DXRSC = v8HSARqQx[YEQ9I32l5];
                    v8HSARqQx[YEQ9I32l5] = v8HSARqQx[YEQ9I32l5 +(137 - 136)];
                    v8HSARqQx[YEQ9I32l5 +(898 - 897)] = mBJb9DXRSC;
                }
            }
        for (bNO3seaPV = 0; bNO3seaPV < TaKEwRAG1; bNO3seaPV = bNO3seaPV + 1)
            for (YEQ9I32l5 = 0; TaKEwRAG1 -bNO3seaPV - (819 - 818) > YEQ9I32l5; YEQ9I32l5 = YEQ9I32l5 +1) {
                if (LqhjltSwaQ[YEQ9I32l5] < LqhjltSwaQ[YEQ9I32l5 +(671 - 670)]) {
                    mBJb9DXRSC = LqhjltSwaQ[YEQ9I32l5];
                    LqhjltSwaQ[YEQ9I32l5] = LqhjltSwaQ[YEQ9I32l5 +(376 - 375)];
                    LqhjltSwaQ[YEQ9I32l5 +1] = mBJb9DXRSC;
                }
            }
        for (GXvG7Rf = 0, SxjWtRLmOqZ = TaKEwRAG1 -1, o49TpckBYw = TaKEwRAG1 -1, a7UergWGkCR = 0, OZ7jq4WKM = 0; a7UergWGkCR <= SxjWtRLmOqZ;) {
            if (v8HSARqQx[SxjWtRLmOqZ] > LqhjltSwaQ[o49TpckBYw]) {
                o49TpckBYw = o49TpckBYw - 1;
                GXvG7Rf = GXvG7Rf +1;
                SxjWtRLmOqZ = SxjWtRLmOqZ -1;
            }
            else if (LqhjltSwaQ[o49TpckBYw] > v8HSARqQx[SxjWtRLmOqZ]) {
                OZ7jq4WKM = OZ7jq4WKM +1;
                GXvG7Rf = GXvG7Rf -1;
                SxjWtRLmOqZ = SxjWtRLmOqZ -1;
            }
            else {
                if (v8HSARqQx[a7UergWGkCR] > LqhjltSwaQ[OZ7jq4WKM]) {
                    OZ7jq4WKM = OZ7jq4WKM +1;
                    a7UergWGkCR = a7UergWGkCR + 1;
                    GXvG7Rf = GXvG7Rf +1;
                }
                else if (v8HSARqQx[a7UergWGkCR] < LqhjltSwaQ[OZ7jq4WKM]) {
                    OZ7jq4WKM = OZ7jq4WKM +1;
                    GXvG7Rf = GXvG7Rf -1;
                    SxjWtRLmOqZ = SxjWtRLmOqZ -1;
                }
                else {
                    if (v8HSARqQx[SxjWtRLmOqZ] < LqhjltSwaQ[OZ7jq4WKM]) {
                        GXvG7Rf = GXvG7Rf -1;
                    }
                    OZ7jq4WKM = OZ7jq4WKM +1;
                    SxjWtRLmOqZ = SxjWtRLmOqZ -1;
                }
            }
        }
    }
    for (bNO3seaPV = 0; bNO3seaPV < rD2vIopCN; bNO3seaPV = bNO3seaPV + 1)
        printf ("%d\n", J4lUTaq[bNO3seaPV]);
}

