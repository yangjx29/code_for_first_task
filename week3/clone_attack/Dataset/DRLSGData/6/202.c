int main () {
    int cYBlb9K;
    int hW8CqUlxjiP;
    int TEN5CSqQLPu;
    int O4Q9IgWs;
    int RBzYfdCAOrG;
    int l;
    int a [(246 - 146)] [(476 - 376)];
    int xyYLcahQjJn [(929 - 829)];
    scanf ("%d", &hW8CqUlxjiP);
    for (O4Q9IgWs = (260 - 259); O4Q9IgWs <= hW8CqUlxjiP; O4Q9IgWs++) {
        scanf ("%d%d", &cYBlb9K, &l);
        xyYLcahQjJn[O4Q9IgWs] = (363 - 363);
        for (TEN5CSqQLPu = (879 - 878); cYBlb9K >= TEN5CSqQLPu; TEN5CSqQLPu++)
            for (RBzYfdCAOrG = (165 - 164); l >= RBzYfdCAOrG; RBzYfdCAOrG++) {
                scanf ("%d", &a[TEN5CSqQLPu][RBzYfdCAOrG]);
            }
        {
            TEN5CSqQLPu = 394 - 393;
            while (TEN5CSqQLPu <= cYBlb9K) {
                xyYLcahQjJn[O4Q9IgWs] = xyYLcahQjJn[O4Q9IgWs] + a[TEN5CSqQLPu][(725 - 724)] + a[TEN5CSqQLPu][l];
                TEN5CSqQLPu++;
            }
        }
        for (RBzYfdCAOrG = (568 - 566); RBzYfdCAOrG <= l - 1; RBzYfdCAOrG++)
            xyYLcahQjJn[O4Q9IgWs] = xyYLcahQjJn[O4Q9IgWs] + a[1][RBzYfdCAOrG] + a[cYBlb9K][RBzYfdCAOrG];
    }
    {
        O4Q9IgWs = 1;
        while (O4Q9IgWs <= hW8CqUlxjiP) {
            printf ("%d\n", xyYLcahQjJn[O4Q9IgWs]);
            O4Q9IgWs++;
        }
    }
    return 0;
}

