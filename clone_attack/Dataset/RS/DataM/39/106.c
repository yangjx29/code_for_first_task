struct   student {
    char name [(593 - 493)];
    short  int score1;
    short  int score2;
    char x;
    char YC8dyZb5XkQ;
    short  int iO0wCDJzHv;
    int EnZEkagO6JKP;
    struct   student *zmGaT0fl;
};
void  main () {
    char mPa0eMinlN4B [100];
    struct   student *INE8lDj, *p2, *head;
    int nsrt2Cm65w;
    int s;
    int i;
    int dIAePf;
    nsrt2Cm65w = (548 - 548);
    s = (71 - 71);
    scanf ("%d", &dIAePf);
    INE8lDj = p2 = head = NULL;
    {
        i = 785 - 785;
        while (dIAePf > i) {
            INE8lDj = (struct   student *) malloc (sizeof (struct   student));
            scanf ("%s %d %d %c %c %d", INE8lDj->name, &INE8lDj->score1, &INE8lDj->score2, &INE8lDj->x, &INE8lDj->YC8dyZb5XkQ, &INE8lDj->iO0wCDJzHv);
            INE8lDj->EnZEkagO6JKP = 0;
            if (90 < INE8lDj->score1) {
                INE8lDj->EnZEkagO6JKP = 2000;
                if ((570 - 490) < INE8lDj->score2) {
                    INE8lDj->EnZEkagO6JKP = INE8lDj->EnZEkagO6JKP + (4951 - 951);
                    if (!('Y' != INE8lDj->x))
                        INE8lDj->EnZEkagO6JKP = INE8lDj->EnZEkagO6JKP + 850;
                    if (!('Y' != INE8lDj->YC8dyZb5XkQ))
                        INE8lDj->EnZEkagO6JKP = INE8lDj->EnZEkagO6JKP + (1041 - 41);
                    if (INE8lDj->iO0wCDJzHv >= (426 - 425))
                        INE8lDj->EnZEkagO6JKP = INE8lDj->EnZEkagO6JKP + (8089 - 89);
                }
                else {
                    if (INE8lDj->iO0wCDJzHv >= 1)
                        INE8lDj->EnZEkagO6JKP = INE8lDj->EnZEkagO6JKP + 8000;
                    if (!('Y' != INE8lDj->YC8dyZb5XkQ))
                        INE8lDj->EnZEkagO6JKP = INE8lDj->EnZEkagO6JKP + (1140 - 140);
                };
            }
            else {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if (INE8lDj->score1 > 85) {
                    if (INE8lDj->score2 > 80) {
                        INE8lDj->EnZEkagO6JKP = INE8lDj->EnZEkagO6JKP + 4000;
                        if (INE8lDj->x == 'Y')
                            INE8lDj->EnZEkagO6JKP = INE8lDj->EnZEkagO6JKP + 850;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        }
                        if (!('Y' != INE8lDj->YC8dyZb5XkQ))
                            INE8lDj->EnZEkagO6JKP = INE8lDj->EnZEkagO6JKP + 1000;
                        if (INE8lDj->iO0wCDJzHv >= 1)
                            INE8lDj->EnZEkagO6JKP = INE8lDj->EnZEkagO6JKP + 8000;
                    }
                    else {
                        if (INE8lDj->YC8dyZb5XkQ == 'Y')
                            INE8lDj->EnZEkagO6JKP = INE8lDj->EnZEkagO6JKP + 1000;
                        if (INE8lDj->iO0wCDJzHv >= 1)
                            INE8lDj->EnZEkagO6JKP = INE8lDj->EnZEkagO6JKP + 8000;
                    };
                }
                else {
                    if (INE8lDj->score1 > 80) {
                        if (INE8lDj->iO0wCDJzHv >= 1)
                            INE8lDj->EnZEkagO6JKP = INE8lDj->EnZEkagO6JKP + 8000;
                        if (INE8lDj->score2 > 80 && INE8lDj->x == 'Y')
                            INE8lDj->EnZEkagO6JKP = INE8lDj->EnZEkagO6JKP + 850;
                    }
                    else {
                        if (INE8lDj->score2 > 80 && INE8lDj->x == 'Y')
                            INE8lDj->EnZEkagO6JKP = INE8lDj->EnZEkagO6JKP + 850;
                    };
                };
            }
            if (i == 0)
                head = INE8lDj;
            else
                p2->zmGaT0fl = INE8lDj;
            i++;
            p2 = INE8lDj;
        };
    }
    nsrt2Cm65w = head->EnZEkagO6JKP;
    INE8lDj = head;
    p2->zmGaT0fl = NULL;
    while (INE8lDj != NULL) {
        if (INE8lDj->EnZEkagO6JKP > nsrt2Cm65w) {
            nsrt2Cm65w = INE8lDj->EnZEkagO6JKP;
            strcpy (mPa0eMinlN4B, INE8lDj->name);
        }
        s = s + INE8lDj->EnZEkagO6JKP;
        INE8lDj = INE8lDj->zmGaT0fl;
    }
    printf ("%s\n%d\n%d\n", mPa0eMinlN4B, nsrt2Cm65w, s);
}

