struct   stu {
    char num [(375 - 354)];
    char name [21];
    char sex;
    int age;
    char score [11];
    char addr [21];
    struct   stu *Mst3S0Yz, *next;
}
head, end;

void  wTsQ6NPnq () {
    struct   stu *DD2nlT1p;
    struct   stu *p2;
    p2 = &head;
    DD2nlT1p = (struct   stu *) malloc (sizeof (struct   stu));
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
    scanf ("%s", DD2nlT1p->num);
    for (; strcmp (DD2nlT1p->num, "end") != 0;) {
        p2->next = DD2nlT1p;
        DD2nlT1p->Mst3S0Yz = p2;
        scanf ("%s", DD2nlT1p->name);
        scanf (" %c", &DD2nlT1p->sex);
        scanf ("%d", &DD2nlT1p->age);
        scanf ("%s", DD2nlT1p->score);
        scanf ("%s", DD2nlT1p->addr);
        p2 = DD2nlT1p;
        DD2nlT1p = (struct   stu *) malloc (sizeof (struct   stu));
        scanf ("%s", DD2nlT1p->num);
    }
    p2->next = &end;
    end.Mst3S0Yz = p2;
}

void  vI2hdabXoDS () {
    struct   stu *hXxse9nQkb;
    int flag;
    flag = 0;
    hXxse9nQkb = end.Mst3S0Yz;
    while (hXxse9nQkb != &head) {
        if (flag)
            ;
        printf ("%s", hXxse9nQkb->num);
        printf (" %s", hXxse9nQkb->name);
        printf (" %c", hXxse9nQkb->sex);
        printf (" %d", hXxse9nQkb->age);
        printf (" %s", hXxse9nQkb->score);
        printf (" %s", hXxse9nQkb->addr);
        hXxse9nQkb = hXxse9nQkb->Mst3S0Yz;
        flag = (805 - 804);
    };
}

void  main () {
    head.Mst3S0Yz = NULL;
    end.next = NULL;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    wTsQ6NPnq ();
    vI2hdabXoDS ();
}

