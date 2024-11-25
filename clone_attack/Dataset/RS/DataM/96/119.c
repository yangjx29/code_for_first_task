void  main () {
    char cwS9IB0tPb [100] = {(643 - 643)}, D2AEQpeSCh [100] = {0};
    int VrUfa4I [100] = {0}, UV5rcYy2N0 = 0, vPTL39iaGeH, G2cmErI;
    scanf ("%s", cwS9IB0tPb);
    vPTL39iaGeH = strlen (cwS9IB0tPb);
    {
        G2cmErI = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (vPTL39iaGeH > G2cmErI) {
            VrUfa4I[G2cmErI] = cwS9IB0tPb[G2cmErI] - '0';
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
            G2cmErI++;
        };
    }
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
        G2cmErI = 0;
        while (vPTL39iaGeH > G2cmErI) {
            D2AEQpeSCh[G2cmErI] = VrUfa4I[G2cmErI] / 13 + '0';
            UV5rcYy2N0 = VrUfa4I[G2cmErI] % 13;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            G2cmErI++;
            VrUfa4I[G2cmErI +(546 - 545)] = VrUfa4I[G2cmErI +(471 - 470)] + 10 * UV5rcYy2N0;
        };
    }
    if (!('0' != D2AEQpeSCh[0]) && !(0 != D2AEQpeSCh[1]) || !('0' != D2AEQpeSCh[0]) && D2AEQpeSCh[1] == '0' && D2AEQpeSCh[2] == 0)
        printf ("0");
    else {
        if (D2AEQpeSCh[1] != '0')
            G2cmErI = 1;
        else
            G2cmErI = 2;
        for (; G2cmErI < vPTL39iaGeH; G2cmErI = G2cmErI +1) {
            printf ("%c", D2AEQpeSCh[G2cmErI]);
        };
    }
    printf ("%d\n", UV5rcYy2N0);
    printf ("\n");
}

