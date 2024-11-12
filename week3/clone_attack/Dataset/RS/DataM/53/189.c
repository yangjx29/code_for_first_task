void  main () {
    int cPZx2tp54bnk [300];
    int DWOgnqj76LI;
    int i;
    int j;
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
    int Xmh0G8 [300] = {0};
    scanf ("%d", &DWOgnqj76LI);
    {
        i = 0;
        while (i < DWOgnqj76LI) {
            scanf ("%d", &cPZx2tp54bnk[i]);
            {
                j = 0;
                while (j < i) {
                    if (!(cPZx2tp54bnk[i] != cPZx2tp54bnk[j]))
                        Xmh0G8[i] = Xmh0G8[i] + 1;
                    j++;
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
            if (Xmh0G8[i] == 0) {
                if (i == 0)
                    printf ("%d", cPZx2tp54bnk[0]);
                else
                    printf (",%d", cPZx2tp54bnk[i]);
            }
            i++;
        };
    };
}

