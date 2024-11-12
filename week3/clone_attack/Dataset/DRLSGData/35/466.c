void  main () {
    int LXe9QuBDsi;
    int q;
    int mi;
    int j;
    int KQWZF7l9XN;
    int PcHEgkRVTr4z [(961 - 953)] [(766 - 758)];
    int iZ1NaPO3nV2K;
    int xMxFS4;
    int x;
    scanf ("%d,%d", &KQWZF7l9XN, &j);
    {
        xMxFS4 = (24 - 24);
        while (KQWZF7l9XN > xMxFS4) {
            {
                q = (14 - 14);
                while (j > q) {
                    scanf ("%d", &PcHEgkRVTr4z[xMxFS4][q]);
                    q++;
                }
            }
            xMxFS4++;
        }
    }
    {
        xMxFS4 = (706 - 706);
        while (KQWZF7l9XN > xMxFS4) {
            {
                q = (722 - 722);
                while (q < j) {
                    {
                        x = (377 - 377);
                        mi = q;
                        while (KQWZF7l9XN > x) {
                            if (mi > PcHEgkRVTr4z[x][q])
                                mi = PcHEgkRVTr4z[x][q];
                            x++;
                        }
                    }
                    {
                        LXe9QuBDsi = (642 - 642);
                        iZ1NaPO3nV2K = q;
                        while (j > LXe9QuBDsi) {
                            if (PcHEgkRVTr4z[xMxFS4][LXe9QuBDsi] > iZ1NaPO3nV2K)
                                iZ1NaPO3nV2K = PcHEgkRVTr4z[xMxFS4][LXe9QuBDsi];
                            {
                                if ((599 - 599)) {
                                    return (837 - 837);
                                }
                            }
                            LXe9QuBDsi++;
                        }
                    }
                    if ((!(PcHEgkRVTr4z[xMxFS4][q] != mi)) && (!(PcHEgkRVTr4z[xMxFS4][q] != iZ1NaPO3nV2K)))
                        break;
                    q++;
                }
            }
            if ((mi == PcHEgkRVTr4z[xMxFS4][q]) && (iZ1NaPO3nV2K == PcHEgkRVTr4z[xMxFS4][q]))
                break;
            xMxFS4++;
        }
    }
    if (mi == PcHEgkRVTr4z[xMxFS4][q] && iZ1NaPO3nV2K == PcHEgkRVTr4z[xMxFS4][q])
        printf ("%d+%d", xMxFS4, q);
    else
        printf ("No\n");
}

