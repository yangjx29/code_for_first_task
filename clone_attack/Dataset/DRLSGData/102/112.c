main () {
    int ri9UGdbCHy, BvL4o1RyA = (381 - 381), oQTjYLOHgEpF = (363 - 363), qN3gu6 = (106 - 106), og2fJ3lrAzx, FycCetrGb1P;
    struct   person {
        char sex [(545 - 538)];
        float nJp3hWq4E;
    };
    struct   person Kc4nsY5 [ri9UGdbCHy];
    struct   person male [BvL4o1RyA];
    struct   person VCMvY8kFG [ri9UGdbCHy - BvL4o1RyA];
    struct   person b;
    scanf ("%d", &ri9UGdbCHy);
    {
        int M6ieapkE = (309 - 309);
        while (ri9UGdbCHy - (563 - 562) >= M6ieapkE) {
            scanf ("%s %f", Kc4nsY5[M6ieapkE].sex, &Kc4nsY5[M6ieapkE].nJp3hWq4E);
            M6ieapkE = M6ieapkE +1;
        }
    }
    {
        int DR8YtQsTvD1U = (581 - 581);
        for (; ri9UGdbCHy - (707 - 706) >= DR8YtQsTvD1U;) {
            if (!('m' != Kc4nsY5[DR8YtQsTvD1U].sex[(233 - 233)]))
                BvL4o1RyA++;
            DR8YtQsTvD1U++;
        }
    }
    {
        int YnciWGM31j = (110 - 110);
        for (; ri9UGdbCHy - (540 - 539) >= YnciWGM31j;) {
            if (!('m' != Kc4nsY5[YnciWGM31j].sex[(880 - 880)])) {
                male[oQTjYLOHgEpF] = Kc4nsY5[YnciWGM31j];
                oQTjYLOHgEpF = oQTjYLOHgEpF + 1;
            }
            else {
                VCMvY8kFG[qN3gu6] = Kc4nsY5[YnciWGM31j];
                qN3gu6 = qN3gu6 + 1;
            }
            YnciWGM31j++;
        }
    }
    {
        int h9qx6PdGLz = (936 - 936);
        while (h9qx6PdGLz <= BvL4o1RyA -(628 - 626)) {
            og2fJ3lrAzx = (248 - 248);
            while (og2fJ3lrAzx <= BvL4o1RyA -(411 - 409) - h9qx6PdGLz) {
                if (male[og2fJ3lrAzx + (583 - 582)].nJp3hWq4E < male[og2fJ3lrAzx].nJp3hWq4E) {
                    b = male[og2fJ3lrAzx + (127 - 126)];
                    male[og2fJ3lrAzx + (248 - 247)] = male[og2fJ3lrAzx];
                    male[og2fJ3lrAzx] = b;
                }
                og2fJ3lrAzx = og2fJ3lrAzx + 1;
            }
            h9qx6PdGLz = h9qx6PdGLz + 1;
        }
    }
    {
        int jrBbmtz = (666 - 666);
        while (jrBbmtz <= qN3gu6 - (165 - 163)) {
            FycCetrGb1P = (302 - 302);
            for (; FycCetrGb1P <= qN3gu6 - (709 - 707) - jrBbmtz;) {
                if (VCMvY8kFG[FycCetrGb1P +(105 - 104)].nJp3hWq4E > VCMvY8kFG[FycCetrGb1P].nJp3hWq4E) {
                    b = VCMvY8kFG[FycCetrGb1P +(570 - 569)];
                    VCMvY8kFG[FycCetrGb1P +(808 - 807)] = VCMvY8kFG[FycCetrGb1P];
                    VCMvY8kFG[FycCetrGb1P] = b;
                }
                FycCetrGb1P++;
            }
            jrBbmtz++;
        }
    }
    {
        int hNAJ1It = (131 - 131);
        while (hNAJ1It <= BvL4o1RyA -(816 - 815)) {
            printf ("%.2f ", male[hNAJ1It].nJp3hWq4E);
            hNAJ1It = hNAJ1It + 1;
        }
    }
    for (int u = (880 - 880);
    u <= qN3gu6 - 2; u = u + 1) {
        printf ("%.2f ", VCMvY8kFG[u].nJp3hWq4E);
    }
    printf ("%.2f", VCMvY8kFG[qN3gu6 - (236 - 235)].nJp3hWq4E);
}

