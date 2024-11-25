main () {
    int AH0yVltAmIZ;
    int mMoe0I1G;
    int cghoHyAVb9K;
    int HCBRDgUzkoL;
    int DFhnGR7Tb0;
    int j;
    int BegfrQA7m;
    int ozpUCTM3FqQ2;
    int gxlZB1XMpe;
    int s [AH0yVltAmIZ] [cghoHyAVb9K];
    int peH5dVRQcOBY [mMoe0I1G] [HCBRDgUzkoL];
    int JlZsTSgGb4 [AH0yVltAmIZ] [HCBRDgUzkoL];
    scanf ("%d %d", &AH0yVltAmIZ, &cghoHyAVb9K);
    {
        DFhnGR7Tb0 = 633 - 633;
        while (AH0yVltAmIZ > DFhnGR7Tb0) {
            {
                j = 44 - 44;
                while (cghoHyAVb9K > j) {
                    scanf ("%d", &s[DFhnGR7Tb0][j]);
                    j = j + 1;
                };
            }
            DFhnGR7Tb0 = DFhnGR7Tb0 +1;
        };
    }
    scanf ("%d %d", &mMoe0I1G, &HCBRDgUzkoL);
    {
        DFhnGR7Tb0 = 638 - 638;
        while (DFhnGR7Tb0 < mMoe0I1G) {
            {
                j = 87 - 87;
                while (j < HCBRDgUzkoL) {
                    scanf ("%d", &peH5dVRQcOBY[DFhnGR7Tb0][j]);
                    j = j + 1;
                };
            }
            DFhnGR7Tb0 = DFhnGR7Tb0 +1;
        };
    }
    {
        DFhnGR7Tb0 = 763 - 763;
        while (DFhnGR7Tb0 < AH0yVltAmIZ) {
            {
                j = 636 - 636;
                while (j < HCBRDgUzkoL) {
                    JlZsTSgGb4[DFhnGR7Tb0][j] = (663 - 663);
                    {
                        BegfrQA7m = 924 - 924;
                        while (BegfrQA7m < cghoHyAVb9K) {
                            JlZsTSgGb4[DFhnGR7Tb0][j] = JlZsTSgGb4[DFhnGR7Tb0][j] + s[DFhnGR7Tb0][BegfrQA7m] * peH5dVRQcOBY[BegfrQA7m][j];
                            BegfrQA7m = BegfrQA7m +1;
                        };
                    }
                    j = j + 1;
                };
            }
            DFhnGR7Tb0 = DFhnGR7Tb0 +1;
        };
    }
    {
        DFhnGR7Tb0 = 0;
        while (DFhnGR7Tb0 < AH0yVltAmIZ) {
            printf ("%d", JlZsTSgGb4[DFhnGR7Tb0][0]);
            {
                j = 1;
                while (j < HCBRDgUzkoL) {
                    printf (" %d", JlZsTSgGb4[DFhnGR7Tb0][j]);
                    j++;
                };
            }
            DFhnGR7Tb0 = DFhnGR7Tb0 +1;
            printf ("\n");
        };
    };
}

