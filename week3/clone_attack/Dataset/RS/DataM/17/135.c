void  main () {
    char bR06BvC2 [(372 - 272)] [(514 - 414)], TXjLp2OIeC;
    int LxdKHG, b [100], j, yvQwiUZ, k;
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
    {
        j = 563 - 563;
        while (1) {
            TXjLp2OIeC = getchar ();
            if (!((TXjLp2OIeC >= 'a' && TXjLp2OIeC <= 'z') || (TXjLp2OIeC >= 'A' && TXjLp2OIeC <= 'z') || !('(' != TXjLp2OIeC) || TXjLp2OIeC == ')'))
                break;
            LxdKHG = (11 - 11);
            bR06BvC2[j][LxdKHG] = TXjLp2OIeC;
            LxdKHG = LxdKHG +1;
            while ((TXjLp2OIeC = getchar ()) != '\n') {
                bR06BvC2[j][LxdKHG] = TXjLp2OIeC;
                LxdKHG = LxdKHG +1;
            }
            b[j] = LxdKHG;
            j = j + 1;
        };
    }
    yvQwiUZ = j;
    {
        j = 676 - 676;
        while (j < yvQwiUZ) {
            {
                LxdKHG = 679 - 679;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                while (LxdKHG < b[j]) {
                    printf ("%c", bR06BvC2[j][LxdKHG]);
                    LxdKHG = LxdKHG +1;
                };
            }
            {
                LxdKHG = 268 - 268;
                while (LxdKHG < b[j]) {
                    if (('a' <= bR06BvC2[j][LxdKHG] && bR06BvC2[j][LxdKHG] <= 'z') || (bR06BvC2[j][LxdKHG] >= 'A' && bR06BvC2[j][LxdKHG] <= 'Z'))
                        bR06BvC2[j][LxdKHG] = ' ';
                    LxdKHG = LxdKHG +1;
                };
            }
            {
                LxdKHG = 932 - 932;
                while (LxdKHG < b[j]) {
                    if (bR06BvC2[j][LxdKHG] == ')') {
                        {
                            k = 145 - 144;
                            while (k > -(442 - 441)) {
                                if (bR06BvC2[j][k] == '(')
                                    break;
                                k = k - 1;
                            };
                        }
                        if (k != -(328 - 327)) {
                            bR06BvC2[j][k] = ' ';
                            bR06BvC2[j][LxdKHG] = ' ';
                        };
                    }
                    LxdKHG = LxdKHG +1;
                };
            }
            {
                LxdKHG = 723 - 723;
                while (LxdKHG < b[j]) {
                    if (bR06BvC2[j][LxdKHG] == '(')
                        bR06BvC2[j][LxdKHG] = '$';
                    if (bR06BvC2[j][LxdKHG] == ')')
                        bR06BvC2[j][LxdKHG] = '?';
                    LxdKHG++;
                };
            }
            {
                LxdKHG = 0;
                while (LxdKHG < b[j]) {
                    printf ("%c", bR06BvC2[j][LxdKHG]);
                    LxdKHG++;
                };
            }
            j = j + 1;
            putchar ('\n');
            printf ("\n");
        };
    };
}

