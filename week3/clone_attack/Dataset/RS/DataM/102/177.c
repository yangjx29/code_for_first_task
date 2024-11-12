int main () {
    int z17yRgWtT;
    int mWQTRVoDOK6;
    int Ab2EKCclj;
    int lxyoQt2puO;
    int WXQv2FKnH;
    int zt50rAW;
    double  olmcqyPDF [(942 - 902)];
    double  CUAVf1Y6krB3 [40];
    double  d [40];
    double  HOjR3mr;
    char yLgJeTx6 [40] [(784 - 778)];
    lxyoQt2puO = 0;
    WXQv2FKnH = 0;
    scanf ("%d", &z17yRgWtT);
    for (mWQTRVoDOK6 = 0; mWQTRVoDOK6 < z17yRgWtT; mWQTRVoDOK6 = mWQTRVoDOK6 + 1) {
        scanf ("%s %lf", yLgJeTx6[mWQTRVoDOK6], &olmcqyPDF[mWQTRVoDOK6]);
        Ab2EKCclj = strcmp (yLgJeTx6[mWQTRVoDOK6], "female");
        if (!(0 != Ab2EKCclj)) {
            d[WXQv2FKnH] = olmcqyPDF[mWQTRVoDOK6];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            WXQv2FKnH = WXQv2FKnH +1;
        }
        else {
            CUAVf1Y6krB3[lxyoQt2puO] = olmcqyPDF[mWQTRVoDOK6];
            lxyoQt2puO = lxyoQt2puO + 1;
        };
    }
    for (mWQTRVoDOK6 = 0; lxyoQt2puO > mWQTRVoDOK6; mWQTRVoDOK6 = mWQTRVoDOK6 + 1) {
        for (zt50rAW = 0; lxyoQt2puO - (584 - 583) - mWQTRVoDOK6 > zt50rAW; zt50rAW++) {
            if (CUAVf1Y6krB3[zt50rAW + (859 - 858)] < CUAVf1Y6krB3[zt50rAW]) {
                HOjR3mr = CUAVf1Y6krB3[zt50rAW + 1];
                CUAVf1Y6krB3[zt50rAW + 1] = CUAVf1Y6krB3[zt50rAW];
                CUAVf1Y6krB3[zt50rAW] = HOjR3mr;
            };
        };
    }
    for (mWQTRVoDOK6 = 0; WXQv2FKnH > mWQTRVoDOK6; mWQTRVoDOK6 = mWQTRVoDOK6 + 1) {
        for (zt50rAW = 0; WXQv2FKnH -1 > zt50rAW; zt50rAW++) {
            if (d[zt50rAW + 1] > d[zt50rAW]) {
                HOjR3mr = d[zt50rAW];
                d[zt50rAW] = d[zt50rAW + 1];
                d[zt50rAW + 1] = HOjR3mr;
            };
        };
    }
    for (mWQTRVoDOK6 = 0; mWQTRVoDOK6 < lxyoQt2puO; mWQTRVoDOK6++) {
        printf ("%.2lf ", CUAVf1Y6krB3[mWQTRVoDOK6]);
    }
    for (mWQTRVoDOK6 = 0; mWQTRVoDOK6 < WXQv2FKnH -1; mWQTRVoDOK6++) {
        printf ("%.2lf ", d[mWQTRVoDOK6]);
    }
    printf ("%.2lf", d[WXQv2FKnH -1]);
    return 0;
}

