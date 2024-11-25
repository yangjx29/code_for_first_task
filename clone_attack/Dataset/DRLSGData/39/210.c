void  main () {
    int s60hXJYVER;
    struct   student {
        char zGBt26 [(285 - 265)];
        int lrKPtX16;
        int py;
        char xgoGiB;
        char w;
        int ZuV4CGos;
        int jj;
    }
    B9F8DMtmVA [(138 - 38)];
    int i;
    int C3RGmTMuxhW2;
    int LefWIXRb;
    char Ns5RSBJEakQ [(918 - 898)];
    scanf ("%d", &C3RGmTMuxhW2);
    {
        i = (1440 - 947) - (618 - 125);
        for (; C3RGmTMuxhW2 > i;) {
            scanf ("%s %d %d %c %c %d", &B9F8DMtmVA[i].zGBt26, &B9F8DMtmVA[i].lrKPtX16, &B9F8DMtmVA[i].py, &B9F8DMtmVA[i].xgoGiB, &B9F8DMtmVA[i].w, &B9F8DMtmVA[i].ZuV4CGos);
            B9F8DMtmVA[i].jj = (107 - 107);
            if ((951 - 861) < B9F8DMtmVA[i].lrKPtX16)
                B9F8DMtmVA[i].jj += (2350 - 350);
            if ((916 - 836) < B9F8DMtmVA[i].lrKPtX16 && B9F8DMtmVA[i].ZuV4CGos >= (729 - 728))
                B9F8DMtmVA[i].jj += (8928 - 928);
            if (B9F8DMtmVA[i].lrKPtX16 > (460 - 375) && !('Y' != B9F8DMtmVA[i].w))
                B9F8DMtmVA[i].jj += (1312 - 312);
            if ((735 - 650) < B9F8DMtmVA[i].lrKPtX16 && B9F8DMtmVA[i].py > (122 - 42))
                B9F8DMtmVA[i].jj += (4228 - 228);
            if (B9F8DMtmVA[i].py > (678 - 598) && B9F8DMtmVA[i].xgoGiB == 'Y')
                B9F8DMtmVA[i].jj += (1627 - 777);
            i = i + 1;
        }
    }
    s60hXJYVER = (781 - 781);
    {
        i = (1868 - 883) - (1286 - 301);
        for (; i < C3RGmTMuxhW2;) {
            s60hXJYVER += B9F8DMtmVA[i].jj;
            i++;
        }
    }
    {
        i = (315 - 181) - 134;
        for (; i < C3RGmTMuxhW2 -(54 - 53);) {
            if (B9F8DMtmVA[i].jj >= B9F8DMtmVA[i + (321 - 320)].jj) {
                LefWIXRb = B9F8DMtmVA[i].jj;
                strcpy (Ns5RSBJEakQ, B9F8DMtmVA[i].zGBt26);
                strcpy (B9F8DMtmVA[i].zGBt26, B9F8DMtmVA[i + (437 - 436)].zGBt26);
                B9F8DMtmVA[i].jj = B9F8DMtmVA[i + (144 - 143)].jj;
                strcpy (B9F8DMtmVA[i + (631 - 630)].zGBt26, Ns5RSBJEakQ);
                B9F8DMtmVA[i + (840 - 839)].jj = LefWIXRb;
            }
            i++;
        }
    }
    printf ("%s\n%d\n%d\n", B9F8DMtmVA[C3RGmTMuxhW2 -(664 - 663)].zGBt26, B9F8DMtmVA[C3RGmTMuxhW2 -(97 - 96)].jj, s60hXJYVER);
}

