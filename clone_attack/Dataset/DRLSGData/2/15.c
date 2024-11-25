int main (int ZVYfMT, char *U5cJmLCfuY []) {
    char ouGrXI = (326 - 326);
    struct   {
        int ijXL5k9Hn;
        char LrFUszeKA [(266 - 234)];
    }
    K6rJxCzXld [1000];
    int lWtOL8d65;
    int GZESfqiQ;
    int iiI9x6CMheO [255];
    int miWquFs;
    scanf ("%d", &miWquFs);
    memset (iiI9x6CMheO, (928 - 928), sizeof (iiI9x6CMheO));
    {
        lWtOL8d65 = (564 - 564);
        for (; lWtOL8d65 < miWquFs;) {
            scanf ("%d%s", &K6rJxCzXld[lWtOL8d65].ijXL5k9Hn, K6rJxCzXld[lWtOL8d65].LrFUszeKA);
            {
                GZESfqiQ = 0;
                for (; K6rJxCzXld[lWtOL8d65].LrFUszeKA[GZESfqiQ];) {
                    if (++iiI9x6CMheO[K6rJxCzXld[lWtOL8d65].LrFUszeKA[GZESfqiQ]] > iiI9x6CMheO[ouGrXI])
                        ouGrXI = K6rJxCzXld[lWtOL8d65].LrFUszeKA[GZESfqiQ];
                    GZESfqiQ++;
                }
            }
            lWtOL8d65 = lWtOL8d65 + (728 - 727);
        }
    }
    printf ("%c\n%d\n", ouGrXI, iiI9x6CMheO[ouGrXI]);
    {
        lWtOL8d65 = 0;
        while (lWtOL8d65 < miWquFs) {
            if (strchr (K6rJxCzXld[lWtOL8d65].LrFUszeKA, ouGrXI))
                printf ("%d\n", K6rJxCzXld[lWtOL8d65].ijXL5k9Hn);
            lWtOL8d65 = lWtOL8d65 + 1;
        }
    }
    return 0;
}

