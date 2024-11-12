int main () {
    int XMfmux7D;
    int qefF82TKG9Dq [150] [150] = {0};
    int x1;
    int fRD2mWVjaCv;
    int mdoI3akVAlzh;
    int y2;
    int i;
    int j;
    int a [(1099 - 949)] [150] = {0};
    int b [150] [150] = {0};
    scanf ("%d %d", &x1, &mdoI3akVAlzh);
    {
        i = 0;
        while (x1 > i) {
            {
                j = 0;
                while (j < mdoI3akVAlzh) {
                    scanf ("%d", &a[i][j]);
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    scanf ("%d %d", &fRD2mWVjaCv, &y2);
    {
        i = 0;
        while (i < fRD2mWVjaCv) {
            {
                j = 0;
                while (y2 > j) {
                    scanf ("%d", &b[i][j]);
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < x1) {
            for (j = 0; j < y2; j = j + 1) {
                XMfmux7D = 0;
                while (mdoI3akVAlzh > XMfmux7D) {
                    qefF82TKG9Dq[i][j] = qefF82TKG9Dq[i][j] + a[i][XMfmux7D] * b[XMfmux7D][j];
                    XMfmux7D = XMfmux7D +1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < x1) {
            {
                j = 0;
                while (y2 - 1 > j) {
                    printf ("%d ", qefF82TKG9Dq[i][j]);
                    j++;
                };
            }
            printf ("%d", qefF82TKG9Dq[i][y2 - 1]);
            i = i + 1;
            printf ("\n");
        };
    }
    return 0;
}

