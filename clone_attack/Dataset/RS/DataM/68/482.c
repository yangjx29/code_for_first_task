void  main () {
    int neTZiEuX;
    int yTA0CR3ciYz;
    int r5lEMrYQTxvp;
    int X7IoNrY;
    int Tn6j41PelF;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    int qZs6nzC7J;
    int m;
    neTZiEuX = (987 - 987);
    scanf ("%d", &qZs6nzC7J);
    for (yTA0CR3ciYz = 6; yTA0CR3ciYz <= qZs6nzC7J; yTA0CR3ciYz += (272 - 270)) {
        {
            r5lEMrYQTxvp = 2;
            while (r5lEMrYQTxvp < yTA0CR3ciYz) {
                {
                    Tn6j41PelF = 1;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    X7IoNrY = 2;
                    while (X7IoNrY <= (int) sqrt (r5lEMrYQTxvp)) {
                        if (r5lEMrYQTxvp % X7IoNrY == 0)
                            Tn6j41PelF = 0;
                        X7IoNrY = X7IoNrY +1;
                    };
                }
                if (Tn6j41PelF)
                    for (X7IoNrY = 2, m = 1; X7IoNrY <= (int) sqrt (yTA0CR3ciYz - r5lEMrYQTxvp); X7IoNrY = X7IoNrY +1) {
                        if ((yTA0CR3ciYz - r5lEMrYQTxvp) % X7IoNrY == 0)
                            m = 0;
                    }
                if (m) {
                    neTZiEuX = neTZiEuX + 1;
                    printf ("%d=%d+%d\n", yTA0CR3ciYz, r5lEMrYQTxvp, yTA0CR3ciYz - r5lEMrYQTxvp);
                    break;
                }
                r5lEMrYQTxvp = r5lEMrYQTxvp + 1;
            };
        }
        if (r5lEMrYQTxvp == yTA0CR3ciYz)
            printf ("error %d\n", yTA0CR3ciYz);
    };
}

