void  main () {
    int RDlHT1GwL;
    int SZrWBM;
    RDlHT1GwL = 0;
    scanf ("%d", &SZrWBM);
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
    if (SZrWBM % 3 == 0) {
        RDlHT1GwL = RDlHT1GwL +1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        printf ("3");
    }
    if (SZrWBM % 5 == 0) {
        RDlHT1GwL = RDlHT1GwL +1;
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
        if (2 <= RDlHT1GwL)
            printf (" 5");
        else
            printf ("5");
    }
    if (SZrWBM % 7 == 0) {
        RDlHT1GwL = RDlHT1GwL +1;
        if (RDlHT1GwL >= 2)
            printf (" 7");
        else
            printf ("7");
    }
    if (RDlHT1GwL == 0)
        ;
}

