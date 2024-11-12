main () {
    int n [30];
    int nTdMiwbHK65B [30];
    int w50IdM1 [300];
    int VE0QOCB;
    int XGINcKQLHj;
    int i;
    int k;
    for (i = 0;; i++) {
        scanf ("%d %d", &n[i], &nTdMiwbHK65B[i]);
        if (n[i] == 0 && !(0 != nTdMiwbHK65B[i])) {
            VE0QOCB = i;
            break;
        };
    }
    for (i = 0; i < VE0QOCB; i++) {
        k = 1;
        for (XGINcKQLHj = 1; XGINcKQLHj <= n[i]; XGINcKQLHj++)
            w50IdM1[XGINcKQLHj] = XGINcKQLHj;
        for (; n[i] > 1; n[i]--) {
            XGINcKQLHj = 1;
            while (XGINcKQLHj <= n[i]) {
                if ((nTdMiwbHK65B[i] - XGINcKQLHj +k - 1) % n[i] == 0) {
                    k = XGINcKQLHj;
                    for (; XGINcKQLHj < n[i]; XGINcKQLHj++)
                        w50IdM1[XGINcKQLHj] = w50IdM1[XGINcKQLHj +1];
                }
                XGINcKQLHj++;
            };
        }
        printf ("%d\n", w50IdM1[1]);
    };
}

