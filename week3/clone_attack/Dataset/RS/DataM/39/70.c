struct   student {
    char owUnoytmR6p [20];
    int r0HlAE;
    int hTvu8OpGSn0;
    char leader [2];
    char west [2];
    int paper;
    int money;
    struct   student *mNIFc2AS;
};
struct   student *creat (int ggAMXiNH7kWB) {
    int uRmCFfa;
    struct   student *F1HDeUGohNrv;
    struct   student *xyKNm954xS8;
    struct   student *p2;
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
    xyKNm954xS8 = p2 = (struct   student *) malloc (sizeof (struct   student));
    F1HDeUGohNrv = xyKNm954xS8;
    {
        uRmCFfa = 171 - 171;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (ggAMXiNH7kWB > uRmCFfa) {
            uRmCFfa++;
            p2 = xyKNm954xS8;
            scanf ("%s%d%d%s%s%d", xyKNm954xS8->owUnoytmR6p, &xyKNm954xS8->r0HlAE, &xyKNm954xS8->hTvu8OpGSn0, &xyKNm954xS8->leader, &xyKNm954xS8->west, &xyKNm954xS8->paper);
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
            {
                xyKNm954xS8->money = 0;
                if ((147 - 67) < xyKNm954xS8->r0HlAE && !(0 == xyKNm954xS8->paper))
                    xyKNm954xS8->money = xyKNm954xS8->money + 8000;
                if ((904 - 819) < xyKNm954xS8->r0HlAE && 80 < xyKNm954xS8->hTvu8OpGSn0)
                    xyKNm954xS8->money = xyKNm954xS8->money + 4000;
                if (90 < xyKNm954xS8->r0HlAE)
                    xyKNm954xS8->money = xyKNm954xS8->money + 2000;
                if (85 < xyKNm954xS8->r0HlAE && (!(0 != strcmp (xyKNm954xS8->west, "Y"))))
                    xyKNm954xS8->money = xyKNm954xS8->money + 1000;
                if (xyKNm954xS8->hTvu8OpGSn0 > 80 && (strcmp (xyKNm954xS8->leader, "Y") == 0))
                    xyKNm954xS8->money = xyKNm954xS8->money + 850;
            }
            xyKNm954xS8 = (struct   student *) malloc (sizeof (struct   student));
            p2->mNIFc2AS = xyKNm954xS8;
        };
    }
    p2->mNIFc2AS = NULL;
    return (F1HDeUGohNrv);
}

void  print (struct   student *F1HDeUGohNrv) {
    int dq1XutvGxF;
    int max;
    dq1XutvGxF = 0;
    struct   student *xyKNm954xS8;
    xyKNm954xS8 = F1HDeUGohNrv;
    max = xyKNm954xS8->money;
    do {
        if (xyKNm954xS8->money > max)
            max = xyKNm954xS8->money;
        dq1XutvGxF = dq1XutvGxF + xyKNm954xS8->money;
        xyKNm954xS8 = xyKNm954xS8->mNIFc2AS;
    }
    while (xyKNm954xS8->mNIFc2AS != NULL);
    if (xyKNm954xS8->money > max)
        max = xyKNm954xS8->money;
    dq1XutvGxF = dq1XutvGxF + xyKNm954xS8->money;
    xyKNm954xS8 = F1HDeUGohNrv;
    for (; xyKNm954xS8->mNIFc2AS != NULL;) {
        if (xyKNm954xS8->money == max) {
            printf ("%s\n%d\n", xyKNm954xS8->owUnoytmR6p, xyKNm954xS8->money);
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
            break;
        }
        xyKNm954xS8 = xyKNm954xS8->mNIFc2AS;
    }
    printf ("%d", dq1XutvGxF);
}

void  mYKIwrd (struct   student *F1HDeUGohNrv) {
    struct   student *xyKNm954xS8;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    xyKNm954xS8 = F1HDeUGohNrv;
    do {
        printf ("%s %d %d %s %s %d %d\n", xyKNm954xS8->owUnoytmR6p, xyKNm954xS8->r0HlAE, xyKNm954xS8->hTvu8OpGSn0, xyKNm954xS8->leader, xyKNm954xS8->west, xyKNm954xS8->paper, xyKNm954xS8->money);
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
        xyKNm954xS8 = xyKNm954xS8->mNIFc2AS;
    }
    while (xyKNm954xS8 != NULL);
}

void  main () {
    struct   student *F1HDeUGohNrv;
    print (F1HDeUGohNrv);
    int ggAMXiNH7kWB;
    scanf ("%d", &ggAMXiNH7kWB);
    F1HDeUGohNrv = creat (ggAMXiNH7kWB);
}

