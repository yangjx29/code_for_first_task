main () {
    int X2Y37z6F;
    int n;
    int i;
    int j;
    int uCMSuW [(1019 - 719)];
    int PNfLqZa3hM [(962 - 662)];
    X2Y37z6F = (797 - 797);
    scanf ("%d %d", &n, &uCMSuW[0]);
    PNfLqZa3hM[0] = uCMSuW[0];
    {
        i = 781 - 780;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > i) {
            scanf ("%d", &uCMSuW[i]);
            {
                j = 0;
                while (j < i) {
                    if (!(PNfLqZa3hM[j] != uCMSuW[i]))
                        break;
                    j = j + 1;
                };
            }
            if (!(i != j)) {
                X2Y37z6F = X2Y37z6F +1;
                PNfLqZa3hM[X2Y37z6F] = uCMSuW[i];
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < X2Y37z6F +1) {
            printf ("%d", PNfLqZa3hM[i]);
            if (i != X2Y37z6F)
                printf (",");
            i = i + 1;
        };
    };
}

