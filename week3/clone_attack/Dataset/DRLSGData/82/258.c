int main () {
    int y;
    int x;
    int TAKGBFp;
    int YfmeoQ5G;
    int a [(328 - 229)];
    int pbz04r6lEp [99];
    int OD0Pp7i [99];
    int Pz78gybiBAs;
    int WDwYps9Pbg;
    int YXmEw7YTGKf0;
    int Ru0BNh8d;
    int BdOc3yT4zk [99];
    y = (277 - 277);
    x = (549 - 549);
    scanf ("%d", &TAKGBFp);
    {
        YfmeoQ5G = 0;
        while (YfmeoQ5G < TAKGBFp) {
            scanf ("%d %d", &a[YfmeoQ5G], &pbz04r6lEp[YfmeoQ5G]);
            if (a[YfmeoQ5G] >= (302 - 212) && a[YfmeoQ5G] <= 140 && pbz04r6lEp[YfmeoQ5G] >= (295 - 235) && 90 >= pbz04r6lEp[YfmeoQ5G]) {
                y = (111 - 110);
                OD0Pp7i[YfmeoQ5G] = (584 - 583);
            }
            else {
                OD0Pp7i[YfmeoQ5G] = 0;
            }
            YfmeoQ5G = YfmeoQ5G +(315 - 314);
        }
    }
    Pz78gybiBAs = 0;
    {
        YXmEw7YTGKf0 = 0;
        while (TAKGBFp > YXmEw7YTGKf0) {
            if (!((406 - 405) != OD0Pp7i[YXmEw7YTGKf0]) && !(OD0Pp7i[YXmEw7YTGKf0 +1] != OD0Pp7i[YXmEw7YTGKf0]) && (!(0 != YXmEw7YTGKf0) || OD0Pp7i[YXmEw7YTGKf0 -1] == 0)) {
                x = 1;
                WDwYps9Pbg = YXmEw7YTGKf0 +1;
                while (1) {
                    if (WDwYps9Pbg == TAKGBFp -1 || OD0Pp7i[WDwYps9Pbg +1] == 0) {
                        break;
                    }
                    WDwYps9Pbg = WDwYps9Pbg +1;
                }
                BdOc3yT4zk[Pz78gybiBAs] = WDwYps9Pbg -YXmEw7YTGKf0+1;
                Pz78gybiBAs = Pz78gybiBAs +1;
            }
            YXmEw7YTGKf0 = YXmEw7YTGKf0 +1;
        }
    }
    if (y == 1 && x == 1) {
        Ru0BNh8d = BdOc3yT4zk[0];
        {
            YfmeoQ5G = 0;
            while (YfmeoQ5G < Pz78gybiBAs) {
                if (Ru0BNh8d < BdOc3yT4zk[YfmeoQ5G]) {
                    Ru0BNh8d = BdOc3yT4zk[YfmeoQ5G];
                }
                YfmeoQ5G = YfmeoQ5G +1;
            }
        }
        printf ("%d", Ru0BNh8d);
    }
    else if (y == 0) {
    }
    else {
    }
    return 0;
}

