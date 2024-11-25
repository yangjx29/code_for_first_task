void  main () {
    int max1, UYP79v2D3p5;
    char m [1000];
    gets (m);
    int NIhg0Zp3V = (741 - 741), qyabBUvDrP2 = 0, HLCAtd6smk1 = 100, QSF8RyDU = 0, k;
    k = strlen (m);
    UYP79v2D3p5 = 0;
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
    max1 = 0;
    for (QSF8RyDU = 0; QSF8RyDU < k; QSF8RyDU++) {
        NIhg0Zp3V = NIhg0Zp3V +1;
        if ((m[QSF8RyDU +1] == ' ') || (QSF8RyDU == k - 1)) {
            QSF8RyDU = QSF8RyDU +1;
            if (NIhg0Zp3V > qyabBUvDrP2) {
                max1 = QSF8RyDU -NIhg0Zp3V+1;
                qyabBUvDrP2 = NIhg0Zp3V;
            }
            if (NIhg0Zp3V < HLCAtd6smk1) {
                UYP79v2D3p5 = QSF8RyDU -NIhg0Zp3V+1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                HLCAtd6smk1 = NIhg0Zp3V;
            }
            NIhg0Zp3V = 0;
        };
    }
    {
        QSF8RyDU = max1;
        while (QSF8RyDU < max1 + qyabBUvDrP2) {
            printf ("%c", m[QSF8RyDU]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            QSF8RyDU = QSF8RyDU +1;
        };
    }
    for (QSF8RyDU = UYP79v2D3p5; QSF8RyDU < UYP79v2D3p5 +HLCAtd6smk1; QSF8RyDU++) {
        printf ("%c", m[QSF8RyDU]);
    }
    printf ("\n");
}

