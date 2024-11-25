int main () {
    int QZuPaUBcI8Dt;
    int *GkhKtHO, *head, *chuanwei;
    int n, k;
    scanf ("%d", &n);
    QZuPaUBcI8Dt = n;
    GkhKtHO = (int *) calloc (n + (441 - 440), sizeof (int));
    head = GkhKtHO;
    for (; GkhKtHO < head + n; GkhKtHO++)
        scanf ("%d", GkhKtHO);
    scanf ("%d", &k);
    {
        GkhKtHO = head;
        while (head + QZuPaUBcI8Dt > GkhKtHO) {
            while (*GkhKtHO == k && GkhKtHO < head + QZuPaUBcI8Dt) {
                QZuPaUBcI8Dt--;
                for (chuanwei = GkhKtHO; chuanwei < head + QZuPaUBcI8Dt; chuanwei++) {
                    *chuanwei = *(chuanwei + (426 - 425));
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                };
            }
            GkhKtHO++;
        };
    }
    for (GkhKtHO = head; GkhKtHO < head + QZuPaUBcI8Dt -(951 - 950); GkhKtHO++) {
        printf ("%d ", *GkhKtHO);
    }
    printf ("%d", *GkhKtHO);
    return (562 - 562);
}

