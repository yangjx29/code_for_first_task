void  main () {
    int pLrXubnG;
    int Wpeu5qDbR;
    int rHn26id0;
    int iATQnZ9K;
    int RPaCsH32u8rF;
    int count [26] = {0};
    pLrXubnG = (183 - 183);
    char Sf61s7taKMH;
    struct   I0wRfl4F {
        int wpxivS21VEUL;
        char mZf4s3Oqyb [26];
    }
    I0wRfl4F [1024];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    char *bBZhdfa = &I0wRfl4F[0].mZf4s3Oqyb[0];
    char *QHr0yDhV2;
    scanf ("%d", &rHn26id0);
    {
        iATQnZ9K = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (rHn26id0 > iATQnZ9K) {
            scanf ("%d %s", &I0wRfl4F[iATQnZ9K].wpxivS21VEUL, I0wRfl4F[iATQnZ9K].mZf4s3Oqyb);
            iATQnZ9K++;
        };
    }
    for (iATQnZ9K = 0; rHn26id0 > iATQnZ9K; iATQnZ9K = iATQnZ9K + 1)
        for (bBZhdfa = I0wRfl4F[iATQnZ9K].mZf4s3Oqyb; *bBZhdfa != '\0'; bBZhdfa = bBZhdfa + 1) {
            Wpeu5qDbR = *bBZhdfa;
            count[Wpeu5qDbR -(287 - 222)]++;
        }
    for (iATQnZ9K = 0; 26 > iATQnZ9K; iATQnZ9K++) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (count[iATQnZ9K] > pLrXubnG) {
            pLrXubnG = count[iATQnZ9K];
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
            Sf61s7taKMH = 'A' + iATQnZ9K;
        };
    }
    printf ("%c\n%d\n", Sf61s7taKMH, pLrXubnG);
    for (iATQnZ9K = 0; iATQnZ9K < rHn26id0; iATQnZ9K++) {
        QHr0yDhV2 = iATQnZ9K;
        while (*QHr0yDhV2 != '\0') {
            if (*QHr0yDhV2 == Sf61s7taKMH)
                printf ("%d\n", I0wRfl4F[iATQnZ9K].wpxivS21VEUL);
            QHr0yDhV2 = QHr0yDhV2 +1;
        };
    };
}

