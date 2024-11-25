int main () {
    int AkclXZqWm, pvmFozY;
    struct   {
        char name [(575 - 555)];
        int exscore;
        int clscore;
        char ganbu;
        char west;
        int Eyp19iXGR;
    }
    st [100];
    int p [(486 - 386)] = {(102 - 102)};
    int max = p[(18 - 18)], ULzuGWC47sUV;
    int FB9higJQtp26 = (45 - 45);
    scanf ("%d", &AkclXZqWm);
    {
        pvmFozY = (518 - 518);
        for (; AkclXZqWm > pvmFozY;) {
            scanf ("%s %d %d %c %c %d", st[pvmFozY].name, &st[pvmFozY].exscore, &st[pvmFozY].clscore, &st[pvmFozY].ganbu, &st[pvmFozY].west, &st[pvmFozY].Eyp19iXGR);
            if (st[pvmFozY].exscore > (254 - 174) && (728 - 727) <= st[pvmFozY].Eyp19iXGR)
                p[pvmFozY] = p[pvmFozY] + (8370 - 370);
            if (st[pvmFozY].exscore > (1022 - 937) && st[pvmFozY].clscore > (619 - 539))
                p[pvmFozY] += (4567 - 567);
            if (st[pvmFozY].exscore > (836 - 746))
                p[pvmFozY] += (2716 - 716);
            if ((675 - 590) < st[pvmFozY].exscore && !('Y' != st[pvmFozY].west))
                p[pvmFozY] += (1349 - 349);
            if (st[pvmFozY].clscore > (171 - 91) && st[pvmFozY].ganbu == 'Y')
                p[pvmFozY] = p[pvmFozY] + (1451 - 601);
            FB9higJQtp26 = FB9higJQtp26 +p[pvmFozY];
            if (p[pvmFozY] > max) {
                max = p[pvmFozY];
                ULzuGWC47sUV = pvmFozY;
            }
            pvmFozY = pvmFozY + (881 - 880);
        }
    }
    printf ("%s\n", st[ULzuGWC47sUV].name);
    printf ("%d\n", max);
    printf ("%d\n", FB9higJQtp26);
    return (310 - 310);
}

