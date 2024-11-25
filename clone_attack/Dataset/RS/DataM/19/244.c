void  main () {
    char a [1000], BY8Ixuas5 [100], c [100];
    gets (a);
    gets (BY8Ixuas5);
    gets (c);
    int YcjxMbGRDvPp, YxWnfd, gMxX8W, FHTCDVmWQKqs, j, k, Jvlq1eQPrbU, jDOpJs6 = 0;
    YcjxMbGRDvPp = strlen (a);
    YxWnfd = strlen (BY8Ixuas5);
    gMxX8W = strlen (c);
    {
        FHTCDVmWQKqs = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (FHTCDVmWQKqs < 1000) {
            for (j = 0; j < YxWnfd; j++)
                if (*(a + FHTCDVmWQKqs +j) != *(BY8Ixuas5 +j))
                    break;
            if ((j == YxWnfd &&*(a + FHTCDVmWQKqs +YxWnfd) == ' ' && !(' ' != *(a + FHTCDVmWQKqs -1))) || (j == YxWnfd &&FHTCDVmWQKqs == 0 && !(' ' != *(a + FHTCDVmWQKqs +YxWnfd))) || (j == YxWnfd &&FHTCDVmWQKqs == YcjxMbGRDvPp +jDOpJs6 * (gMxX8W - YxWnfd) - YxWnfd &&*(a + FHTCDVmWQKqs -1) == ' ')) {
                jDOpJs6++;
                if (gMxX8W <= YxWnfd) {
                    {
                        k = 0;
                        while (gMxX8W > k) {
                            *(a + FHTCDVmWQKqs +k) = *(c + k);
                            k++;
                        };
                    }
                    {
                        Jvlq1eQPrbU = 0;
                        while (Jvlq1eQPrbU < YcjxMbGRDvPp +jDOpJs6 * (gMxX8W - YxWnfd)) {
                            *(a + FHTCDVmWQKqs +gMxX8W + Jvlq1eQPrbU) = *(a + FHTCDVmWQKqs +YxWnfd+Jvlq1eQPrbU);
                            Jvlq1eQPrbU++;
                        };
                    };
                }
                if (YxWnfd < gMxX8W) {
                    for (Jvlq1eQPrbU = ((gMxX8W - YxWnfd) * jDOpJs6 + YcjxMbGRDvPp -1); FHTCDVmWQKqs +YxWnfd-1 < Jvlq1eQPrbU; Jvlq1eQPrbU--)
                        *(a + Jvlq1eQPrbU) = *(a + Jvlq1eQPrbU -(gMxX8W - YxWnfd));
                    for (k = 0; gMxX8W > k; k++)
                        *(a + FHTCDVmWQKqs +k) = *(c + k);
                };
            }
            FHTCDVmWQKqs = FHTCDVmWQKqs +1;
        };
    }
    for (FHTCDVmWQKqs = 0; (YcjxMbGRDvPp +jDOpJs6 * (gMxX8W - YxWnfd)) > FHTCDVmWQKqs; FHTCDVmWQKqs = FHTCDVmWQKqs +1)
        printf ("%c", *(a + FHTCDVmWQKqs));
}

