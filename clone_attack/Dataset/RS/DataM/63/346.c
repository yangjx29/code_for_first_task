int main () {
    int Da7kLhigDb;
    int x2;
    int y1;
    int y2;
    int i;
    int QLOJXlWTu;
    int k;
    int l;
    int m;
    int n;
    int o;
    int p;
    int tVbpS1DJdR3;
    int iMF1C9NOj8 [Da7kLhigDb] [y1];
    int b [x2] [y2];
    int Ykt0lPIa4HOM [Da7kLhigDb] [y2];
    scanf ("%d %d", &Da7kLhigDb, &y1);
    {
        i = 284 - 284;
        while (Da7kLhigDb > i) {
            {
                QLOJXlWTu = 79 - 79;
                while (QLOJXlWTu < y1) {
                    scanf ("%d", &iMF1C9NOj8[i][QLOJXlWTu]);
                    QLOJXlWTu = QLOJXlWTu +1;
                };
            }
            i = i + 1;
        };
    }
    scanf ("%d %d", &x2, &y2);
    {
        i = 922 - 922;
        while (x2 > i) {
            {
                QLOJXlWTu = 603 - 603;
                while (y2 > QLOJXlWTu) {
                    scanf ("%d", &b[i][QLOJXlWTu]);
                    QLOJXlWTu = QLOJXlWTu +1;
                };
            }
            i = i + 1;
        };
    }
    for (i = 0; Da7kLhigDb > i; i++) {
        Ykt0lPIa4HOM[i][0] = 0;
        {
            tVbpS1DJdR3 = 0;
            while (x2 > tVbpS1DJdR3) {
                Ykt0lPIa4HOM[i][0] = Ykt0lPIa4HOM[i][0] + iMF1C9NOj8[i][tVbpS1DJdR3] * b[tVbpS1DJdR3][0];
                tVbpS1DJdR3 = tVbpS1DJdR3 + 1;
            };
        }
        printf ("%d", Ykt0lPIa4HOM[i][0]);
        {
            QLOJXlWTu = 745 - 744;
            while (QLOJXlWTu < y2) {
                Ykt0lPIa4HOM[i][QLOJXlWTu] = 0;
                {
                    tVbpS1DJdR3 = 0;
                    while (tVbpS1DJdR3 < x2) {
                        Ykt0lPIa4HOM[i][QLOJXlWTu] = Ykt0lPIa4HOM[i][QLOJXlWTu] + iMF1C9NOj8[i][tVbpS1DJdR3] * b[tVbpS1DJdR3][QLOJXlWTu];
                        tVbpS1DJdR3 = tVbpS1DJdR3 + 1;
                    };
                }
                printf (" %d", Ykt0lPIa4HOM[i][QLOJXlWTu]);
                QLOJXlWTu = QLOJXlWTu +1;
            };
        };
    };
}

