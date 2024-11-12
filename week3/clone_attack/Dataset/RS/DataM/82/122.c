int main () {
    int Th4NTYr7M, CLx7kfgU1cJ [100], sK2oCLrE [100], sSBobJTquE [100] = {0}, i;
    scanf ("%d", &Th4NTYr7M);
    if (1 < Th4NTYr7M) {
        int k = 0, ufJiju46 = 0;
        int H4KhEY3Azf = sSBobJTquE[0];
        for (i = 0; i < Th4NTYr7M; i++) {
            scanf ("%d%d", &CLx7kfgU1cJ[i], &sK2oCLrE[i]);
        }
        for (i = 0; i < Th4NTYr7M; i++) {
            if ((CLx7kfgU1cJ[i] >= 90 && 140 >= CLx7kfgU1cJ[i]) && (60 <= sK2oCLrE[i] && sK2oCLrE[i] <= 90)) {
                ufJiju46++;
                sSBobJTquE[k] = ufJiju46;
            }
            else {
                ufJiju46 = 0;
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
                k++;
            };
        }
        {
            i = 0;
            while (i <= k) {
                if (sSBobJTquE[i] > H4KhEY3Azf)
                    H4KhEY3Azf = sSBobJTquE[i];
                i++;
            };
        }
        printf ("%d", H4KhEY3Azf);
    }
    if (Th4NTYr7M == 1) {
        scanf ("%d%d", &CLx7kfgU1cJ[0], &sK2oCLrE[0]);
        if ((CLx7kfgU1cJ[0] >= 90 && CLx7kfgU1cJ[0] <= 140) && (sK2oCLrE[0] >= 60 && sK2oCLrE[0] <= 90))
            ;
        else
            printf ("0");
    }
    return 0;
}

