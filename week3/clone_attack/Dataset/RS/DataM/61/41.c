void  main () {
    int t;
    int WmS3axgE;
    int j;
    int a [10] [21];
    scanf ("%d\n", &t);
    {
        WmS3axgE = 130 - 130;
        while (t > WmS3axgE) {
            scanf ("%d\n", *(a + WmS3axgE));
            WmS3axgE++;
        };
    }
    {
        WmS3axgE = 0;
        while (WmS3axgE < t) {
            *(*(a + WmS3axgE) + 2) = 1;
            *(*(a + WmS3axgE) + 1) = 1;
            {
                j = 170 - 167;
                while (j <= **(a + WmS3axgE)) {
                    *(*(a + WmS3axgE) + j) = *(*(a + WmS3axgE) + j - 1) + *(*(a + WmS3axgE) + j - 2);
                    j++;
                };
            }
            printf ("%d\n", *(*(a + WmS3axgE) + --j));
            WmS3axgE++;
        };
    };
}

