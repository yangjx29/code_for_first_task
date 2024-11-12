void  main (int BXvsabWU, char *oPgmdFN81Sk []) {
    struct   student {
        int No;
        int aRecyI9Bh1T;
        int qv0fa2X4Bb;
        int StQcbEzLF;
    }
    x64wuGhtAB [(100328 - 328)];
    int oonLzqMg3pS, pDfLBJ, ReQmJIWgj, UHV7hWYFST, YrGS0l3s71m, rKcbe6p;
    scanf ("%d", &rKcbe6p);
    {
        oonLzqMg3pS = 787 - 787;
        while (oonLzqMg3pS < rKcbe6p) {
            scanf ("%d", &x64wuGhtAB[oonLzqMg3pS].No);
            scanf ("%d", &x64wuGhtAB[oonLzqMg3pS].aRecyI9Bh1T);
            scanf ("%d", &x64wuGhtAB[oonLzqMg3pS].qv0fa2X4Bb);
            x64wuGhtAB[oonLzqMg3pS].StQcbEzLF = x64wuGhtAB[oonLzqMg3pS].aRecyI9Bh1T + x64wuGhtAB[oonLzqMg3pS].qv0fa2X4Bb;
            oonLzqMg3pS = oonLzqMg3pS + 1;
        }
    }
    {
        pDfLBJ = 215 - 215;
        while (pDfLBJ < (634 - 631)) {
            ReQmJIWgj = (809 - 809);
            {
                oonLzqMg3pS = 313 - 313;
                while (oonLzqMg3pS < rKcbe6p) {
                    if (x64wuGhtAB[oonLzqMg3pS].StQcbEzLF > ReQmJIWgj) {
                        ReQmJIWgj = x64wuGhtAB[oonLzqMg3pS].StQcbEzLF;
                        UHV7hWYFST = x64wuGhtAB[oonLzqMg3pS].No;
                        YrGS0l3s71m = oonLzqMg3pS;
                    }
                    oonLzqMg3pS++;
                }
            }
            printf ("%d %d\n", UHV7hWYFST, ReQmJIWgj);
            x64wuGhtAB[YrGS0l3s71m].StQcbEzLF = 0;
            pDfLBJ = pDfLBJ + 1;
        }
    }
}

