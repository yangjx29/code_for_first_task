void  main () {
    char Dkiq5t [5000];
    gets (Dkiq5t);
    int noRUMpydrG [400] = {0};
    int KUB9DnysqN;
    int n;
    int QRxg82Q;
    int b7Rc5m;
    n = strlen (Dkiq5t);
    for (KUB9DnysqN = 0, b7Rc5m = 0; KUB9DnysqN < n; KUB9DnysqN = KUB9DnysqN +1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (Dkiq5t[KUB9DnysqN] == ' ') {
            if (QRxg82Q == 0)
                b7Rc5m++;
            QRxg82Q = QRxg82Q +1;
        }
        else {
            if (noRUMpydrG[b7Rc5m] == 0)
                QRxg82Q = 0;
            noRUMpydrG[b7Rc5m]++;
        };
    }
    for (KUB9DnysqN = 0; KUB9DnysqN < b7Rc5m; KUB9DnysqN = KUB9DnysqN +1)
        printf ("%d,", noRUMpydrG[KUB9DnysqN]);
    printf ("%d", noRUMpydrG[KUB9DnysqN]);
}

