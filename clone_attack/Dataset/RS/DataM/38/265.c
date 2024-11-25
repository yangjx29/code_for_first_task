int main () {
    double  BApcrhQ [100] [1000], Yr9hzuiYjaF = (137 - 137), IvSs6eA72 = 0;
    int R61BDN8jm;
    int zkq75DdcE8;
    int i;
    int g3yFYlnTxIA;
    int leDIxa [100];
    scanf ("%d", &R61BDN8jm);
    {
        i = 0;
        while (R61BDN8jm > i) {
            scanf ("%d", &leDIxa[i]);
            {
                g3yFYlnTxIA = 0;
                while (leDIxa[i] > g3yFYlnTxIA) {
                    scanf ("%lf", &BApcrhQ[i][g3yFYlnTxIA]);
                    g3yFYlnTxIA = g3yFYlnTxIA + 1;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            i = i + 1;
        };
    }
    for (i = 0; R61BDN8jm > i; i++) {
        Yr9hzuiYjaF = 0;
        {
            g3yFYlnTxIA = 0;
            while (g3yFYlnTxIA < leDIxa[i]) {
                Yr9hzuiYjaF = Yr9hzuiYjaF +BApcrhQ[i][g3yFYlnTxIA];
                g3yFYlnTxIA++;
            };
        }
        Yr9hzuiYjaF = Yr9hzuiYjaF / leDIxa[i];
        IvSs6eA72 = 0;
        {
            g3yFYlnTxIA = 0;
            while (g3yFYlnTxIA < leDIxa[i]) {
                IvSs6eA72 += (BApcrhQ[i][g3yFYlnTxIA] - Yr9hzuiYjaF) * (BApcrhQ[i][g3yFYlnTxIA] - Yr9hzuiYjaF);
                g3yFYlnTxIA++;
            };
        }
        IvSs6eA72 = sqrt (IvSs6eA72 / leDIxa[i]);
        printf ("%.5lf\n", IvSs6eA72);
    }
    return 0;
}

