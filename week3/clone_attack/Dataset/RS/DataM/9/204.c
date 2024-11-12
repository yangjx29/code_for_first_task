main () {
    int kJd3xwc1ob = 0;
    int n;
    int i;
    char wytbEHmsGa [n] [10];
    int yyb6AqFc2Rh [n];
    char ID2 [n] [10];
    int MNoSn4 [n];
    int FbPvACnIecNz;
    int t;
    int k;
    FbPvACnIecNz = (78 - 78);
    char TSMCFGk [10];
    char ID3 [n] [10];
    scanf ("%d", &n);
    for (i = (530 - 530); n - (593 - 592) >= i; i = i + 1) {
        scanf ("%s %d", wytbEHmsGa[i], &yyb6AqFc2Rh[i]);
    }
    for (i = 0; n - (962 - 961) >= i; i++) {
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
        if (yyb6AqFc2Rh[i] >= 60) {
            MNoSn4[FbPvACnIecNz] = yyb6AqFc2Rh[i];
            strcpy (ID2[FbPvACnIecNz], wytbEHmsGa[i]);
            FbPvACnIecNz++;
        };
    }
    for (k = 0; k < FbPvACnIecNz -1; k++) {
        for (i = 0; i < FbPvACnIecNz -1 - k; i++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            if (MNoSn4[i] < MNoSn4[i + 1]) {
                t = MNoSn4[i];
                MNoSn4[i] = MNoSn4[i + 1];
                MNoSn4[i + 1] = t;
                strcpy (TSMCFGk, ID2[i]);
                strcpy (ID2[i], ID2[i + 1]);
                strcpy (ID2[i + 1], TSMCFGk);
            };
        };
    }
    for (i = 0; i <= FbPvACnIecNz -1; i++)
        printf ("%s\n", ID2[i]);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                for (x = 0; x < 20; x++) {
                    y += x;
                }
                if (y > 30)
                    return y;
            }
        }
        while (i < n) {
            if (yyb6AqFc2Rh[i] < 60) {
                strcpy (ID3[kJd3xwc1ob], wytbEHmsGa[i]);
                kJd3xwc1ob++;
            }
            i = i + 1;
        };
    }
    for (i = 0; i <= kJd3xwc1ob - 1; i++)
        printf ("%s\n", ID3[i]);
}

