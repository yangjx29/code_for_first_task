int main () {
    int UtadbQMS13;
    int y1;
    int FCzcta;
    int y2;
    int kJXQWNah;
    int wQH7MDtUcbq;
    int THU6bwVCKpW;
    int OSX8HME2Zjr [(1059 - 959)] [(434 - 334)] = {(262 - 262)};
    int TjoYW0HPznr [100] [100] = {0};
    int D4wQ5FRsKOT [100] [100] = {0};
    scanf ("%d%d", &UtadbQMS13, &y1);
    {
        kJXQWNah = 0;
        while (kJXQWNah < UtadbQMS13) {
            {
                wQH7MDtUcbq = 0;
                while (wQH7MDtUcbq < y1) {
                    scanf ("%d", &OSX8HME2Zjr[kJXQWNah][wQH7MDtUcbq]);
                    wQH7MDtUcbq++;
                };
            }
            kJXQWNah++;
        };
    }
    scanf ("%d%d", &FCzcta, &y2);
    {
        kJXQWNah = 0;
        while (FCzcta > kJXQWNah) {
            for (wQH7MDtUcbq = 0; y2 > wQH7MDtUcbq; wQH7MDtUcbq++)
                scanf ("%d", &TjoYW0HPznr[kJXQWNah][wQH7MDtUcbq]);
            kJXQWNah++;
        };
    }
    {
        kJXQWNah = 0;
        while (kJXQWNah < UtadbQMS13) {
            {
                wQH7MDtUcbq = 0;
                while (wQH7MDtUcbq < y2) {
                    for (THU6bwVCKpW = 0; y1 > THU6bwVCKpW; THU6bwVCKpW++)
                        D4wQ5FRsKOT[kJXQWNah][wQH7MDtUcbq] = D4wQ5FRsKOT[kJXQWNah][wQH7MDtUcbq] + OSX8HME2Zjr[kJXQWNah][THU6bwVCKpW] * TjoYW0HPznr[THU6bwVCKpW][wQH7MDtUcbq];
                    wQH7MDtUcbq++;
                };
            }
            kJXQWNah++;
        };
    }
    {
        kJXQWNah = 0;
        while (kJXQWNah < UtadbQMS13) {
            {
                wQH7MDtUcbq = 0;
                while (wQH7MDtUcbq < y2 - (467 - 466)) {
                    printf ("%d ", D4wQ5FRsKOT[kJXQWNah][wQH7MDtUcbq]);
                    wQH7MDtUcbq++;
                };
            }
            printf ("%d\n", D4wQ5FRsKOT[kJXQWNah][wQH7MDtUcbq]);
            kJXQWNah++;
        };
    }
    return 0;
}

