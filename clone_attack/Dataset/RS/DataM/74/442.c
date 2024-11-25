void  main () {
    int pgW5fk0adp;
    int fXP8CkOl9e;
    int n;
    int X0oJeDG;
    int QQNAhHMwi;
    int Ax08rzIP;
    int t;
    int yTrJVuM;
    int x;
    int Cq37Vo;
    pgW5fk0adp = (527 - 527);
    scanf ("%d %d", &fXP8CkOl9e, &n);
    for (X0oJeDG = fXP8CkOl9e; X0oJeDG <= n; X0oJeDG = X0oJeDG +1) {
        for (QQNAhHMwi = (430 - 428); QQNAhHMwi < X0oJeDG &&X0oJeDG % QQNAhHMwi != 0; QQNAhHMwi = QQNAhHMwi +1)
            ;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(X0oJeDG != QQNAhHMwi)) {
            yTrJVuM = (int) log10 (X0oJeDG) + 1;
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
            for (Ax08rzIP = 1; Ax08rzIP <= yTrJVuM; Ax08rzIP = Ax08rzIP +1) {
                x = (X0oJeDG % (int) pow ((876 - 866), Ax08rzIP)) / (int) pow (10, Ax08rzIP -1);
                Cq37Vo = (X0oJeDG / (int) pow (10, yTrJVuM - Ax08rzIP)) % 10;
                if (x != Cq37Vo)
                    break;
            }
            if (Ax08rzIP == yTrJVuM + 1) {
                pgW5fk0adp = pgW5fk0adp + 1;
                printf ("%d", X0oJeDG);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                break;
            };
        };
    }
    {
        t = X0oJeDG +1;
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
        while (t <= n) {
            {
                QQNAhHMwi = 2;
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
                while (QQNAhHMwi < t && t % QQNAhHMwi != 0) {
                    QQNAhHMwi = QQNAhHMwi +1;
                };
            }
            if (QQNAhHMwi == t) {
                yTrJVuM = (int) log10 (t) + 1;
                for (Ax08rzIP = 1; Ax08rzIP <= yTrJVuM; Ax08rzIP = Ax08rzIP +1) {
                    x = (t % (int) pow (10, Ax08rzIP)) / (int) pow (10, Ax08rzIP -1);
                    Cq37Vo = (t / (int) pow (10, yTrJVuM - Ax08rzIP)) % 10;
                    if (x != Cq37Vo)
                        break;
                }
                if (Ax08rzIP == yTrJVuM + 1) {
                    printf (",%d", t);
                    pgW5fk0adp = pgW5fk0adp + 1;
                };
            }
            t++;
        };
    }
    if (pgW5fk0adp == 0)
        ;
}

