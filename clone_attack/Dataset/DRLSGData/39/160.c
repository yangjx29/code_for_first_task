struct   student {
    char WAKpFq2DOd [(951 - 916)];
    int G7Req3Djs;
    int score;
    char oU3ybRGOA;
    char F4aZnEJzbe;
    int c1Uv6IZn7Hew;
    int money;
    struct   student *next;
};
struct   student *creat (void ) {
    struct   student *Vmel4PN;
    struct   student *HrlocI5;
    struct   student *zqX0JyQOLu;
    int LhVXEQW;
    int wD1PuaygL3;
    scanf ("%d", &LhVXEQW);
    wD1PuaygL3 = (723 - 723);
    zqX0JyQOLu = (struct   student *) malloc (sizeof (struct   student));
    scanf ("%s %d %d %c %c %d", &zqX0JyQOLu->WAKpFq2DOd, &zqX0JyQOLu->G7Req3Djs, &zqX0JyQOLu->score, &zqX0JyQOLu->oU3ybRGOA, &zqX0JyQOLu->F4aZnEJzbe, &zqX0JyQOLu->c1Uv6IZn7Hew);
    HrlocI5 = zqX0JyQOLu;
    Vmel4PN = zqX0JyQOLu;
    for (wD1PuaygL3 = (454 - 454); wD1PuaygL3 < LhVXEQW; wD1PuaygL3 = wD1PuaygL3 + 1) {
        HrlocI5 = Vmel4PN;
        HrlocI5->money = (50 - 50);
        if ((HrlocI5->G7Req3Djs > (698 - 618)) && ((227 - 227) < HrlocI5->c1Uv6IZn7Hew))
            HrlocI5->money = HrlocI5->money + 8000;
        if (((1011 - 926) < HrlocI5->G7Req3Djs) && (HrlocI5->score > (824 - 744)))
            HrlocI5->money = HrlocI5->money + (4181 - 181);
        if (90 < HrlocI5->G7Req3Djs)
            HrlocI5->money = HrlocI5->money + 2000;
        if ((85 < HrlocI5->G7Req3Djs) && (!('Y' != HrlocI5->F4aZnEJzbe)))
            HrlocI5->money = HrlocI5->money + (1168 - 168);
        if (((166 - 86) < HrlocI5->score) && (HrlocI5->oU3ybRGOA == 'Y'))
            HrlocI5->money = HrlocI5->money + (1258 - 408);
        if (wD1PuaygL3 < LhVXEQW -1) {
            Vmel4PN = (struct   student *) malloc (sizeof (struct   student));
            scanf ("%s %d %d %c %c %d", &Vmel4PN->WAKpFq2DOd, &Vmel4PN->G7Req3Djs, &Vmel4PN->score, &Vmel4PN->oU3ybRGOA, &Vmel4PN->F4aZnEJzbe, &Vmel4PN->c1Uv6IZn7Hew);
            HrlocI5->next = Vmel4PN;
        }
    }
    HrlocI5->next = NULL;
    return (zqX0JyQOLu);
}

void  main () {
    int x7fNSkOEq;
    int bP92Q0BDO;
    struct   student *Vmel4PN;
    struct   student *HrlocI5;
    struct   student *r;
    Vmel4PN = creat ();
    x7fNSkOEq = (506 - 506);
    bP92Q0BDO = 0;
    for (HrlocI5 = Vmel4PN; HrlocI5 != NULL;) {
        if (HrlocI5->money > x7fNSkOEq) {
            x7fNSkOEq = HrlocI5->money;
            r = HrlocI5;
        }
        bP92Q0BDO = bP92Q0BDO + HrlocI5->money;
        HrlocI5 = HrlocI5->next;
    }
    printf ("%s\n%d\n", r->WAKpFq2DOd, r->money);
    printf ("%d", bP92Q0BDO);
}

