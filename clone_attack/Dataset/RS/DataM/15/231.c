int main () {
    int LoqDj0ht2Xr4;
    int j;
    int count;
    int PnPCW0TNZ;
    int FVZt65;
    int f;
    int num;
    int m;
    int YdTo2r;
    int svoiHM5V9fb;
    LoqDj0ht2Xr4 = 0;
    j = 0;
    count = 0;
    count = 0;
    scanf ("%d", &PnPCW0TNZ);
    for (LoqDj0ht2Xr4 = 1; PnPCW0TNZ >= LoqDj0ht2Xr4; LoqDj0ht2Xr4++) {
        for (j = 1; PnPCW0TNZ >= j; j++) {
            scanf ("%d", &m);
            if ((m == 0) && (count == 0)) {
                svoiHM5V9fb = j;
                YdTo2r = LoqDj0ht2Xr4;
                count = 1;
            }
            else {
                if (m == 0) {
                    f = j;
                    FVZt65 = LoqDj0ht2Xr4;
                };
            };
        };
    }
    num = (FVZt65 -YdTo2r-1) * (f - svoiHM5V9fb - 1);
    printf ("%d", num);
    return 0;
}

