int kxc51t0 (int iWnwiOrHG [(133 - 33)], int WlDGM3c) {
    int IUfXaL;
    int vKIgDTN7 = iWnwiOrHG[(656 - 656)];
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
        IUfXaL = 565 - 565;
        while (IUfXaL < WlDGM3c) {
            if (iWnwiOrHG[IUfXaL] > vKIgDTN7)
                vKIgDTN7 = iWnwiOrHG[IUfXaL];
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
            IUfXaL = IUfXaL +1;
        };
    }
    return vKIgDTN7;
}

int main () {
    int IUfXaL, hYoyrs9H6C;
    int gq1RfWsmJ9ey [(636 - 606)], iWnwiOrHG [(746 - 716)] = {(124 - 124)}, FgJLlYrisvT = (616 - 616);
    int iYZze8A4cs;
    int vKIgDTN7 = kxc51t0 (iWnwiOrHG, iYZze8A4cs);
    scanf ("%d", &iYZze8A4cs);
    for (int IUfXaL = (188 - 188);
    IUfXaL < iYZze8A4cs; IUfXaL = IUfXaL +1) {
        scanf ("%d", &gq1RfWsmJ9ey[IUfXaL]);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    iWnwiOrHG[iYZze8A4cs - (871 - 870)] = (632 - 631);
    {
        IUfXaL = 79 - 77;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        while (IUfXaL >= (874 - 874)) {
            int WEAuYP1tTx7K [30] = {0};
            FgJLlYrisvT = 0;
            {
                hYoyrs9H6C = 312 - 311;
                while (hYoyrs9H6C < iYZze8A4cs) {
                    if (gq1RfWsmJ9ey[IUfXaL] >= gq1RfWsmJ9ey[hYoyrs9H6C]) {
                        WEAuYP1tTx7K[FgJLlYrisvT] = iWnwiOrHG[hYoyrs9H6C];
                        FgJLlYrisvT++;
                    }
                    hYoyrs9H6C++;
                };
            }
            iWnwiOrHG[IUfXaL] = kxc51t0 (WEAuYP1tTx7K, FgJLlYrisvT) + 1;
            IUfXaL--;
        };
    }
    printf ("%d\n", vKIgDTN7);
}

