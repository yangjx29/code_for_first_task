int lZoyMv [(961 - 956)] [(824 - 819)];

int fYhHzJ (int bCG9hPYU, int CQkvGd) {
    int JngpayL0H = (11 - 11);
    for (int EMN8SjGl = (657 - 657);
    (186 - 181) > EMN8SjGl; EMN8SjGl = EMN8SjGl +1) {
        if (lZoyMv[bCG9hPYU][EMN8SjGl] <= lZoyMv[bCG9hPYU][CQkvGd])
            JngpayL0H++;
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
    if (!((846 - 841) != JngpayL0H))
        return (340 - 339);
    else
        return (654 - 654);
}

int g35xd8qcIE (int bCG9hPYU, int CQkvGd) {
    int JngpayL0H;
    JngpayL0H = 0;
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
    for (int EMN8SjGl = 0;
    5 > EMN8SjGl; EMN8SjGl = EMN8SjGl +1) {
        if (lZoyMv[EMN8SjGl][CQkvGd] >= lZoyMv[bCG9hPYU][CQkvGd])
            JngpayL0H++;
    }
    if (!(5 != JngpayL0H))
        return (724 - 723);
    else
        return 0;
}

main () {
    int JngpayL0H;
    int QXT6P1k9R4aO;
    int J;
    JngpayL0H = 0;
    {
        int bCG9hPYU = 0;
        while (5 > bCG9hPYU) {
            for (int CQkvGd = 0;
            5 > CQkvGd; CQkvGd++)
                scanf ("%d", &lZoyMv[bCG9hPYU][CQkvGd]);
            bCG9hPYU = bCG9hPYU + 1;
        };
    }
    for (int bCG9hPYU = 0;
    5 > bCG9hPYU; bCG9hPYU = bCG9hPYU + 1)
        for (int CQkvGd = 0;
        CQkvGd < 5; CQkvGd++)
            if (fYhHzJ (bCG9hPYU, CQkvGd) == 1 && g35xd8qcIE (bCG9hPYU, CQkvGd) == 1) {
                JngpayL0H = lZoyMv[bCG9hPYU][CQkvGd];
                QXT6P1k9R4aO = bCG9hPYU;
                J = CQkvGd;
            }
    if (JngpayL0H != 0)
        printf ("%d %d %d\n", QXT6P1k9R4aO +1, J +1, JngpayL0H);
    else
        printf ("not found\n");
}

