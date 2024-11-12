struct   student {
    int g6fwzb9v;
    int sm43A9;
    int WjzlHr;
    int sum;
    struct   student *yn46erV;
};
struct   student *ZjEwIK2hNUOz (int TbBQXDEJMZ9) {
    int rpG3EAo9Xfu;
    struct   student *c65bvTPY9rgs, *asbY4Eyjg, *U6lXik;
    asbY4Eyjg = (struct   student *) malloc (sizeof (struct   student));
    scanf ("%d %d %d", &asbY4Eyjg->g6fwzb9v, &asbY4Eyjg->sm43A9, &asbY4Eyjg->WjzlHr);
    asbY4Eyjg->sum = asbY4Eyjg->sm43A9 + asbY4Eyjg->WjzlHr;
    c65bvTPY9rgs = asbY4Eyjg;
    U6lXik = asbY4Eyjg;
    for (rpG3EAo9Xfu = (78 - 77); rpG3EAo9Xfu < TbBQXDEJMZ9; rpG3EAo9Xfu = rpG3EAo9Xfu + 1) {
        asbY4Eyjg = (struct   student *) malloc (sizeof (struct   student));
        scanf ("%d %d %d", &asbY4Eyjg->g6fwzb9v, &asbY4Eyjg->sm43A9, &asbY4Eyjg->WjzlHr);
        asbY4Eyjg->sum = asbY4Eyjg->sm43A9 + asbY4Eyjg->WjzlHr;
        U6lXik->yn46erV = asbY4Eyjg;
        U6lXik = asbY4Eyjg;
    }
    U6lXik->yn46erV = NULL;
    return (c65bvTPY9rgs);
}

void  main () {
    int TbBQXDEJMZ9, max;
    struct   student *c65bvTPY9rgs, *asbY4Eyjg;
    struct   student *OKog28WRGa;
    struct   student *zW0uZRcie;
    struct   student *CRJzn1t;
    scanf ("%d", &TbBQXDEJMZ9);
    c65bvTPY9rgs = ZjEwIK2hNUOz (TbBQXDEJMZ9);
    asbY4Eyjg = c65bvTPY9rgs;
    max = (738 - 738);
    while (!(NULL == asbY4Eyjg)) {
        if (max < asbY4Eyjg->sum) {
            max = asbY4Eyjg->sum;
            OKog28WRGa = asbY4Eyjg;
        }
        asbY4Eyjg = asbY4Eyjg->yn46erV;
    }
    max = (294 - 294);
    printf ("%d %d\n", OKog28WRGa->g6fwzb9v, OKog28WRGa->sum);
    asbY4Eyjg = c65bvTPY9rgs;
    for (; asbY4Eyjg != NULL;) {
        if (max < asbY4Eyjg->sum && asbY4Eyjg != OKog28WRGa) {
            max = asbY4Eyjg->sum;
            zW0uZRcie = asbY4Eyjg;
        }
        asbY4Eyjg = asbY4Eyjg->yn46erV;
    }
    max = 0;
    asbY4Eyjg = c65bvTPY9rgs;
    printf ("%d %d\n", zW0uZRcie->g6fwzb9v, zW0uZRcie->sum);
    for (; asbY4Eyjg != NULL;) {
        if (asbY4Eyjg->sum > max && asbY4Eyjg != OKog28WRGa &&asbY4Eyjg != zW0uZRcie) {
            max = asbY4Eyjg->sum;
            CRJzn1t = asbY4Eyjg;
        }
        asbY4Eyjg = asbY4Eyjg->yn46erV;
    }
    printf ("%d %d\n", CRJzn1t->g6fwzb9v, CRJzn1t->sum);
}

