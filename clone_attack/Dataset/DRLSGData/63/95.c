main () {
    int cguAUzpIa6QX;
    int AWaDiyg;
    int QSAvZ7WE;
    int qmFhxHcti23;
    int YH9wmC [(654 - 554)] [(400 - 300)], PnUAI4NF6H [100] [100], UmIocMsp [100] [100] = {(301 - 301)};
    scanf ("%d %d", &cguAUzpIa6QX, &AWaDiyg);
    {
        int HMdIst = (754 - 754);
        while (HMdIst < cguAUzpIa6QX) {
            {
                int Gzmx7lqOd = (735 - 735);
                while (Gzmx7lqOd < AWaDiyg) {
                    scanf ("%d", &YH9wmC[HMdIst][Gzmx7lqOd]);
                    Gzmx7lqOd++;
                }
            }
            HMdIst = HMdIst +1;
        }
    }
    scanf ("%d %d", &QSAvZ7WE, &qmFhxHcti23);
    {
        int HMdIst = 0;
        while (HMdIst < QSAvZ7WE) {
            int Gzmx7lqOd = 0;
            while (Gzmx7lqOd < qmFhxHcti23) {
                scanf ("%d", &PnUAI4NF6H[HMdIst][Gzmx7lqOd]);
                Gzmx7lqOd++;
            }
            HMdIst = HMdIst +1;
        }
    }
    {
        int HMdIst = 0;
        while (HMdIst < cguAUzpIa6QX) {
            {
                int Gzmx7lqOd = 0;
                while (Gzmx7lqOd < qmFhxHcti23) {
                    int tt1LOToRxV = 0;
                    while (tt1LOToRxV < AWaDiyg) {
                        UmIocMsp[HMdIst][Gzmx7lqOd] = UmIocMsp[HMdIst][Gzmx7lqOd] + YH9wmC[HMdIst][tt1LOToRxV] * PnUAI4NF6H[tt1LOToRxV][Gzmx7lqOd];
                        tt1LOToRxV++;
                    }
                    Gzmx7lqOd++;
                }
            }
            HMdIst = HMdIst +1;
        }
    }
    {
        int HMdIst = 0;
        while (HMdIst < cguAUzpIa6QX) {
            {
                int Gzmx7lqOd = 0;
                while (Gzmx7lqOd < qmFhxHcti23) {
                    if (Gzmx7lqOd == 0)
                        printf ("%d", UmIocMsp[HMdIst][Gzmx7lqOd]);
                    else
                        printf (" %d", UmIocMsp[HMdIst][Gzmx7lqOd]);
                    if (Gzmx7lqOd == qmFhxHcti23 - 1)
                        printf ("\n", UmIocMsp[HMdIst][Gzmx7lqOd]);
                    Gzmx7lqOd++;
                }
            }
            HMdIst++;
        }
    }
}

