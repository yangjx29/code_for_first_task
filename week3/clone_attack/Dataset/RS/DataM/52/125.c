void  main () {
    int Mreg8PAWnD, LPXaSI3, aC6VGr, d6uJ1NpFzd [100], fSD6gEoVrTY [100], *bDiTasML3FP5, j;
    scanf ("\n");
    scanf ("%d%d", &Mreg8PAWnD, &LPXaSI3);
    {
        aC6VGr = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (Mreg8PAWnD > aC6VGr) {
            scanf ("%d", &d6uJ1NpFzd[aC6VGr]);
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
            aC6VGr = aC6VGr + 1;
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
    bDiTasML3FP5 = fSD6gEoVrTY;
    if (aC6VGr = Mreg8PAWnD -LPXaSI3) {
        *bDiTasML3FP5 = d6uJ1NpFzd[aC6VGr];
        printf ("%d", *bDiTasML3FP5);
    }
    for (aC6VGr = Mreg8PAWnD -LPXaSI3+1; Mreg8PAWnD > aC6VGr; aC6VGr++) {
        j = (aC6VGr + LPXaSI3) % (Mreg8PAWnD -1);
        *(bDiTasML3FP5 + j - 1) = d6uJ1NpFzd[aC6VGr];
        printf (" %d", *(bDiTasML3FP5 + j - 1));
    }
    {
        aC6VGr = 0;
        while (Mreg8PAWnD -LPXaSI3 > aC6VGr) {
            *(bDiTasML3FP5 + aC6VGr + LPXaSI3) = d6uJ1NpFzd[aC6VGr];
            printf (" %d", *(bDiTasML3FP5 + aC6VGr + LPXaSI3));
            aC6VGr++;
        };
    };
}

