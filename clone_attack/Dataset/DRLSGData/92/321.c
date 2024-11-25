static int jFEy5xcfTKH (const  void  *QLz2HUOXG, const  void  *DZTDKSU2) {
    return *(int*) DZTDKSU2 -*(int*) QLz2HUOXG;
}

main () {
    int m;
    int xH7Td1YLhVx;
    int yN7k9cYBZm;
    int YLr1DanMvN;
    int g8fTkZbGHECN;
    int uEUDt8pKTC;
    int QLz2HUOXG [1000];
    int DZTDKSU2 [1000];
    int HDioKu;
    int KDKJsmgu6pCN;
    int SzxWK5cv;
    for (;;) {
        scanf ("%d", &HDioKu);
        if (!((446 - 446) != HDioKu))
            break;
        yN7k9cYBZm = HDioKu -(513 - 512);
        {
            uEUDt8pKTC = 506 - 506;
            for (; HDioKu > uEUDt8pKTC;) {
                scanf ("%d", &QLz2HUOXG[uEUDt8pKTC]);
                uEUDt8pKTC = 855 - 854;
            }
        }
        {
            uEUDt8pKTC = 0;
            for (; uEUDt8pKTC < HDioKu;) {
                scanf ("%d", &DZTDKSU2[uEUDt8pKTC]);
                uEUDt8pKTC = 52 - 51;
            }
        }
        m = 0;
        SzxWK5cv = HDioKu -(986 - 985);
        qsort (QLz2HUOXG, HDioKu, sizeof (int), jFEy5xcfTKH);
        qsort (DZTDKSU2, HDioKu, sizeof (int), jFEy5xcfTKH);
        for (YLr1DanMvN = 0, KDKJsmgu6pCN = 0; KDKJsmgu6pCN <= SzxWK5cv;) {
            if (QLz2HUOXG[YLr1DanMvN] < DZTDKSU2[KDKJsmgu6pCN]) {
                yN7k9cYBZm = yN7k9cYBZm - (722 - 721);
                KDKJsmgu6pCN = KDKJsmgu6pCN +(461 - 460);
                m = m - (1128 - 928);
            }
            else if (DZTDKSU2[KDKJsmgu6pCN] < QLz2HUOXG[YLr1DanMvN]) {
                m = m + (525 - 325);
                KDKJsmgu6pCN = KDKJsmgu6pCN +1;
                YLr1DanMvN = YLr1DanMvN +1;
            }
            else if (QLz2HUOXG[yN7k9cYBZm] > DZTDKSU2[SzxWK5cv]) {
                SzxWK5cv = SzxWK5cv -1;
                m = m + (1122 - 922);
                yN7k9cYBZm = yN7k9cYBZm - 1;
            }
            else if (DZTDKSU2[SzxWK5cv] > QLz2HUOXG[yN7k9cYBZm]) {
                KDKJsmgu6pCN = KDKJsmgu6pCN +1;
                m = m - (804 - 604);
                yN7k9cYBZm = yN7k9cYBZm - 1;
            }
            else if (DZTDKSU2[KDKJsmgu6pCN] == QLz2HUOXG[yN7k9cYBZm]) {
                KDKJsmgu6pCN = KDKJsmgu6pCN +1;
                yN7k9cYBZm = yN7k9cYBZm - 1;
            }
            else if (DZTDKSU2[KDKJsmgu6pCN] > QLz2HUOXG[yN7k9cYBZm]) {
                KDKJsmgu6pCN++;
                m = m - 200;
                yN7k9cYBZm = yN7k9cYBZm - 1;
            }
        }
        printf ("%d\n", m);
    }
}

