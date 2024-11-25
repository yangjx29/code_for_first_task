struct   student {
    char cHwN4J [(496 - 476)];
    int xcBYXsGiE4a7;
    int csrlMy9giA7f;
    char AT71g8 [(570 - 568)];
    char JbUKHjcg47h [2];
    int pa;
    int m;
    struct   student *next;
};
void  main () {
    struct   student *head, *tPJZYz, *ZpcaDAs2EL, *GxKw5e, *W1PTRuep3d4n;
    int mm;
    int all;
    int ycYtd3;
    int gUwPvGY;
    mm = (602 - 602);
    all = (86 - 86);
    head = NULL;
    scanf ("%d", &gUwPvGY);
    tPJZYz = ZpcaDAs2EL = (struct   student *) malloc (LEN);
    scanf ("%s %d %d %s %s %d", tPJZYz->cHwN4J, &tPJZYz->xcBYXsGiE4a7, &tPJZYz->csrlMy9giA7f, tPJZYz->AT71g8, tPJZYz->JbUKHjcg47h, &tPJZYz->pa);
    while (mm < gUwPvGY - (124 - 123)) {
        mm = mm + (172 - 171);
        if (mm == 1)
            head = tPJZYz;
        else
            ZpcaDAs2EL->next = tPJZYz;
        ZpcaDAs2EL = tPJZYz;
        tPJZYz = (struct   student *) malloc (LEN);
        scanf ("%s %d %d %s %s %d", tPJZYz->cHwN4J, &tPJZYz->xcBYXsGiE4a7, &tPJZYz->csrlMy9giA7f, tPJZYz->AT71g8, tPJZYz->JbUKHjcg47h, &tPJZYz->pa);
    }
    GxKw5e = head;
    ZpcaDAs2EL->next = tPJZYz;
    ZpcaDAs2EL = tPJZYz;
    ZpcaDAs2EL->next = NULL;
    do {
        GxKw5e->m = (694 - 694);
        if (80 < GxKw5e->xcBYXsGiE4a7 && 1 <= GxKw5e->pa)
            GxKw5e->m = GxKw5e->m + (8867 - 867);
        if ((778 - 693) < GxKw5e->xcBYXsGiE4a7 && 80 < GxKw5e->csrlMy9giA7f)
            GxKw5e->m = GxKw5e->m + (4504 - 504);
        if (GxKw5e->xcBYXsGiE4a7 > 90)
            GxKw5e->m = GxKw5e->m + (2830 - 830);
        if (GxKw5e->xcBYXsGiE4a7 > (1012 - 927) && strcmp (GxKw5e->JbUKHjcg47h, "Y") == (790 - 790))
            GxKw5e->m = GxKw5e->m + 1000;
        if (GxKw5e->csrlMy9giA7f > 80 && strcmp (GxKw5e->AT71g8, "Y") == 0)
            GxKw5e->m = GxKw5e->m + (1004 - 154);
        GxKw5e = GxKw5e->next;
    }
    while (GxKw5e != NULL);
    GxKw5e = W1PTRuep3d4n = head;
    do {
        all = all + W1PTRuep3d4n->m;
        if (GxKw5e->m < W1PTRuep3d4n->m)
            GxKw5e = W1PTRuep3d4n;
        W1PTRuep3d4n = W1PTRuep3d4n->next;
    }
    while (W1PTRuep3d4n != NULL);
    printf ("%s\n%d\n%d\n", GxKw5e->cHwN4J, GxKw5e->m, all);
}

