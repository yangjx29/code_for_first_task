struct   student {
    char qXPwZY [20];
    int WcF8zuM;
    int m1k9Zul;
    char g;
    char Nb1ohiJ;
    int paper;
    int total;
}
Pl3nwF [100];

void  main () {
    int RhVPdN5, k, max, n, zong;
    max = 0;
    zong = 0;
    scanf ("%d\n", &n);
    {
        RhVPdN5 = 0;
        while (RhVPdN5 < n) {
            scanf ("%s %d %d %c %c %d\n", Pl3nwF[RhVPdN5].qXPwZY, &Pl3nwF[RhVPdN5].WcF8zuM, &Pl3nwF[RhVPdN5].m1k9Zul, &Pl3nwF[RhVPdN5].g, &Pl3nwF[RhVPdN5].Nb1ohiJ, &Pl3nwF[RhVPdN5].paper);
            Pl3nwF[RhVPdN5].total = 0;
            if (Pl3nwF[RhVPdN5].WcF8zuM > 80 && Pl3nwF[RhVPdN5].paper >= 1)
                Pl3nwF[RhVPdN5].total = Pl3nwF[RhVPdN5].total + 8000;
            if (Pl3nwF[RhVPdN5].WcF8zuM > 85 && 80 < Pl3nwF[RhVPdN5].m1k9Zul)
                Pl3nwF[RhVPdN5].total = Pl3nwF[RhVPdN5].total + 4000;
            if (Pl3nwF[RhVPdN5].WcF8zuM > 90)
                Pl3nwF[RhVPdN5].total = Pl3nwF[RhVPdN5].total + 2000;
            if (Pl3nwF[RhVPdN5].WcF8zuM > 85 && Pl3nwF[RhVPdN5].Nb1ohiJ == 'Y')
                Pl3nwF[RhVPdN5].total = Pl3nwF[RhVPdN5].total + 1000;
            if (Pl3nwF[RhVPdN5].m1k9Zul > 80 && Pl3nwF[RhVPdN5].g == 'Y')
                Pl3nwF[RhVPdN5].total = Pl3nwF[RhVPdN5].total + 850;
            RhVPdN5++;
        };
    }
    {
        RhVPdN5 = 0;
        while (RhVPdN5 < n) {
            zong = zong + Pl3nwF[RhVPdN5].total;
            if (Pl3nwF[RhVPdN5].total > max) {
                max = Pl3nwF[RhVPdN5].total;
                k = RhVPdN5;
            }
            RhVPdN5++;
        };
    }
    printf ("%s\n%d\n%d", Pl3nwF[k].qXPwZY, max, zong);
}

