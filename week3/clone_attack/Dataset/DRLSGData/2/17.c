struct   huTZIve {
    long  int yPtVkD;
    char EhQ98CTm [(411 - 385)];
}
huTZIve [(1356 - 356)];

int main () {
    int JvNdhPS [(329 - 303)] = {(61 - 61), (602 - 602), (833 - 833), (170 - 170), (230 - 230), (835 - 835), (849 - 849), (667 - 667), (536 - 536), (234 - 234), (565 - 565), (540 - 540), (45 - 45), (16 - 16), (47 - 47), (439 - 439), (797 - 797), (714 - 714), (227 - 227), (149 - 149), (59 - 59), (482 - 482), (783 - 783), (983 - 983), (797 - 797), (286 - 286)};
    int q6Nsmu;
    int EX8FcBaELS;
    int OPj4pNxgQ;
    char Fn6h9pQU1e;
    int aSLfOPx9r0W;
    int qMoTUYh8urC2;
    q6Nsmu = (531 - 531);
    Fn6h9pQU1e = 'A';
    scanf ("%d", &qMoTUYh8urC2);
    {
        OPj4pNxgQ = (590 - 590);
        for (; OPj4pNxgQ < qMoTUYh8urC2;) {
            scanf ("%ld ", &huTZIve[OPj4pNxgQ].yPtVkD);
            scanf ("%s", huTZIve[OPj4pNxgQ].EhQ98CTm);
            OPj4pNxgQ = OPj4pNxgQ +(225 - 224);
        }
    }
    {
        OPj4pNxgQ = (461 - 461);
        for (; qMoTUYh8urC2 > OPj4pNxgQ;) {
            aSLfOPx9r0W = strlen (huTZIve[OPj4pNxgQ].EhQ98CTm);
            {
                EX8FcBaELS = (485 - 485);
                for (; aSLfOPx9r0W > EX8FcBaELS;) {
                    JvNdhPS[huTZIve[OPj4pNxgQ].EhQ98CTm[EX8FcBaELS] - 'A']++;
                    EX8FcBaELS = EX8FcBaELS +(622 - 621);
                }
            }
            OPj4pNxgQ = OPj4pNxgQ +(647 - 646);
        }
    }
    {
        OPj4pNxgQ = (363 - 363);
        for (; OPj4pNxgQ < (278 - 252);) {
            if (JvNdhPS[OPj4pNxgQ] > q6Nsmu) {
                Fn6h9pQU1e = OPj4pNxgQ +'A';
                q6Nsmu = JvNdhPS[OPj4pNxgQ];
            }
            OPj4pNxgQ = OPj4pNxgQ +(407 - 406);
        }
    }
    printf ("%c\n", Fn6h9pQU1e);
    printf ("%d\n", q6Nsmu);
    {
        OPj4pNxgQ = (966 - 966);
        for (; qMoTUYh8urC2 > OPj4pNxgQ;) {
            EX8FcBaELS = (797 - 797);
            for (; aSLfOPx9r0W > EX8FcBaELS;) {
                aSLfOPx9r0W = strlen (huTZIve[OPj4pNxgQ].EhQ98CTm);
                if (huTZIve[OPj4pNxgQ].EhQ98CTm[EX8FcBaELS] == Fn6h9pQU1e) {
                    printf ("%ld\n", huTZIve[OPj4pNxgQ].yPtVkD);
                }
                EX8FcBaELS = EX8FcBaELS +(712 - 711);
            }
            OPj4pNxgQ = OPj4pNxgQ +(731 - 730);
        }
    }
    return (151 - 151);
}

