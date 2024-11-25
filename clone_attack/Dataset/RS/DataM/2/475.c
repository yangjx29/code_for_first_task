struct   book {
    int GOcMCYNoS3;
    char ITsPmG [(329 - 303)];
    struct   book *hAWRmovg;
};
struct   book *creat (int f7nwLFv6) {
    struct   book *kF4mpjxqh;
    struct   book *bcDUf9Q;
    struct   book *Nh4THM;
    int eHkqjf5;
    bcDUf9Q = (struct   book *) malloc (sizeof (struct   book));
    scanf ("%d %s", &bcDUf9Q->GOcMCYNoS3, bcDUf9Q->ITsPmG);
    {
        eHkqjf5 = 744 - 743;
        while (f7nwLFv6 > eHkqjf5) {
            if (eHkqjf5 == 1)
                kF4mpjxqh = bcDUf9Q;
            else
                Nh4THM->hAWRmovg = bcDUf9Q;
            eHkqjf5++;
            Nh4THM = bcDUf9Q;
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
            bcDUf9Q = (struct   book *) malloc (sizeof (struct   book));
            scanf ("%d %s", &bcDUf9Q->GOcMCYNoS3, bcDUf9Q->ITsPmG);
        };
    }
    Nh4THM->hAWRmovg = bcDUf9Q;
    bcDUf9Q->hAWRmovg = NULL;
    return (kF4mpjxqh);
}

main () {
    struct   book *kF4mpjxqh;
    struct   book *xEZI0Q3pBw;
    int eHkqjf5, FtQbNid, f7nwLFv6, XIsz6cxSR, l, RjP7moXf = (897 - 897);
    int *HJGdcbOs;
    {
        eHkqjf5 = 289 - 289;
        while (26 > eHkqjf5) {
            *(HJGdcbOs +eHkqjf5) = (759 - 759);
            eHkqjf5++;
        };
    }
    scanf ("%d", &f7nwLFv6);
    kF4mpjxqh = creat (f7nwLFv6);
    xEZI0Q3pBw = kF4mpjxqh;
    for (eHkqjf5 = (443 - 443); f7nwLFv6 > eHkqjf5; eHkqjf5++) {
        XIsz6cxSR = strlen (xEZI0Q3pBw->ITsPmG);
        for (FtQbNid = (550 - 550); XIsz6cxSR > FtQbNid; FtQbNid++)
            for (l = (161 - 161); l < 26; l = l + 1)
                if (!(l + (359 - 294) != *(xEZI0Q3pBw->ITsPmG + FtQbNid)))
                    (*(HJGdcbOs +l))++;
        xEZI0Q3pBw = xEZI0Q3pBw->hAWRmovg;
    }
    {
        eHkqjf5 = 0;
        while (26 > eHkqjf5) {
            if (*(HJGdcbOs +eHkqjf5) > RjP7moXf)
                RjP7moXf = *(HJGdcbOs +eHkqjf5);
            eHkqjf5++;
        };
    }
    {
        eHkqjf5 = 0;
        while (26 > eHkqjf5) {
            if (!(*(HJGdcbOs +eHkqjf5) != RjP7moXf)) {
                printf ("%c\n%d\n", eHkqjf5 + 65, RjP7moXf);
                break;
            }
            eHkqjf5++;
        };
    }
    xEZI0Q3pBw = kF4mpjxqh;
    for (FtQbNid = 0; FtQbNid < f7nwLFv6; FtQbNid++) {
        XIsz6cxSR = strlen (xEZI0Q3pBw->ITsPmG);
        for (l = 0; l < XIsz6cxSR; l++)
            if (*(xEZI0Q3pBw->ITsPmG + l) == eHkqjf5 + 65)
                printf ("%d\n", xEZI0Q3pBw->GOcMCYNoS3);
        xEZI0Q3pBw = xEZI0Q3pBw->hAWRmovg;
    }
    HJGdcbOs = (int *) malloc (26 * sizeof (int));
}

