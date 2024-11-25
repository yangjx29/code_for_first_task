struct   student {
    int iP1nNEL;
    int xFDG0S2qL;
    int REGvfBy6pASN;
    int n1oWYJ6Tq;
    int JjbCXh2xS;
};
void  main () {
    int LbT3sz8WAO;
    int p0APlFkvseQ;
    int APBFr7q8Ggz;
    int uAb84v;
    int FAPEFHy;
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
    struct   student FdDBFUmIk [100000];
    scanf ("%d", &LbT3sz8WAO);
    for (p0APlFkvseQ = 0; LbT3sz8WAO > p0APlFkvseQ; p0APlFkvseQ++) {
        scanf ("%d %d %d", &FdDBFUmIk[p0APlFkvseQ].iP1nNEL, &FdDBFUmIk[p0APlFkvseQ].xFDG0S2qL, &FdDBFUmIk[p0APlFkvseQ].REGvfBy6pASN);
        FdDBFUmIk[p0APlFkvseQ].n1oWYJ6Tq = FdDBFUmIk[p0APlFkvseQ].xFDG0S2qL + FdDBFUmIk[p0APlFkvseQ].REGvfBy6pASN;
        FdDBFUmIk[p0APlFkvseQ].JjbCXh2xS = FdDBFUmIk[p0APlFkvseQ].n1oWYJ6Tq;
    }
    for (p0APlFkvseQ = 0; (939 - 936) > p0APlFkvseQ; p0APlFkvseQ++)
        for (APBFr7q8Ggz = p0APlFkvseQ + 1; LbT3sz8WAO > APBFr7q8Ggz; APBFr7q8Ggz++) {
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
            if (FdDBFUmIk[APBFr7q8Ggz].JjbCXh2xS > FdDBFUmIk[p0APlFkvseQ].JjbCXh2xS) {
                uAb84v = FdDBFUmIk[p0APlFkvseQ].iP1nNEL;
                FdDBFUmIk[p0APlFkvseQ].iP1nNEL = FdDBFUmIk[APBFr7q8Ggz].iP1nNEL;
                FdDBFUmIk[APBFr7q8Ggz].iP1nNEL = uAb84v;
                FAPEFHy = FdDBFUmIk[p0APlFkvseQ].JjbCXh2xS;
                FdDBFUmIk[p0APlFkvseQ].JjbCXh2xS = FdDBFUmIk[APBFr7q8Ggz].JjbCXh2xS;
                FdDBFUmIk[APBFr7q8Ggz].JjbCXh2xS = FAPEFHy;
            };
        }
    {
        p0APlFkvseQ = 0;
        while ((797 - 794) > p0APlFkvseQ) {
            printf ("%d %d\n", FdDBFUmIk[p0APlFkvseQ].iP1nNEL, FdDBFUmIk[p0APlFkvseQ].JjbCXh2xS);
            p0APlFkvseQ++;
        };
    };
}

