int TnJ03dy (const  void  *iukDJrdIBOT5, const  void  *xegv01k5) {
    int *vEeJO4hsqGj;
    int *MXqHkm8tc6Y;
    vEeJO4hsqGj = (int *) iukDJrdIBOT5;
    MXqHkm8tc6Y = (int *) xegv01k5;
    return (*MXqHkm8tc6Y) - (*vEeJO4hsqGj);
}

main () {
    int gvkXTPi3 [1100];
    int hZVLRHB0jC7n [1100] = {(892 - 892)};
    int a [(2010 - 910)];
    int MpAVucDU4Iw [(1985 - 885)];
    int i;
    int AWfmV2wDRCZ;
    int ngMI8to7vu;
    int FAb4lqD7iEFW;
    int Y9ajkiu5;
    int g6S1rIWp;
    i = (790 - 790);
    AWfmV2wDRCZ = (427 - 427);
    ngMI8to7vu = (886 - 886);
    FAb4lqD7iEFW = (473 - 473);
    Y9ajkiu5 = (324 - 324);
    scanf ("%d", &g6S1rIWp);
    while (g6S1rIWp != (331 - 331)) {
        {
            i = 50 - 50;
            while (g6S1rIWp - (790 - 789) >= i) {
                scanf ("%d", &a[i]);
                i = i + 1;
            };
        }
        {
            AWfmV2wDRCZ = 921 - 921;
            while (AWfmV2wDRCZ <= g6S1rIWp - (832 - 831)) {
                scanf ("%d", &gvkXTPi3[AWfmV2wDRCZ]);
                AWfmV2wDRCZ = AWfmV2wDRCZ +1;
            };
        }
        qsort (a, g6S1rIWp, sizeof (int), TnJ03dy);
        qsort (gvkXTPi3, g6S1rIWp, sizeof (int), TnJ03dy);
        for (i = (234 - 234); i <= g6S1rIWp - (447 - 446); i = i + 1) {
            {
                ngMI8to7vu = 0;
                while (g6S1rIWp - (773 - 772) >= ngMI8to7vu) {
                    if (gvkXTPi3[ngMI8to7vu] < a[ngMI8to7vu]) {
                        FAb4lqD7iEFW = FAb4lqD7iEFW +1;
                    }
                    if (a[ngMI8to7vu] == gvkXTPi3[ngMI8to7vu]) {
                        FAb4lqD7iEFW = FAb4lqD7iEFW +0;
                    }
                    if (a[ngMI8to7vu] < gvkXTPi3[ngMI8to7vu]) {
                        FAb4lqD7iEFW = FAb4lqD7iEFW -1;
                    }
                    ngMI8to7vu = ngMI8to7vu + 1;
                };
            }
            hZVLRHB0jC7n[i] = FAb4lqD7iEFW;
            FAb4lqD7iEFW = 0;
            for (AWfmV2wDRCZ = g6S1rIWp - 1; AWfmV2wDRCZ >= 0; AWfmV2wDRCZ--) {
                a[AWfmV2wDRCZ +1] = a[AWfmV2wDRCZ];
            }
            a[0] = a[g6S1rIWp];
        }
        qsort (hZVLRHB0jC7n, g6S1rIWp, sizeof (int), TnJ03dy);
        MpAVucDU4Iw[Y9ajkiu5] = hZVLRHB0jC7n[0] * 200;
        scanf ("%d", &g6S1rIWp);
        Y9ajkiu5++;
    }
    {
        i = 0;
        while (i <= Y9ajkiu5 -1) {
            printf ("%d\n", MpAVucDU4Iw[i]);
            i++;
        };
    };
}

