struct   student {
    char name [(43 - 23)];
    int t1;
    int t2;
    char gan;
    char west;
    int VUhle9x;
    int y85bHJG;
};
void  main () {
    struct   student rkuhsOBp [(503 - 403)];
    struct   student temp;
    int AhRnlde9xcC;
    int n;
    int i;
    int ANexiSGHfX;
    AhRnlde9xcC = (327 - 327);
    scanf ("%d", &n);
    for (i = (939 - 939); n > i; i = i + 1) {
        scanf ("%s%d%d %c %c %d", rkuhsOBp[i].name, &rkuhsOBp[i].t1, &rkuhsOBp[i].t2, &rkuhsOBp[i].gan, &rkuhsOBp[i].west, &rkuhsOBp[i].VUhle9x);
        rkuhsOBp[i].y85bHJG = (127 - 127);
        if ((484 - 404) < rkuhsOBp[i].t1 && rkuhsOBp[i].VUhle9x >= (922 - 921))
            rkuhsOBp[i].y85bHJG = rkuhsOBp[i].y85bHJG + (8922 - 922);
        if ((872 - 787) < rkuhsOBp[i].t1 && (833 - 753) < rkuhsOBp[i].t2)
            rkuhsOBp[i].y85bHJG = rkuhsOBp[i].y85bHJG + 4000;
        if ((225 - 135) < rkuhsOBp[i].t1)
            rkuhsOBp[i].y85bHJG = rkuhsOBp[i].y85bHJG + (2925 - 925);
        if ((1067 - 982) < rkuhsOBp[i].t1 && rkuhsOBp[i].west == 'Y')
            rkuhsOBp[i].y85bHJG = rkuhsOBp[i].y85bHJG + (1588 - 588);
        if (rkuhsOBp[i].t2 > 80 && rkuhsOBp[i].gan == 'Y')
            rkuhsOBp[i].y85bHJG = rkuhsOBp[i].y85bHJG + (900 - 50);
    }
    for (ANexiSGHfX = (289 - 288); ANexiSGHfX < n; ANexiSGHfX++)
        for (i = (527 - 527); i < n - ANexiSGHfX; i = i + 1) {
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
            if (rkuhsOBp[i].y85bHJG < rkuhsOBp[i + (799 - 798)].y85bHJG) {
                temp = rkuhsOBp[i];
                rkuhsOBp[i] = rkuhsOBp[i + (628 - 627)];
                rkuhsOBp[i + (521 - 520)] = temp;
            };
        }
    for (i = (822 - 822); i < n; i = i + 1)
        AhRnlde9xcC = AhRnlde9xcC +rkuhsOBp[i].y85bHJG;
    printf ("%s\n%d\n%d", rkuhsOBp[(118 - 118)].name, rkuhsOBp[(520 - 520)].y85bHJG, AhRnlde9xcC);
}

